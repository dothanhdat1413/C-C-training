#include "person.h"

Person::Person(string name_, int age_, string gender_){
    name = name_;
    age = age_;
    gender = gender_;
}

Person::Person(Person& p){
    name = p.get_name();
    age = p.get_age();
    gender = p.get_gender();
}

string Person::get_name(){
    return name;
}

void Person::set_name(string name_){
    name = name_;
}

int Person::get_age(){
    return age;
}

void Person::set_age(int age_){
    age = age_;
}

string Person::get_gender(){
    return gender;
}

void Person::set_gender(string gender_){
    gender = gender_;
}

void Person::display(){
    cout <<"Person:\n"<<"Name:\t"<< name <<endl <<"Age:\t"<< age << endl<<"Gender:\t"<< gender << endl;
}
bool Person:: operator >(const Person& p){
    int a2=p.age;
    return (*this).age>a2;
}

void Person::input(){}


