/**
 * @file As6.cpp
 * @author Do Thanh Dat ( @dothanhdat1413 )
 * @version 0.1
 * @date 2024-04-07
 * @copyright Copyright (c) 2024
 */
 
#include <iostream>

void cap_Phat_Mangdong2chieu(int**&p, int& n1, int& n2);
void nhap_Mangdong2chieu(int**&p, int& n1, int& n2);
void thu_Hoi_Mangdong2chieu(int**&p, int n1);
void hien_Thi_Mang2chieu(int**p, int n1, int n2);
void hien_Thi_Mang2chieu(int* p, int n1, int n2);
int tong_Phan_tu_Mang2chieu(int**p, int n1, int n2, int& sum);
int tong_Phan_tu_Mang2chieu(int*p,int n1,int n2, int& sum);
int tong_Phan_tu_Hang_le(int**p, int n1, int n2, int& sum_le);
int tong_Phan_tu_Hang_le(int*p, int n1, int n2, int& sum_le);
int tong_Phan_tu_Hang_chan(int** p, int n1, int n2, int& sum_chan);
int tong_Phan_tu_Hang_chan(int* p, int n1, int n2, int& sum_chan);
void tim_Min_Max_Mang2chieu(int** p, int n1, int n2, int& min, int& max);
void tim_Min_Max_Mang2chieu(int* p, int n1, int n2, int& min, int& max);
void tim_Max_1Cot(int** p, int n1, int n2, int c, int& max_cot);
void tim_Max_1Cot(int* p, int n1, int n2, int c, int& max_cot);

int main(){
//------------------------------------Mang dong---------------------------------------
//######Khai bao mang dong 2 chieu#####
	int**p;
	int n1,n2;
//######Cap phat mang dong 2 chieu#####
	cap_Phat_Mangdong2chieu(p,n1,n2);	
//######Nhap mang dong 2 chieu#####
	nhap_Mangdong2chieu(p,n1,n2);
//######Hien thi mang dong 2 chieu#####
	hien_Thi_Mang2chieu(p,n1,n2);
//######Tinh tong cac phan tu#####
	int sum;
	tong_Phan_tu_Mang2chieu(p,n1,n2, sum);
	std::cout<<"Tong phan tu mang dong: "<<sum;
//######Tinh tong cac phan tu hang le#####
	int sum_le;
	tong_Phan_tu_Hang_le(p, n1, n2, sum_le);
	std::cout<<"\nTong phan tu hang le mang dong: "<<sum_le;
//######Tinh tong cac phan tu hang chan#####
	int sum_chan;
	tong_Phan_tu_Hang_chan(p, n1, n2, sum_chan);
	std::cout<<"\nTong phan tu hang chan mang dong: "<<sum_chan;
//######Tim gia tri lon nhat va nho nhat trong mang#####
	int min,max;
	tim_Min_Max_Mang2chieu(p, n1, n2, min, max);
	std::cout<<"\nGia tri lon nhat, nho nhat cua mang dong: "<<max<<", "<<min;
//######Tim gia tri lon nhat tren 1 cot#####
	int max_cot,c;
	std::cout<<"\nNhap cot: ";
	fflush(stdin);
	std::cin>>c;
	tim_Max_1Cot(p, n1, n2, c, max_cot);
	std::cout<<"Gia tri lon nhat trong cot "<< c<<" mang dong: "<<max_cot;
//######Thu hoi mang dong 2 chieu#####
	thu_Hoi_Mangdong2chieu(p,n1);
//------------------------------------Mang tinh---------------------------------------
//######Khai bao mang tinh 2 chieu#####	
	int p1[4][3]={0,1,2,
				  3,4,5,
				  6,7,8,
				  9,10,11};
	int* p1_p=&p1[0][0];
	n1=4;
	n2=3;
//######Hien thi mang dong 2 chieu#####
	std::cout<<'\n';
	hien_Thi_Mang2chieu(p1_p,n1,n2);
//######Tinh tong cac phan tu#####
	tong_Phan_tu_Mang2chieu(p1_p,n1,n2, sum);
	std::cout<<"Tong phan tu mang tinh: "<<sum;
//######Tinh tong cac phan tu hang le#####
	tong_Phan_tu_Hang_le(p1_p, n1, n2, sum_le);
	std::cout<<"\nTong phan tu hang le mang tinh: "<<sum_le;
//######Tinh tong cac phan tu hang chan#####
	tong_Phan_tu_Hang_chan(p1_p, n1, n2, sum_chan);
	std::cout<<"\nTong phan tu hang chan mang tinh: "<<sum_chan;
//######Tim gia tri lon nhat va nho nhat trong mang#####
	tim_Min_Max_Mang2chieu(p1_p, n1, n2, min, max);
	std::cout<<"\nGia tri lon nhat, nho nhat cua mang tinh: "<<max<<", "<<min;
//######Tim gia tri lon nhat tren 1 cot#####
	std::cout<<"\nNhap cot: ";
	fflush(stdin);
	std::cin>>c;
	tim_Max_1Cot(p1_p, n1, n2, c, max_cot);
	std::cout<<"Gia tri lon nhat trong cot "<< c<<" mang tinh: "<<max_cot;
}

void cap_Phat_Mangdong2chieu(int**&p,int& n1, int& n2){
	std::cout<< "Nhap so hang va cot cua mang: ";
	std::cin>>n1>>n2;
	p=new int*[n1];
	int i;
	for(i=0;i<n1;i++){
		p[i]=new int[n2];
	}
}

void nhap_Mangdong2chieu(int**&p,int& n1,int& n2){
	int i,j;
	for(i=0;i<n1;i++){
		std::cout<<"Nhap cac phan tu cua hang "<< i+1<< ":";
		fflush(stdin);
		for(j=0;j<n2;j++){
			std::cin>>p[i][j];
		}
	}
}

void thu_Hoi_Mangdong2chieu(int**&p,int n1){
	int i;
	for(i=0;i<n1;i++){
		delete[] p[i];
	}
	delete[] p;
}

void hien_Thi_Mang2chieu(int**p,int n1, int n2){
	std::cout<< "Mang da nhap la: \n";
	int i,j;
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			std::cout<<p[i][j]<<" ";
			if(j==n2-1) std::cout<<"\n";
		}
	}
}

void hien_Thi_Mang2chieu(int*p,int n1, int n2){
	std::cout<< "\nMang tinh la: \n";
	int i,j;
	for(i=0;i<(n1*n2);i++){
		std::cout<<*(p+i)<<" ";
		if(!((i+1)%n2)) std::cout<<'\n';
	}
}

int tong_Phan_tu_Mang2chieu(int**p,int n1,int n2,int& sum){
	int i,j;
	sum=0;
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			sum+=p[i][j];
		}
	}
	return sum;
}

int tong_Phan_tu_Mang2chieu(int* p,int n1,int n2, int& sum){
	int i,j;
	sum=0;
	for(i=0;i<(n1*n2);i++){
		sum+=*(p+i);
	}
	return sum;
}

int tong_Phan_tu_Hang_le(int**p, int n1, int n2, int& sum_le){
	int i,j;
	sum_le=0;
	for(i=0;i<n1;i+=2){
		for(j=0;j<n2;j++){
			sum_le+=p[i][j];
		}
	}
	return sum_le;
}

int tong_Phan_tu_Hang_le(int* p, int n1, int n2, int& sum_le){
	int i,j;
	sum_le=0;
	for(i=0;i<n1;i+=2){
		for(j=0;j<n2;j++){
			sum_le+=*(p+i*n2+j);
		}
	}
	return sum_le;
}

int tong_Phan_tu_Hang_chan(int**p, int n1, int n2, int& sum_chan){
	int i,j;
	sum_chan=0;
	for(i=1;i<n1;i+=2){
		for(j=0;j<n2;j++){
			sum_chan+=p[i][j];
		}
	}
	return sum_chan;
}

int tong_Phan_tu_Hang_chan(int* p, int n1, int n2, int& sum_chan){
	int i,j;
	sum_chan=0;
	for(i=1;i<n1;i+=2){
		for(j=0;j<n2;j++){
			sum_chan+=*(p+i*n2+j);
		}
	}
	return sum_chan;
}

void tim_Min_Max_Mang2chieu(int** p, int n1, int n2, int& min, int& max){
	int i,j;
	min=p[0][0];
	max=p[0][0];
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(p[i][j]>max) max=p[i][j];
			if(p[i][j]<min) min=p[i][j];
		}
	}
}

void tim_Min_Max_Mang2chieu(int* p, int n1, int n2, int& min, int& max){
	int i,j;
	min=*p;
	max=*p;
	
	for(i=0;i<(n1*n2);i++){
		if(*(p+i)>max) max=*(p+i);
		if(*(p+i)<min) min=*(p+i);
	}
}

void tim_Max_1Cot(int** p, int n1, int n2, int c, int& max_cot){
	if(c>n2){
		std::cout<<"Dau vao sai";
		return ;
	}
	int i=0;
	max_cot=p[0][c-1];
	for(i=0;i<n1;i++){
		if(p[i][c-1]>max_cot) max_cot=p[i][c-1];
	}
}

void tim_Max_1Cot(int* p, int n1, int n2, int c, int& max_cot){
	if(c>n2){
		std::cout<<"Dau vao sai";
		return ;
	}
	int i=0;
	max_cot=*(p+c-1);
	for(i=0;i<n1;i++){
		if(*(p+c-1+i*n2)>max_cot) max_cot=*(p+c-1+i*n2);
	}
}
