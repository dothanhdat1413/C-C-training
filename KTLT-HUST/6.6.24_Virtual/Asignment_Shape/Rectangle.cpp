
#include "main.h"



double Rectangle::get_width(){
    return width;
}
void Rectangle::set_width(double _width){
    width=_width;
}
double Rectangle::get_height(){
    return height;
}
void Rectangle::set_height(double _height){
    height=_height;
}

double Rectangle::get_area(){
    double area=width*height;
    return area;
}

double Rectangle::get_perimeter(){
    double perimeter=2*(width+height);
    return perimeter;
}

void Rectangle::display(){
    cout<<"Rectangle"<<endl;
    Shape::display();
    cout<<"Width: "<<width<<endl;
    cout<<"Height: "<<height<<endl;
    double perimeter=get_perimeter();
    double area=get_area();
    cout<<"Area: "<<area<<endl;
    cout<<"Perimeter: "<<perimeter<<endl;
}