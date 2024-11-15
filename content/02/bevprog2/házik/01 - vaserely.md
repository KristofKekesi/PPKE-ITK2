![[vaserely.png]]
```cpp
#include "graphics.hpp"

using namespace genv; int main()
{{
	gout.open(500,500);
	//gout << font("LiberationSans-Regular.ttf",20);
	// jobb felso
	for (int i=0; i<21; i++)
	{
		gout << color(0 + 12 * i, 255 - 12 * i, 85);
		gout << move_to(450 - 10 * i,250);
		gout << line_to(250,250 - 10 * i);
	}
	// bal felso
	for (int i=0; i<21; i++)
	{
		gout << color(255 - 12 * i, 0 + 12 * i, 85);
		gout << move_to(50 + 10 * i,250);
		gout << line_to(250,250 - 10 * i);
	}
	// jobb also
	for (int i=0; i<21; i++)
	{
		gout << color(0 + 12 * i, 255 - 12 * i, 85);
		gout << move_to(450 - 10 * i,250);
		gout << line_to(250,250 + 10 * i);
	}
	// bal also
	for (int i=0; i<21; i++)
	{
		gout << color(255 - 12 * i, 0 + 12 * i, 85);
		gout << move_to(50 + 10 * i,250);
		gout << line_to(250,250 + 10 * i);
	}
	gout << refresh;
	
	event ev;
	while(gin >> ev) {}
	return 0;
}}
```


```cpp
#include "graphics.hpp"

using namespace genv; int main()
{{
	gout.open(500,500);
	//gout << font("LiberationSans-Regular.ttf",20);
	// jobb felso
	for (int i=0; i<21; i++)
	{
		gout << color(255 - 12 * i, 0 + 12 * i, 85);
		gout << move_to(450 - 10 * i,250);
		gout << line_to(250,250 - 10 * i);
	}
	// bal felso
	for (int i=0; i<21; i++)
	{
		gout << color(255 - 12 * i, 0 + 12 * i, 85);
		gout << move_to(50 + 10 * i,250);
		gout << line_to(250,250 - 10 * i);
	}
	// jobb also
	for (int i=0; i<21; i++)
	{
		gout << color(255 - 12 * i, 0 + 12 * i, 85);
		gout << move_to(450 - 10 * i,250);
		gout << line_to(250,250 + 10 * i);
	}
	// bal also
	for (int i=0; i<21; i++)
	{
		gout << color(255 - 12 * i, 0 + 12 * i, 85);
		gout << move_to(50 + 10 * i,250);
		gout << line_to(250,250 + 10 * i);
	}
	gout << refresh;
	
	event ev;
	while(gin >> ev) {}
	return 0;
}}
```
