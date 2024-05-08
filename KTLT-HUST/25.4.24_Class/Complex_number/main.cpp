#include "main.h"

int main(){
    so_phuc z1;
    so_phuc_struct z1_s;

    // nhap so phuc z
    z1.in_z();
    // xuất ra
    z1.print_z();
    // set so phuc z
    z1.set_z(4,3);
    //xuất ra
    z1.print_z();
    //lay phan thuc
    float a=z1.get_re();
    //lay phan ao 
    float b=z1.get_im();
    std::cout<<"Phan thuc va phan ao: "<<a<<b; 
}