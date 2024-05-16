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