
#include <iostream>
#include <string>

class date{
	public:
		int ngay;
		int thang;
		int nam;
};
class Person{
	private:
		char ten[50];
		date ngaysinh;
		char que[100];
	public:
		void set_ten();
		void set_ngaysinh();
		void set_que();
		
		std::string get_ten();
		date get_ngaysinh();
		std::string get_que();

        void push_ten(std::string& out_ten);
        void push_ngaysinh(date& out_ngaysinh);
        void push_que(std::string& out_que);
		
		void nhap_thongtin();
		void xuat_thongtin();
};

int main(){
    
    Person person1;
    person1.nhap_thongtin();
    person1.xuat_thongtin();
    
    std::string ten_nguoi; 
    person1.push_ten(ten_nguoi);
    std::cout<<'\n'<<"Ho va ten: "<<ten_nguoi;

    std::string que_nguoi;
    person1.push_que(que_nguoi);
    std::cout<<'\n'<<"Que quan: "<<que_nguoi;

    date ngaysinh_nguoi;
    person1.push_ngaysinh(ngaysinh_nguoi);
    std::cout <<'\n'<<"Ngay sinh: "<< ngaysinh_nguoi.ngay <<' '<< ngaysinh_nguoi.thang <<' '<< ngaysinh_nguoi.nam;

}
void Person::set_ten(){
	std::cin.ignore();
	std::cout<< "\nNhap ho & ten: ";
	std::cin.getline(ten,50);
}

void Person::set_ngaysinh(){
	std::cin.ignore();
	std::cout<<"\nNhap ngay sinh (dd mm yy ): ";
	std::cin>> ngaysinh.ngay >> ngaysinh.thang >> ngaysinh.nam;
}

void Person::set_que(){
	std::cin.ignore();
	std::cout<<"\nNhap que quan: ";
	std::cin.getline(que,100);
}

void Person::nhap_thongtin(){
	set_ten();
	set_ngaysinh();
	set_que();
}

std::string Person::get_ten(){
	std::string s_ten=ten;
	return s_ten;
}

date Person::get_ngaysinh(){
	return ngaysinh;
}

std::string Person::get_que(){
	std::string s_que=que;
	return s_que;
}

void Person::push_ten(std::string& out_ten){
	out_ten=get_ten();
}

void Person::push_ngaysinh(date& out_ngaysinh){
	out_ngaysinh=get_ngaysinh();
}

void Person::push_que(std::string& out_que){
	out_que=get_que();
}


void Person::xuat_thongtin(){
	std::cout <<"\nHo & ten: "<<ten;
	std::cout <<"\nNgay sinh (dd mm yy): " << ngaysinh.ngay <<' '<< ngaysinh.thang <<' '<< ngaysinh.nam;
	std::cout <<"\nQue quan: "<< que;
}