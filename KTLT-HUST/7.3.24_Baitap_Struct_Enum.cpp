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

void output_Infor(SinhVien);
void input_Infor(SinhVien*);
int main(){
//	// ---------------------task 1------------------------
//	SinhVien sv1={20224432,"Do Thanh Dat",3.8,HAI,{14,10,2004}};
//	output_Infor(sv1);
//	// ---------------------task 2------------------------
//	SinhVien sv2;
//	input_Infor(&sv2);
//	output_Infor(sv2);
	// ---------------------task 3------------------------
	int n;
	printf("\n Nhap so sinh vien:"); scanf("%d",&n);
	SinhVien lop_sv[n];
	int i=0; for(i=0;i<n;i++){
		printf("\nSinh vien so %d",i+1);
		input_Infor(&lop_sv[i]);
	}
	for(i=0;i<n;i++){
		printf("\nSinh vien so %d",i+1);
		output_Infor(lop_sv[i]);
	}
	// ---------------------task 4, GPA cao nhat------------------------
	float average_GPA=0;
	for(i=0;i<n;i++)average_GPA+=lop_sv[i].GPA;
	printf("\nGPA trung binh: %.2f",average_GPA/(float)n);	
	// ---------------------task 5, dung con tro thao tac mang------------------------
	SinhVien* lop_sv_p=lop_sv;	
	for(i=0;i<n;i++)	// tham chieu
		{
			output_Infor(*(lop_sv_p);
			lop_sv_p+=1;
		}
}

void output_Infor(SinhVien sv){
	printf("\nThong tin sinh vien:\n");
	printf(" + Ho va ten: %s		",sv.Name);
	printf("Ngay sinh: %d/%d/%d\n",sv.NgaySinh.day,sv.NgaySinh.month,sv.NgaySinh.year);
	printf(" + Ma so sinh vien: %ld\n",sv.Mssv);
	printf(" + Trang thai: Sinh vien nam %d\n",sv.Status);
	printf(" + GPA: %.2f",sv.GPA);
}

void input_Infor(SinhVien* sv_p){
	printf("\nNhap thong tin sinh vien:\n"); fflush(stdin);
	printf(" + Ho va ten: "); gets(sv_p->Name); fflush(stdin);
	printf(" + Ngay sinh (dd mm yy):"); scanf("%d %d %d",&sv_p->NgaySinh.day,&sv_p->NgaySinh.month,&sv_p->NgaySinh.year);
	printf(" + Ma so sinh vien: "); scanf("%ld",&sv_p->Mssv);
	printf(" + Trang thai: Sinh vien nam (nhap so):"); scanf( "%d" ,&sv_p->Status);
	printf(" + GPA:"); scanf("%f",&sv_p->GPA);
}
