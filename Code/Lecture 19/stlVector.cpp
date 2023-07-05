#include <iostream>
#include <vector>
using namespace std;

// Vector is a dynamic array - when we insert a 5th element to a vector of size 4 - it doubles the size of the vector 
// How it works :
// It takes the size of the vector and creates a new vector of double size and pushes the element to this new vector
// and dumps the old vector 

int main(){

    int basic[3] = {1,2,3};

    vector<int> v;

    cout<<"Capacity -> "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl;

    cout<<"Size -> "<<v.size()<<endl;

     cout<<"Element at 2nd Index "<<v.at(2)<<endl;

     cout<<"Front "<<v.front()<<endl;
     cout<<"Back "<<v.back()<<endl;
     cout<<"Pop Back Last Element "<<v.back()<<endl;
     v.pop_back();
     cout<<"Back "<<v.back()<<endl;

}

