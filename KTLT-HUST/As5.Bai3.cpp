#include <stdio.h>
#include <math.h>

typedef struct {
	char ten[10];
	float x,y;
} toa_do;

void nhap_Diem(toa_do& );
float tinh_Khoang_Cach(toa_do ,toa_do ,float& );
void sua_Toa_Do(toa_do& );
void xuat_Diem(toa_do );

int main(){
	toa_do A,B;
	// nhap diem
	nhap_Diem(A);
	nhap_Diem(B);
	// tinh khoang cach giua 2 diem
	float kc;
	tinh_Khoang_Cach(A,B,kc);
	printf("Khoang cach giua 2 diem: %f\n",kc);
	// ham thay doi toa do
	xuat_Diem(A);
	sua_Toa_Do(A);
	xuat_Diem(A);	
}

void nhap_Diem(toa_do& A){;
	fflush(stdin);
	printf("Nhap ten diem (duoi 10 ky tu): ");
	gets(A.ten);
	printf("Nhap toa do x,y cua diem %s: ",A.ten);
	fflush(stdin);
	scanf("%f %f",&A.x,&A.y);
}
float tinh_Khoang_Cach(toa_do A,toa_do B, float& kc){
	kc=sqrt(pow((A.x-B.x),2)+pow((A.y-B.y),2));
	return kc;
}
void sua_Toa_Do(toa_do& A){
	printf("Sua toa do diem %s:\n",A.ten);
	char sua_x='0',sua_y='0';
	
	printf("Sua hoanh do ? (y/n): ");
	fflush(stdin);
	scanf("%c",&sua_x);
	if(sua_x=='y'){
		printf("Sua lai hoanh do diem %s :",A.ten);
		fflush(stdin);
		scanf("%f",&A.x);
	}
	
	printf("Sua tung do ? (y/n): ");
	fflush(stdin);
	scanf("%c",&sua_y);
	if(sua_y=='y'){
		printf("Sua lai tung do diem %s :",A.ten);
		fflush(stdin);
		scanf("%f",&A.y);
	}
}
void xuat_Diem(toa_do A){
	printf("Toa do diem %s: (%f,%f)\n",A.ten,A.x,A.y);
}
