#include <iostream>
#include <deque>
using namespace std;


int main(){

    int basic[3] = {1,2,3};

    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for (int i :d){
        cout<<i<<endl;
    }

     cout<<"Element at 1st Index "<<d.at(1)<<endl;

}

