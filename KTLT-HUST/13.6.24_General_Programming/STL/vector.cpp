#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<int> v={1,2,3,4};
    for(auto iter=v.begin();iter!=v.end();iter++){
        cout<<v[iter];
    }

}