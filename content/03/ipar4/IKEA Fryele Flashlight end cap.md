---
cssclasses:
  - page-blueprint
---
```
color("pink")
group() {
    difference() {
        group() {
            cylinder(9,8.9, 8.9);
            translate([-(28.65/2), -(5.9/2), 0]) {
                cube([28.65, 5.9, 2.1]);
            }
            translate([0, 0, 14-1]) {
                cylinder(r=8.8, h=1);
            }
            translate([0, 0, 7.95]) {
                cylinder(r=8.75, h=13-7.95);
            }
        }
        translate([0,0,-0.1]) {
            cylinder(5.55+0.1,8.9-2.3, 8.9-2.3);
        }
        translate([0, 0, 7.95]) {
            cylinder(2,7.4, 7.4);
            cylinder(2,8.9+0.1, 8.9+0.1);
        }
        translate([0, 1, 14+20-1]) {
            rotate([90, 0, 0]) {
                cylinder(r=20, h=2);
            }
        }
    }
    translate([0, 0, 7.95]) {
        cylinder(2,7.4, 7.4);
    }
}
```