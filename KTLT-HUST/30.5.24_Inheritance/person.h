#pragma once

#include <iostream>
#include <string>

using namespace std;

class Person
{
        string name;
        int age;
        string gender;

    public:
        Person(string,int,string);
        Person(Person&);
        string get_name();
        void set_name(string);
        int get_age();
        void set_age(int);
        string get_gender();
        void set_gender(string);
        void display();
        void input(string,int,string);
        bool operator >(const Person&);
};
