#include <iostream>
#include "main.h"

void so_phuc::in_z(){
        std::cout<<"Nhap phan thuc va phan ao: ";
        std::cin >> Re >> Im;
}

void so_phuc::set_z(float set_re, float set_im ){
        Im=set_im;
        Re=set_re;
}

void so_phuc::print_z(){
        std::cout<<std::endl<<Re<<" + "<<Im<<"i"<<std::endl;
}

float so_phuc::get_im(){
        return Im;
}

float so_phuc::get_re(){
        return Re;
}

void so_phuc::push_im(float& im){
        im=Im;
}

void so_phuc::push_re(float& re){
        re=Re;
}

so_phuc_struct so_phuc::get_z(){
        so_phuc_struct z;
        z.Re=Re;
        z.Im=Im;
        return z;
}

void so_phuc::push_z(so_phuc& z0){
        z0.set_z(Im,Re);
}