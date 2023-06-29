#include <iostream>
using namespace std;

int findUnique(int *arr, int size){
    int ans = 0;
    for(int i = 0; i < size;i++){
        ans = ans^arr[i];

    }
    return ans;
}

int main(){

    int arr[10] = {4,3,2,1,2,3,4};

   findUnique(arr, 10);

    return 0;
}