#include <iostream>
#include <stdlib.h>

void swap(int& a,int& b);
int* mang_so_chan_1(int* a, int size_mang, int& so_chan);// Ham co dau vao la mang tinh
void dao_nguoc_mang(int* a,int size_mang);
void copy_dao_nguoc_mang(int* a, int*b, int size_mang);


int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int b[5]={1,2,3,4,5};
	
	dao_nguoc_mang(b,5);

	int i=0;
	for(i=0;i<5;i++){
		std::cout<<b[i]<<" ";
	}
	std::cout<<'\n';
	
	dao_nguoc_mang(a,10);
	for(i=0;i<5;i++){
		std::cout<<a[i]<<" ";
	}
	std::cout<<'\n';
//###########################################################
	int c[10];
	copy_dao_nguoc_mang(a,c,10);
	for(i=0;i<10;i++){
		std::cout<<c[i]<<" ";
	}
	std::cout<<'\n';
	for(i=0;i<10;i++){
		std::cout<<a[i]<<" ";
	}
	std::cout<<'\n';
//###########################################################
	int so_chan=0;
	int* a1_mang_so_chan= mang_so_chan_1(a,10,so_chan);
	
	std:: cout <<"So so chan:"<<so_chan<< '\n';
	
	for(i=0;i<so_chan;i++){
		std :: cout << a1_mang_so_chan[i] << '\n';
	}
	delete[] a1_mang_so_chan;
	
	int n;
	std::cout << "Nhap so luong phan tu cua ham: ";
	std::cin >> n;
	int* a2_mang_so_chan = (int*) malloc(n*sizeof(int));
	std::cout << "Nhap cac phan tu cua mang so chan: ";
	for(i=0;i<n;i++){
		std::cin >> a2_mang_so_chan[i];
	}
//###########################################################
	so_chan=0;
	int* a3_mang_so_chan = mang_so_chan_1(a2_mang_so_chan,n,so_chan);
	delete[] a2_mang_so_chan;
	std:: cout <<"So so chan:"<<so_chan<< '\n';
	
	for(i=0;i<so_chan;i++){
		std :: cout << a3_mang_so_chan[i] << '\n';
	}
	delete[] a3_mang_so_chan;
	
	
}

void swap(int& a,int&b){
	int temp=a;
	a=b;
	b=temp;
}

int* mang_so_chan_1(int* a, int size_mang, int& so_chan){ 
	int i=0;
	int count=0;
	for(i=0;i<size_mang;i++){
		if(!(a[i]%2)){
			count++;
		}
	}
	so_chan=count;
	
	int* p= new int[count];
	
	int j=0;
	for(i=0;i<size_mang;i++){
		if(!(a[i]%2)){
			p[j]=a[i];
			j++;
		}
	}
	
	return p;
}

void dao_nguoc_mang(int*a,int size_mang){
	int i=0;
	for(i=0;i<(size_mang/2);i++){
		swap(a[i],a[size_mang-1-i]);
	}
}

void copy_dao_nguoc_mang(int* a,int* b, int size_mang){
	int i=0;
	for(i=0;i<size_mang;i++){
		b[i]=a[size_mang-1-i];
	}
}
