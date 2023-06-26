#include <iostream>
#include <math.h>
using namespace std;
// Simple program to convert Decimal Number to Binary
int main(){
    int n = 10;
    // cin>> n;
    int ans =0;
    int i =0;
    while(n){
        int bit = n&1;

        ans = (bit * pow(10,i) ) +ans;

        n=n>>1;
        i++;

    }
    cout<< ans << endl;
    
}