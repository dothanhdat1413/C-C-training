#pragma once

#include <iostream>
#include <string>
using namespace std;
class Shape {
    private:
        string color;
        bool filled;
    public:
    Shape(string _color ="",bool _filled=0);
    string get_color();
    void set_color(string);
    bool check_filled();//is_filled
    void set_filled(bool);

    virtual double get_area()=0;
    virtual double get_perimeter()=0;//chu vi

    void display();
};

class Circle:Shape{
    private:
        double radius;

    public:
        Circle(string _color, bool _filled,double _radius=0):Shape(_color,_filled){
            radius=_radius;
        }
        double get_radius();
        void set_radius(double _radius);
        double get_area();
        double get_perimeter();
        void display();
};

class Rectangle:Shape{
    private:
        double width;
        double height;

    public:
        Rectangle(string _color, bool _filled,double _width=0,double _height=0):Shape(_color,_filled){
            width=_width;
            height=_height;
        }
        double get_width();
        void set_width(double _width);
        double get_height();
        void set_height(double _height);
        double get_area();
        double get_perimeter();
        void display();
};


class Square:Shape{
    private:
        double side;

    public:
        Square(string _color, bool _filled,double _side=0):Shape(_color,_filled){
            side=_side;
        }
        double get_side();
        void set_side(double _side);
        double get_area();
        double get_perimeter();
        void display();
};