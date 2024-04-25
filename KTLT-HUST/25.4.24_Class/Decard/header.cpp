#include <stdio.h>
#include <math.h>

#include "header.h"

void Decard::nhap_Diem(){;
	fflush(stdin);
	printf("Nhap ten diem (duoi 10 ky tu): ");
	gets(ten);
	printf("Nhap toa do x,y cua diem %s: ",ten);
	fflush(stdin);
	scanf("%f %f",&x,&y);
}
void Decard::sua_Toa_Do(){
	printf("Sua toa do diem %s:\n",ten);
	char sua_x='0',sua_y='0';
	
	printf("Sua hoanh do ? (y/n): ");
	fflush(stdin);
	scanf("%c",&sua_x);
	if(sua_x=='y'){
		printf("Sua lai hoanh do diem %s :",ten);
		fflush(stdin);
		scanf("%f",&x);
	}
	
	printf("Sua tung do ? (y/n): ");
	fflush(stdin);
	scanf("%c",&sua_y);
	if(sua_y=='y'){
		printf("Sua lai tung do diem %s :",ten);
		fflush(stdin);
		scanf("%f",&y);
	}
}
void Decard::xuat_Diem(){
	printf("Toa do diem %s: (%f,%f)\n",ten,x,y);
}

float Decard::xuat_X(){
	return x;
}

float Decard::xuat_Y(){
	return y;
}
float Decard::khoang_Cach(Decard A, float& kc){
	float x1=A.xuat_X();
	float y1=A.xuat_Y();
	kc=sqrt(pow((x1-x),2)+pow((y1-y),2));
	return kc;
}
