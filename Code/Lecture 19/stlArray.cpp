#include <iostream>
#include <array>
using namespace std;

// STL array is simmilar to basic static array

int main(){

    int basic[3] = {1,2,3};

    array<int,4> a = {1,2,3,4};

    int size = a.size();

    for (int i = 0; i < size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2nd Index"<<a.at(2)<<endl;
}

