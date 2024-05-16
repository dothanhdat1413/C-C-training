#pragma once

#include <iostream>

typedef struct{
	float Re,Im;
}so_phuc_struct;

class so_phuc{
    private:
        float Re,Im;
    public: 
        void set_z(float, float);
        void in_z();
        void print_z();
        
        float get_im();
        float get_re();

        void push_im(float& im);
        void push_re(float& re);

        so_phuc_struct get_z(); // Ham lay phan thuc va phan ao
        void push_z(so_phuc& z0);// Ham gan phan thuc va phan ao

        so_phuc_struct tong(so_phuc& z0);
};