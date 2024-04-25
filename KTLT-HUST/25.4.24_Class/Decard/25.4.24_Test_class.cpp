#include <iostream>
#include "header.h"

int main(){
	Decard A,B;
	// nhap diem
	A.nhap_Diem();
	B.nhap_Diem();
	// tinh khoang cach giua 2 diem
	float kc;
	tinh_Khoang_Cach(A,B,kc);
	printf("Khoang cach giua 2 diem: %f\n",kc);
	// ham thay doi toa do
	A.xuat_Diem();
	A.sua_Toa_Do();
	A.xuat_Diem();	
}


