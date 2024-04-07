#include <iostream>

void cap_phat_mang2chieu(int**&p,int n1,int n2);
int main(){
	int**p;
	int n1,n2;
	std::cout<< "Nhap so phan tu cua hang 1 va hang 2 cua mang: ";
	std::cin>>n1>>n2;
	
	cap_phat_mang2chieu(p,n1,n2);
	int i,j;
	std::cout<< "Mang da nhap la: \n";
	for(i=0;i<n1;i++){
		std::cout<<p[0][i]<<" ";
	}
	std::cout<<"\n";
	for(i=0;i<n2;i++){
		std::cout<<p[1][i]<<" ";
	}
	
	delete[] p[0];
	delete[] p[1];
	delete[] p;
}

void cap_phat_mang2chieu(int**&p,int n1, int n2){
	p=new int*[2];
	p[0]=new int[n1];
	p[1]=new int[n2];
	std::cout<<"Nhap cac phan tu cua hang 1:";
	int i=0;
	for(i=0;i<n1;i++){
		std::cin>>p[0][i];
	}
	std::cout<<"\nNhap cac phan tu cua hang 2:";
	for(i=0;i<n2;i++){
		std::cin>>p[1][i];
	}
	
}
