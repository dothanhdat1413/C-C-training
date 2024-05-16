#include <iostream>
#include "main.h"

int main(){
	Decard A,B;
	// nhap diem
	A.set_Diem();
	B.set_Diem();
	// tinh khoang cach giua 2 diem
	float kc;
	A.khoang_Cach(B,kc);
	printf("Khoang cach giua 2 diem: %f\n",kc);
	// ham thay doi toa do
	A.xuat_Diem();
	B.xuat_Diem();	
}


