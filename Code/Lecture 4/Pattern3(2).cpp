#include <iostream> 
using namespace std;
int main(){

    // 4 3 2 1
    // 4 3 2 1
    // 4 3 2 1
    // row = 4
    // col = n - col + 1 
    // find the relation of the row with the col. Always find the rel w.r.t the rows.
    

    int n;
    cin >> n;

    int row = 1 ;

    while (row<= n){
        int col = 1;
        while (col<= n){
            cout <<n - col +1;
            col = col + 1;
        }
        cout<<endl;
        row = row+1;
    }


}