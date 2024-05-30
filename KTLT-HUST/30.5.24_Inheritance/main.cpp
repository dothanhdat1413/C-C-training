#include "person.h"
#include "student.h"

int main(){
    Person person1("Nguyen Van A", 18, "Male");
    person1.display();

    Person person2("Nguyen Van B", 19, "Female");
    person2.display();
    if(person1 > person2) cout<<person1.get_name()<<" gia hon "<<person2.get_name();
    else cout<<person1.get_name()<<" khong gia hon "<<person2.get_name();

    Student student1("Nguyen Van C", 20, "Male", "ET-E9",20224432);
    student1.display();
    if(student1 > person1) cout<<student1.get_name()<<" gia hon "<<person1.get_name();
    else cout<<student1.get_name()<<" khong gia hon "<<person1.get_name();

    return 0;
}