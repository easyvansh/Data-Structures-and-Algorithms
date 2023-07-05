#include <iostream>
#include <queue>
using namespace std;

// Priority Queue - First Element will be Maximum

int main()
{
    // Max Heap
    priority_queue<int> maxi;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> mini;

    cout << "Max Heap" << endl;
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    cout << "Size => " << maxi.size() << endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }

    cout << endl;
    cout << "Min Heap" << endl;
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);
    cout << "Size => " << mini.size() << endl;
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
}
