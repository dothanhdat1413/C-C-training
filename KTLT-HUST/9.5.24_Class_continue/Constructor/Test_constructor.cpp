#include <iostream>


class A{
    private:
        int a,b;
    public:
        A(){a=0;b=0;std::cout<<"khong doi\n";}
        A(int x,int y){a=x;b=y;std::cout<<"full doi\n";}
        A(int x){a=x;std::cout<<"1 doi\n";}

        ~A(){
            std::cout<<"huy \n";
        }


};
int main() {
    A a;
    A b(1);
    A c(1,2);

    A* d=new A(1,2);
    delete d;
}