
#include "main.h"

double Circle::get_radius(){
    return radius;
}

void Circle::set_radius(double _radius){
    radius=_radius;
}

double Circle::get_area(){
    double area=3.14*radius*radius;
    return area;
}

double Circle::get_perimeter(){
    double perimeter=2*3.14*radius;
    return perimeter;
}

void Circle::display(){
    cout<<"Circle"<<endl;
    Shape::display();
    cout<<"Radius: "<<radius<<endl;
    double perimeter=get_perimeter();
    double area=get_area();
    cout<<"Area:"<<area<<endl;
    cout<<"Perimeter:"<<perimeter<<endl;
}