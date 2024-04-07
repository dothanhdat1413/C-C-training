#include <stdio.h>
#include <math.h>

char s[100];
int num[100];

void frequency(char* s,char c,int& count); // hàm tìm tần suất xuất hiện một ký tự nào đó trong một xâu ký tự
void up_case(char* s);  //hàm chuyển một xâu ký tự thành chữ hoa.
void sum_square(long long& sum,int x1); //Viết hàm tính giá trị biểu thức S(n) = 1^2 + 2^2 +3^2  + ... + n^2
void sum_frac(float& sum2,int x2);//Viết hàm tính giá trị biểu thức S(n) = 1 + 1/2 +...+ 1/n
void sum_odd(long int& sum3,int x3);//Viết hàm tính tổng các giá trị lẻ nguyên dương nhỏ hơn số nguyên N
int check_prime(int z); // Viết hàm xác định tính nguyên tố của một số nguyên

int main(){
	
	printf("Nhap 1 xau: ");
	gets(s);
	printf("%s",s);

	//----------------------------1--------------------
	char c;
	printf("Nhap 1 chu cai: ");
	fflush(stdin); 
	scanf("%c",&c);
	printf("%c\n",c);
	int count;
	frequency(s,c,count);
	printf("So lan xuat hien cua '%c' la: %d\n",c,count);
	//----------------------------2--------------------
	up_case(s);
	printf("In hoa cac chu cai trong xau s: %s",s);	
	//----------------------------3--------------------
	int x1;
	long long sum1=0;
	printf("\nNhap so x1: ");
	scanf("%d",&x1);
	sum_square(sum1,x1);
	
	printf("S1(x1)= %ld",sum1);
	//----------------------------4----------------------
	int x2;
	float sum2=1;
	printf("\nNhap so x2: ");
	scanf("%d",&x2);
	sum_frac(sum2,x2); 
	printf("S2(x2)= %f",sum2);
	//----------------------------5----------------------	
	
	int x3;
	long int sum3=0;
	printf("\nNhap so x3: ");
	scanf("%d",&x3);
	sum_odd(sum3,x3);
	
	printf("Tong cac so nguyen duong le, nho hon x3: %ld",sum3);

//	//----------------------------6----------------------	
	int x4;
	printf("\nNhap so x4: ");
	scanf("%d",&x4);
	if(check_prime(x4)) printf("x4 la so nguyen to"); 
	else printf("x4 khong phai la so nguyen to");
}

void frequency(char* s,char c,int& count){
	int i;
	count=0;
	for(i=0;i<100;i++){
		if(s[i]==c) count ++; // đếm chữ cái c
	}
}
void up_case(char* s){
	int i;
	for(i=0;i<100;i++){
		if((s[i]>='a')&&(s[i]<='z')) s[i]-=32;
	}
}
void sum_square(long long& sum1,int x1){
	int i=0;
	for(i=0;i<x1;i++){
		sum1 +=(i+1)*(i+1);
	}
}

void sum_frac(float& sum2,int x2){
	int i=0;
	for(i=1;i<=x2;i++){
		sum2 +=1/(float)i;
	}
}

void sum_odd(long int& sum3,int x3){
	int i=0;
	for(i=1;i<x3;i++){
		if(i%2){
			sum3+=i;
		}
	}
}

int check_prime(int z){
	if(z<2) return 0;
	if(z%2 ==0) return 0;
	int i;
	for(i=3;i<=sqrt(z);i+=2){
		if((z%i)==0) return 0;
	}
	return 1;
}