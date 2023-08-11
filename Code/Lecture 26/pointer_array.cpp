#include<iostream>
using namespace std;

int main () {

    int arr[10] = {0,1,2,3,4};

    cout <<"address of first memory block is arr " << arr<<endl;
    cout <<"Value at first memory block is arr[0] " << arr[0]<<endl;
    cout <<"address of first memory block is &arr[0] " << &arr[0] <<endl;
    cout <<"Value at first memory block is *arr " << *arr<<endl;

    cout <<"Value at *arr+1 = 1 " << *arr+1<<endl;
    cout <<"Value at *(arr+1) =  1 " << *(arr+1)<<endl;
    cout <<"Value at *(arr)+1 0+1 = " << *(arr)+1<<endl;

    cout <<"Value at arr[2]  = " << arr[2]<<endl;
    cout <<"Value at *(arr+2)  = " << *(arr+2)<<endl;
    
    
    //Formula 
    // arr[i] = *(arr+i)
    // i[arr] = *(i+arr) => No Error
    cout <<"\nValue at arr[3]  = " << arr[3]<<endl;
    cout <<"Value at 3[arr]  = " << 3[arr]<<"\n"<<endl;


    int temp[10];
//     cout << sizeof(temp) << endl;
//     cout << "1st " <<  sizeof(*temp) << endl;
//     cout << "2nd " <<  sizeof(&temp) << endl;
    
//     int *ptr = &temp[0];
//     cout << sizeof(ptr) << endl ;
//     cout << sizeof(*ptr) << endl ;
//     cout << sizeof(&ptr) << endl ;


//     int a[20] = {1,2,3,5};
//     cout << " -> " << &a[0] << endl;
//     cout << &a << endl;
//     //cout << a << endl;

//    int *p = &a[0];
// //    cout << p << endl;
// //    cout << *p << endl;
//    cout << "-> " << &p << endl;
// ERROR
 //  arr = arr+1;

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;


    return  0;
}