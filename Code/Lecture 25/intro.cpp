#include<iostream>
using namespace std;

int main () {

    int num  = 5 ;

    cout << num << endl;

    // address of Operator - &

    cout <<" Address of num is " << &num << endl;
    
    
    // num = 5
    // pointer to address of num(5) = ptr to 080 = 5
    // &num = [address of (num=5)] = e.g. 080
    // *ptr = &num
    //  ptr = [address of (num=5)] = 080
    // *ptr = pointer to [address of num(5)] = ptr to 080 = 5 
    // ptr = 080 | *ptr = 5
    int *ptr = &num;
    cout << " Address is : " << ptr << endl;
    cout << " Value is : " << *ptr << endl;

    double d = 4.3;
    double *ptr2 = &d;

    cout << " Address is : " << ptr2 << endl;
    cout << " Value is : " << *ptr2 << endl;

    cout << " size of integer is " << sizeof(num) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    cout << " size of pointer is " << sizeof(ptr2) << endl;



    return 0;
}