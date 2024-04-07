#include <stdio.h>
#include <math.h>

void da_thuc(int* he_so, int n,float x,float& kq);

int main(){
	int n;
	int he_so[n+1];
	printf("Da thuc bac ?:");
	scanf("%d",&n);
	float x,kq;
	printf("Nhap cac he so [a0,a1,a2,...,an] cua da thuc a0+a1x^1+..+anx^n: ");
	int i;
	for(i=0;i<=n;i++){
		scanf("%d",&he_so[i]);
	}
	printf("Nhap gia tri cua x: ");
	scanf("%f",&x);
	da_thuc(he_so,n,x,kq);
	printf("Ket qua cua da thuc: %f", kq);
}

void da_thuc(int* he_so, int n,float x,float& kq){
	int i=0;
	for(i=0;i<=n;i++){
		kq+=he_so[i]*pow(x,n);
	}
}
