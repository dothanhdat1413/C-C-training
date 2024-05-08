#include <iostream>

typedef struct{
	float Re,Im;
}so_phuc_struct;

class so_phuc{
    private:
        float Re,Im;
    public: 
        /**
         * @brief Set sẵn z từ thông số có trước
         * @param float phan thuc, phan ao
         */
        void set_z(float, float);// ham set
        void in_z();//ham nhap so phuc
        void print_z();
        
        float get_im();
        float get_re();

        void push_im(float& im);
        void push_re(float& re);

        so_phuc_struct get_z(); // Ham lay phan thuc va phan ao
        void push_z(so_phuc& z0);// Ham gan phan thuc va phan ao

        so_phuc_struct tong(so_phuc& z0);
};