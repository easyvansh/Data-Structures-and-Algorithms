#include <iostream>
#include <list>
using namespace std;


int main(){


    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for (int i :l){
        cout<<i<<endl;
    }
    l.erase(l.begin());
    cout<<"After Erase"<<endl;
    for (int i :l){
        cout<<i<<endl;
    }

    cout<<"size of list "<<l.size()<<endl;

    list <int> n(5,100);

    for (int i :n){
        cout<<i<<' ';
    }

}

