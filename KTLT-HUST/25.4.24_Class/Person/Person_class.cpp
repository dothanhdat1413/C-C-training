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
		std::string ten;
		date ngaysinh;
		std::string que;
	public:
		void set_ten();
		void set_ngaysinh();
		void set_que();
		
		std::string get_ten();
		date get_ngaysinh(date& _ngaysinh);
		std::string get_que();
		
		void nhap_thongtin();
		void xuat_thongtin();
};

int main(){
	Person Dat;
	Dat.nhap_thongtin();
	Dat.xuat_thongtin();
	std::string ten=Dat.get_ten();
	std::cout<<"\n"<<ten;
}

void Person::set_ten(){
	std::cin.ignore();
	std::cout<< "\nNhap ho & ten: ";
	std::cin>>ten;
}

void Person::set_ngaysinh(){
	std::cin.ignore();
	std::cout<<"\nNhap ngay sinh (dd mm yy ): ";
	std::cin>> ngaysinh.ngay >> ngaysinh.thang >> ngaysinh.nam;
}

void Person::set_que(){
	std::cin.ignore();
	std::cout<<"\nNhap que quan: ";
	std::cin>>que;
}

void Person::nhap_thongtin(){
	set_ten();
	set_ngaysinh();
	set_que();
}

std::string Person::get_ten(){
	return ten;
}

date Person::get_ngaysinh(date& _ngaysinh){
	_ngaysinh=ngaysinh;
}

std::string Person::get_que(){
	return que;
}

void Person::xuat_thongtin(){
	std::cout <<"\nHo & ten: "<<ten;
	std::cout <<"\nNgay sinh (dd mm yy): " << ngaysinh.ngay <<' '<< ngaysinh.thang <<' '<< ngaysinh.nam;
	std::cout <<"\nQue quan: "<< que;
}
