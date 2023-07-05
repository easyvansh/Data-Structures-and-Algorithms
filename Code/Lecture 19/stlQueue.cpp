#include <iostream>
#include <queue>
using namespace std;

// Queue - First In Fist Out

int main()
{

    queue<string> q;
    q.push("one");
    q.push("two");
    q.push("three");

    cout<<"front ELEMENT "<<q.front()<<endl;
    cout<<"POP ELEMENT "<<endl;
    q.pop();
    cout<<"front ELEMENT "<<q.front()<<endl;
    cout<<"SIZE OF STACK "<<q.size()<<endl;
}
