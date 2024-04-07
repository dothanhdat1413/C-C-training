#include <stdio.h>

void min_max(int*, int, int&, int&);
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
    fflush(stdin);

    int min,max;  
    min_max(z,n,min,max);
    printf("Min = %d\n", min);
    printf("Max = %d\n", max);  
    return 0;
}

void min_max(int* z,int n, int& min, int& max){
    int i;
    min=z[0];
    max=z[0];
    for(i=1;i<n;i++){
        if(z[i]<min){
            min=z[i];
        }
        if(z[i]>max){
            max=z[i];
        }
    }
}