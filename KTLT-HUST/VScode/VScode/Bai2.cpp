#include <stdio.h>
#include <string.h>

typedef struct{
	int day;
	int month;
	int year;	
}date;
enum status{NHAT=1,HAI,BA,BON,NAM,SAU,BAY};
typedef struct{
	long Mssv;
	char Name[30];
	float GPA;
	status Status;
	date NgaySinh;
} SinhVien;

void output_Infor(SinhVien);//hàm hiển thị dữ liệu của một sinh viên
void input_Infor(SinhVien&);//hàm nhập dữ liệu cho một sinh viên
void averrage_GPA(SinhVien* ,int, float&);//hàm tính điểm GPA trung bình của một mảng sinh viên

int main(){
	// ---------------------1------------------------
	int n;
	printf("\n Nhap so sinh vien:"); scanf("%d",&n);
	SinhVien lop_sv[n];
	int i;
	for(i=0;i<n;i++){
		printf("\nSinh vien so %d",i+1);
		input_Infor(lop_sv[i]);
	}
	// ---------------------2------------------------
	for(i=0;i<n;i++){
		printf("\nSinh vien so %d",i+1);
		output_Infor(lop_sv[i]);
	}
	// ---------------------3------------------------
	float average_GPA=0;
    averrage_GPA(lop_sv,n,average_GPA);
    printf("\nGPA trung binh: %.2f",average_GPA);
}

void output_Infor(SinhVien sv){
	printf("\nThong tin sinh vien:\n");
	printf(" + Ho va ten: %s		",sv.Name);
	printf("Ngay sinh: %d/%d/%d\n",sv.NgaySinh.day,sv.NgaySinh.month,sv.NgaySinh.year);
	printf(" + Ma so sinh vien: %ld\n",sv.Mssv);
	printf(" + Trang thai: Sinh vien nam %d\n",sv.Status);
	printf(" + GPA: %.2f",sv.GPA);
}

void input_Infor(SinhVien& sv){
	printf("\nNhap thong tin sinh vien:\n"); fflush(stdin);
	printf(" + Ho va ten: "); gets(sv.Name); fflush(stdin);
	printf(" + Ngay sinh (dd mm yy):"); scanf("%d %d %d",&sv.NgaySinh.day,&sv.NgaySinh.month,&sv.NgaySinh.year);
	printf(" + Ma so sinh vien: "); scanf("%ld",&sv.Mssv);
	printf(" + Trang thai: Sinh vien nam (nhap so):"); scanf( "%d" ,&sv.Status);
	printf(" + GPA:"); scanf("%f",&sv.GPA);
}

void averrage_GPA(SinhVien* sv,int n, float& av_GPA){
    int i=0;
    for(i=0;i<n;i++)av_GPA+=sv[i].GPA;
    av_GPA/=n;
}