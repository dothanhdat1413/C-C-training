#include <stdio.h>
#include <math.h>
char s[100];
int num[100];

void frequency_upcase(char* s,char c,int& count);
void sum_square(long long& sum,int x1);
void sum_frac(float& sum2,int x2);
void sum_odd(long int& sum3,int x3);

int main(){
	//----------------------------1,2--------------------
	printf("Nhap 1 xau: ");
	gets(s);
	printf("%s",s);
	
	char c;
	printf("Nhap 1 chu cai: ");
	fflush(stdin); 
	scanf("%c",&c);
	printf("%c\n",c);
	int count;
	frequency_upcase(s,c,count);
	printf("So lan xuat hien cua '%c' la: %d\n",c,count);
	printf("In hoa cac chu cai trong xau s: %s",s);	
	//----------------------------3----------------------
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
//	int x4,count4=0;
//	printf("\nNhap so x4: ");
//	scanf("%d",&x4);
//	if(!(x4%2)){
//		printf("X4 khong phai so nguyen to\n");
//	}
//	else{
//		for(i=3;i<=sqrt(x4);i+=2){
//			if(!(x4%i)) {
//				printf("X4 khong phai so nguyen to\n");
//				count4++;
//			}
//		}
//	}
//	if(!count4) printf("X4 la so nguyen to");
//	//----------------------------7----------------------
//	int i=0;
//	do{
//		scanf("%d",&num[i]);
//		if(num[i]==0) break;
//		i++;
//	}while(1);
//	
//	for(i=0;i<100;i++){
//		printf("%d ",num[i]);
//	}
}

void frequency_upcase(char* s,char c,int& count){
	int i;
	count=0;
	for(i=0;i<100;i++){
		if(s[i]==c) count ++;
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
