#include <iostream>
#include <map>
using namespace std;

// Map - Data stored in Key Value pairs

int main()
{

    map<int,string> m;

    m[1] = "A";
    m[2] = "B";
    m[3] = "C";

    for (auto i : m)
    {
        cout << i.first << " -> "<<i.second<<endl;
    }

}
