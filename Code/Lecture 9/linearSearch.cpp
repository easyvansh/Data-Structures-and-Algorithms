#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
    // linear search
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    // find whether the array has the key
    cout << "Enter the key ";
    int key ;
    cin>>key;
    
    bool found = search(arr,10,key);

    if (found) {
        cout << "Found " << key <<endl;
    }else{
        cout << key << "  Not found " <<endl;
    }

    return 0;
}