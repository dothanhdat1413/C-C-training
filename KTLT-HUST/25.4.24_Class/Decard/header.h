class Decard {
	private:
		char ten[10];
		float x,y;
	public:
	void nhap_Diem();
	void sua_Toa_Do();
	void xuat_Diem();
	float xuat_X();
	float xuat_Y();
	float khoang_Cach(Decard ,float& );
} ;

float tinh_Khoang_Cach(Decard ,Decard ,float& );
