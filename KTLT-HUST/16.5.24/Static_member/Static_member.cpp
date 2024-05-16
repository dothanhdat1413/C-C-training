#include <iostream>

class bill {
    int code;
    int value;
    static int count;
    static long sum_value;
    static void print_all();
    public:
    bill(int , long);
    void apend(long );
    ~bill();
};

int main(){
    bill A(0,91);
    bill B(1,20);
    bill::print_all();
}


int bill::count=0;
long bill::sum_value=0;

void bill::print_all(){
    std::cout<<"\nTong so hoa don:"<<count;
    std::cout<<"\nTong so tien ban"<<sum_value;
}

bill::bill(int c,long v){
    count++;
    sum_value+=v;
    std::cout<<"Hoa don moi duoc tao";
}

bill::~bill(){
    std::cout<<"Huy hoa don";
    count--;
    sum_value-=value;
}

void bill::apend(long v){
    sum_value-=value;
    sum_value+=v;
}
