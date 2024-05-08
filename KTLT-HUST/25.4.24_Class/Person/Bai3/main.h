#pragma once 

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