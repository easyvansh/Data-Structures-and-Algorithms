#include <iostream> 
using namespace std;
int main(){

    // 1 1 1
    // 2 2 2 
    // 3 3 3 
    // row - 3
    // col - row number 
    // find the relation of the row with the col. Always find the rel w.r.t the rows.
    

    int n;
    cin >> n;

    int row = 1 ;

    while (row<= n){
        int col = 1;
        while (col<= n){
            cout <<row;
            col = col + 1;
        }
        cout<<endl;
        row = row+1;
    }


}