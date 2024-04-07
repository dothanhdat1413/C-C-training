#include <stdio.h>

void max_addr(int*, int**,int);
int main(){
    int n;
    printf("Nhap phan tu cua day so nguyen: ");
    scanf("%d", &n);
    int z[n];
    int i;
    fflush(stdin);
    printf("Nhap cac phan tu cua day so: ");
    for(i=0; i<n; i++){
        scanf("%d", &z[i]);
    }
    int* max=z; 
    int** max_p=&max; 
    printf("Origin_%p\n", max);
    max_addr(z,max_p,n);
    printf("Max = %d, Max_address= %p\n", *max,max);

}

void max_addr(int* z,int** max_p, int n){
    int i;
    for(i=1;i<n;i++){
        if(z[i]>(*(*max_p))){
            *max_p = &z[i];
        }

    }
}