#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end) {

        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1 ;
        }
        // to check right
        else if(key > arr[mid]) {
            start = mid +1;
        }
        else{
             //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return ans;
}int lastOccurrence(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;
    int ans = -1;
    while(start <= end) {

        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1 ;
        }
        // to check right
        else if(key > arr[mid]) {
            start = mid +1;
        }
        else{
             //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return ans;
}


int main() { 

    int even[6] = {1,2,3,3,3};

    cout << " First Occurence of 3 is " << firstOccurrence(even, 5, 3) << endl;
    cout << " First Occurence of 3 is " << lastOccurrence(even, 5, 3) << endl;


    return 0;
}
