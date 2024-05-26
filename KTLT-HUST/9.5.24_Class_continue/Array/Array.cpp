#include <iostream>
using namespace std;

class Array {
    private:
        int n;
        int* a = new int[n];
    public:
        /**
         * @brief Hàm tạo
         * 
         * @param n số phần tử mảng
         * @param x 
         */
        Array(int nn, int x=0) {
            n=nn;
            for (int i = 0; i < n; i++) {
                a[i] = x;
            }
        }
        /**
         * @brief Hàm tạo copy
         * @param arr Đối tượng gán cho Đối tượng hiện tại
         */
        Array(const Array& arr) {
            n = arr.n;

            for (int i = 0; i < n; i++) {
                
            }
        }

        /**
         * @brief Hàm lấy giá trị của 1 phần tử 
         * @param i Chọn phần tử muốn xem giá trị
         */
        int get_i(int i) {
            cout<< a[i];
            return a[i];
        }
        /**
         * @brief Hàm hiển thị
         * 
         */
        void print() {
            cout << endl;
            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }

        /**
         * @brief Hàm set giá trị cho từng phần tử
         * @param i Chỉ số phần tử muốn thay đổi
         *@param x Giá trị muốn thay đổi
         */
        void set(int i, int x) {
            a[i] = x;
        }

        friend ostream& operator<<(ostream& out, const Array& arr);
        friend istream& operator>>(istream& in, Array& arr);
        friend int operator[](int i, const Array& arr) { 
           return arr.a[i]; 
        }
        /**
         * @brief Hàm xóa mảng đã cấp phát
         * 
         */
        ~Array() {
            delete[] a;
        }

        
};

ostream& operator<<(ostream& out, const Array& arr) {
    cout<<endl;
    for (int i = 0; i < arr.n; i++) {
        out << arr.a[i] << " ";
    }
    cout<<endl;
    return out;
}

istream& operator>>(istream& in, Array& arr) {
    delete[] arr.a;
    cout<<"Nhap vao so phan tu mang: ";
    in>> arr.n;
    arr.a = new int[arr.n];
    
    for(int i = 0; i < arr.n; i++) {
        std::cout<<"\nNhap vao phan tu mang thu "<<i+1<<": ";
        in >> arr.a[i];
    }
    return in;
}


int main() {
    Array a(4,5);
    a.print();
    a.set(1,6);
    a.get_i(1);


    cout<<a;
}