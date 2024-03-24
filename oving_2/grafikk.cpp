#include "grafikk.h"
#include "AnimationWindow.h"

void pythagoras() {
    TDT4102::AnimationWindow win{100,100,1000,750,"pythagoras"};


    TDT4102::Point Point1{300,250};
    TDT4102::Point Point2{300,400};
    TDT4102::Point Point3{500,400};

    TDT4102::Point Point4{150,250};
    TDT4102::Point Point5{150,400};

    TDT4102::Point Point6{300,550};
    TDT4102::Point Point7{500,550};

    TDT4102::Point Point8{400,150};
    TDT4102::Point Point9{600,300};

    win.draw_triangle(Point1,Point2,Point3, TDT4102::Color::red);
    win.draw_quad(Point1,Point2,Point4,Point5, TDT4102::Color::blue);
    win.draw_quad(Point2,Point3,Point6,Point7, TDT4102::Color::yellow);
    win.draw_quad(Point1,Point3,Point8,Point9, TDT4102::Color::green);

    win.wait_for_close();
}
