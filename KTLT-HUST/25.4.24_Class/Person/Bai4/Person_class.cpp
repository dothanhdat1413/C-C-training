#include <iostream>
#include <string>

#include "main.h"
        void push_ten(std::string& out_ten);
        void push_ngaysinh(date& out_ngaysinh);
        void push_que(std::string& out_que);


void Person::set_ten(){
	std::cin.ignore();
	std::cout<< "\nNhap ho & ten: ";
	std::getline(std::cin,ten);
}

void Person::set_ngaysinh(){
	std::cin.ignore();
	std::cout<<"\nNhap ngay sinh (dd mm yy ): ";
	std::cin>> ngaysinh.ngay >> ngaysinh.thang >> ngaysinh.nam;
}

void Person::set_que(){
	std::cin.ignore();
	std::cout<<"\nNhap que quan: ";
	std::getline(std::cin,que);
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
