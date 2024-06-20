#include <iostream>
using namespace std;

template <typename T>
class Array {
    private:
        int n;
        T* a = new T[n];
    public:
        /**
         * @brief Hàm tạo
         * 
         * @param n số phần tử mảng
         * @param x 
         */
        Array(int _n, T x) {
            n=_n;
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
        T get_i(int i) {
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
        void set(int i, T x) {
            a[i] = x;
        }
        
        // friend ostream& operator<<(ostream& out, const Array<T>& arr);
        // friend istream& operator>>(istream& in, Array<T>& arr);

        friend ostream& operator<<(ostream& out, const Array<T>& arr) {
            out<<endl;
            for (int i = 0; i < arr.n; i++) {
                out << arr.a[i] << " ";
            }
            out<<endl;
            return out;
        }
        friend istream& operator>>(istream& in, Array<T>& arr) {
            delete[] arr.a;
            cout<<"Nhap vao so phan tu mang: ";
            in>>arr.n;
            arr.a = new T[arr.n];
            for(int i = 0; i < arr.n; i++) {
                std::cout<<"\nNhap vao phan tu mang thu "<<i+1<<": ";
                in >> arr.a[i];
            }
            return in;
        }
        int operator[](int i) { 
           return a[i]; 
        }
        /**
         * @brief Hàm xóa mảng đã cấp phát
         * 
         */
        ~Array() {
            delete[] a;
        }

        
};

int main() {
    Array<int> a(4,5);
    a.print();
    a.set(1,6);
    a.get_i(1);
    cout<<a;

    cout<<endl;
    Array<int> d(3,2.0);
    d.print();
    d.set(1,4.0);
    d.get_i(1);
    cout<< d;

    cout<<endl;
    Array<char> e(3,'c');
    e.print();
    e.set(1,'d');
    e.get_i(1);
    cout<< e;
}