#include "student.h"


Student::Student(string name_, int age_, string gender_, string class_id_, int id_):Person(name_, age_, gender_){
    class_id = class_id_;
    id = id_;
}

void Student::set_class_id(string class_id_){
    class_id = class_id_;
}      

string Student::Student::get_class_id(){
    return class_id;
}

void Student::set_id(int id_){
    id = id_;
}

int Student::get_id(){
    return id;
}

void Student::display(){
    Person::display();
    cout << "Class id: " << class_id << endl;
    cout << "Id: " << id << endl;
}