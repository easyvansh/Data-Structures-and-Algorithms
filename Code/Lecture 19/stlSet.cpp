#include <iostream>
#include <set>
using namespace std;

// Set - No element is repeated

int main()
{

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(2);

    for (auto i : s)
    {
        cout << i << " ";
    }

    s.erase(s.begin());
    cout<<endl ;
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout<<endl ;


    set<int>::iterator itr = s.find(5);
    for (auto it=itr;it!=s.end();it++)
    {
        cout << *it << " ";
    }
}
