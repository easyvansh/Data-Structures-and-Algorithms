#include <iostream>
#include <math.h>
using namespace std;
// Simple program to convert Binary Number to Decimal
int main(){
    int n ;
    cin>> n;
    int ans = 0 , i = 0;

    while( n) {
        int digit = n % 10;

        if ( digit == 1 )
        {
        ans = ans + pow( 2, i )  ;
       
        }
        n = n / 10;
        i++ ; 

    }
    cout<< ans << endl;
    
}