#include <iostream>
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
