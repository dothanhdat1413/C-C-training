#include "main.h"
#include <string>

Person person1;
int main(){
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