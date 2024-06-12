#include "main.h"

Shape::Shape(string _color,bool _filled){
    color=_color;
    filled=_filled;
}

string Shape::get_color(){
    return color;
}

void Shape::set_color(string _color){
    color=_color;
}

bool Shape::check_filled(){
    bool check=(filled==0)?0:1;
    return check;
}

void Shape::set_filled(bool _filled){
    filled=_filled;
}

void Shape::display(){
    cout<<"Color: "<<color<<endl;
    if(filled)cout<<"Filled";
    else cout<<"Not filled";
}


