#include "vector"
#include "string"
#include "graphics.hpp"


using namespace genv;
using namespace std;

const int XX = 400;
const int YY = 400;
const int WIDGET_COUNT = 5;

struct Widget {
    Widget() {
        width = rand()%(XX/5)+50; height = rand()%(YY/5)+50;
        x = rand()%XX; y = rand()%YY;
        x_offset = 0; y_offset = 0;
        counter = 0;
        selected = false;
    }
private:
    int x,y;
    int x_offset, y_offset;
    int width, height;
public:
    int counter;
    bool selected;
    void Move(int _x, int _y);
    void Print();
    bool InIt(int _x, int int_y, string type);
    void SetOffset(int _x, int int_y);
    void SetSize(int _x, int _y);
};

void Widget::Move(int _x, int _y) {
    x = _x - x_offset;
    y = _y - y_offset;

    if (x-width/2<2) { x=(width/2)+2; } else if (x+width/2>XX-2) { x=XX-(width/2)-2; }
    if (y-height/2<2) { y=(height/2)+2; } else if (y+height/2>YY-2) { y=YY-(height/2)-2; }
}

void Widget::SetOffset(int _x, int _y) {
    x_offset = _x - (x - width/2) - width/2;
    y_offset = _y - (y - height/2) - height/2;
}

bool Widget::InIt(int _x, int _y, string type) {
    if (type == "whole" && _x > x-width/2 && _x < x+width/2 && _y > y-height/2 && _y < y+height/2) {
        return true;
    } else if (type == "resize" && _x > (x+width/2) - 20 && _x < x+width/2 && _y > (y+height/2) - 10 && _y < y+height/2) {
        return true;
    } else {
        return false;
    }
}

void Widget::Print() {
    int r, g, b;
    if (selected) {
        r = 255; g = 255; b = 255;
    } else {
        r = 150; g = 150; b = 150;
    }
    gout << color(r,g,b) << move_to(x-width/2-1, y-height/2-1) << box(width+2, height+2);
    gout << color(100,50,255) << move_to(x-width/2, y-height/2) << box(width, height);
    gout << color(255,255,255) << move_to(x-gout.twidth(to_string(counter))/2, y) << text(to_string(counter));
    gout << color(r,g,b) << move_to(x-9+width/2, y-9+height/2) << box(10, 10);
}

void Widget::SetSize(int _x, int _y) {
    height = _y-(y-(height/2));
    width = _x-(x-(width/2));

    if (height < 50) {
        height = 50;
    }
    if (width < 50) {
        width = 50;
    }
}

void wipe() {
    int a = 0;
    gout << move_to(0,0) << color(a,a,a) << box(XX, YY);
}

int main() {
    vector<Widget> widgets;
    for (int i=0; i<WIDGET_COUNT; i++) {
        Widget widget = Widget();
        widgets.push_back(widget);
    }

    gout.open(XX, YY);
    gout << refresh;
    event ev;

    Widget* selected = nullptr;
    string action = "";

    gin.timer(1000 / 60);
    while(gin >> ev) {
        if (ev.type == ev_timer) {
            wipe();

            for (auto &widget : widgets) {
                widget.Print();
            }

            gout << refresh;
        } else if (ev.type == ev_mouse) {
            if (ev.button == -btn_left) {
                action = "";
                if (selected) {
                    (*selected).selected = false;
                    selected = nullptr;
                }
            } else if (ev.button == btn_left) {
                for (auto &widget : widgets) {
                    if (widget.InIt(ev.pos_x, ev.pos_y, "resize")) {
                        action = "resize";
                        selected = &widget;
                        widget.selected = true;
                        break;
                    } else if (widget.InIt(ev.pos_x, ev.pos_y, "whole")) {
                        action = "move";
                        widget.SetOffset(ev.pos_x, ev.pos_y);
                        selected = &widget;
                        widget.selected = true;
                        break;
                    }
                }
            } else if (ev.button == btn_wheelup) {
                for (auto &widget : widgets) {
                    if (widget.InIt(ev.pos_x, ev.pos_y, "whole")) {
                        widget.counter++;
                        break;
                    }
                }
            } else if (ev.button == btn_wheeldown) {
                for (auto &widget : widgets) {
                    if (widget.InIt(ev.pos_x, ev.pos_y, "whole")) {
                        widget.counter--;
                        break;
                    }
                }
            } else {
                if (selected) {
                    if (action == "move") {
                        selected->Move(ev.pos_x, ev.pos_y);
                    } else if (action == "resize") {
                        selected->SetSize(ev.pos_x, ev.pos_y);
                    }
                    selected->Print();
                }
            }
        }
    }
    return 0;
}
