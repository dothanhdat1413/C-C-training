#pragma once
#include "person.h"

class Student : public Person
{
    private:
        string class_id;
        int id;
    public:
        Student(string, int, string, string, int);
        void set_class_id(string);
        string get_class_id();
        void set_id(int);
        int get_id();
        void display();
};
