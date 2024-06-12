
#include "main.h"


double Square::get_side(){
    return side;
}

void Square::set_side(double _side){
    side=_side;
}

double Square::get_area(){
    double area=side*side;
    return area;
}

double Square::get_perimeter(){
    double perimeter=4*side;
    return perimeter;
}

void Square::display(){
    cout<<"Square"<<endl;
    Shape::display();
    cout<<"side: "<<side<<endl;
    double perimeter=get_perimeter();
    double area=get_area();
    cout<<"Area: "<<area<<endl;
    cout<<"Perimeter: "<<perimeter<<endl;
}