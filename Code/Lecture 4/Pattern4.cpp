#include <iostream> 
using namespace std;
int main(){

    // 1 2 3 
    // 4 5 6 
    // 7 8 9
    // row - 3
    // col - 3
    // number =  
    // find the relation of the row with the col. Always find the rel w.r.t the rows.
    

    int n;
    cin >> n;
    int count = 1;
    int row = 1 ;

    while (row<= n){
        int col = 1;
        while (col<= n){
            cout << count << " ";
            count = count + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row+1;
    }


}