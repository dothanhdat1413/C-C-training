#include <iostream>
#include <math.h>

typedef struct{
	float x,y;
}Decard_struct;

class Decard {
	private:
		char ten[10];
		float x,y;
	public:
	void set_Diem();// nhập điểm 
	void set_x(float);
	void set_y(float);

	float get_x();
	float get_y();

	void push_x(Decard);
	void push_y(Decard);//
	void push_z(Decard);// gán đồng thời tung độ và hoành độ

	void xuat_Diem();

	float khoang_Cach(Decard ,float& ); // truyen vao điểm và khoảng cách
};

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

void Decard::set_Diem(){;
	fflush(stdin);
	std::cout<<"Nhap ten diem (duoi 10 ky tu): ";
	std::cin.getline(ten,sizeof(ten));
	std::cout<<"Nhap toa do x,y cua diem"<<ten<< ": ";
	fflush(stdin);
	std::cin>>x >>y;
}

void Decard::set_x(float in_x){
	x=in_x;
}

void Decard::set_y(float in_y){
	y=in_y;
}

void Decard::push_x(Decard A){
	A.set_x(x);
}

void Decard::push_y(Decard A){
	A.set_y(y);
}

void Decard::push_z(Decard A){
	A.set_x(x);
	A.set_y(y);
}

float Decard::get_x(){
	return x;
}

float Decard::get_y(){
	return y;
}

void Decard::xuat_Diem(){
	std::cout<<"Toa do diem"<<ten<<":"<<"("<<x<<","<< y<<")";
}

float Decard::khoang_Cach(Decard A, float& kc){
	float x1=A.get_x();
	float y1=A.get_y();
	kc=sqrt(pow((x1-x),2)+pow((y1-y),2));
	return kc;
}
