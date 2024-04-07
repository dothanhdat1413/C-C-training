#include <stdio.h>

typedef struct{
	float Re,Im;
}so_phuc;
void tong(so_phuc x1,so_phuc x2, so_phuc& tong);
void hieu(so_phuc x1,so_phuc x2, so_phuc& hieu_z);
void tich(so_phuc x1,so_phuc x2, so_phuc& tich_z);
void tong_hieu(so_phuc x1,so_phuc x2, so_phuc& tong_z,so_phuc& hieu_z);
void printf_z(so_phuc z);
int main(){
	so_phuc a,b;
	printf("Nhap so phuc x1=a1+i.b1 (a1,b1):");
	scanf("%f %f",&a.Re,&a.Im);
	printf("Nhap so phuc x2=a2+i.b2 (a2,b2)");
	scanf("%f %f",&b.Re,&b.Im);
	
	so_phuc tong_z,hieu_z,tich_z;
	tong(a,b,tong_z);
	printf("Tong cua x1=%.2f +i.%.2f va x2=%.2f +i.%.2f la: %.2f +i.%.2f",a.Re,a.Im,b.Re,b.Im,tong_z.Re,tong_z.Im);
	hieu(a,b,hieu_z);
	printf("Hieu cua x1=%.2f +i.%.2f va x2=%.2f +i.%.2f la: %.2f +i.%.2f",a.Re,a.Im,b.Re,b.Im,hieu_z.Re,hieu_z.Im);
	tich(a,b,tich_z);
	printf("Tich cua x1=%.2f +i.%.2f va x2=%.2f +i.%.2f la: %.2f +i.%.2f",a.Re,a.Im,b.Re,b.Im,tich_z.Re,tich_z.Im);
	tong_hieu(a,b,tong_z,hieu_z);
	
	printf("Tong: "); printf_z(tong_z);
	printf("Hieu: "); printf_z(hieu_z);
	printf("Tich: "); printf_z(tich_z);
}

void tong(so_phuc x1,so_phuc x2, so_phuc& tong_z){
	tong_z.Re=x1.Re+x2.Re;
	tong_z.Im=x1.Im+x2.Im;
}
void hieu(so_phuc x1,so_phuc x2, so_phuc& hieu_z){
	hieu_z.Re=x1.Re-x2.Re;
	hieu_z.Im=x1.Im-x2.Im;
}
void tich(so_phuc x1,so_phuc x2, so_phuc& tich_z){
	tich_z.Re=x1.Re*x2.Re-x1.Im*x2.Im;
	tich_z.Im=x1.Im*x2.Re+x2.Im*x1.Re;
}
void tong_hieu(so_phuc x1,so_phuc x2, so_phuc& tong_z,so_phuc& hieu_z){
	tong_z.Re=x1.Re+x2.Re;
	tong_z.Im=x1.Im+x2.Im;
	hieu_z.Re=x1.Re-x2.Re;
	hieu_z.Im=x1.Im-x2.Im;
}
void printf_z(so_phuc z){
	printf("%.2f +i.%.2f",z.Re,z.Im);
}
