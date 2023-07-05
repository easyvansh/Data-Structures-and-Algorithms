#include <iostream>
#include <stack>
using namespace std;

// Stack - Last In Fist Out

int main()
{

    stack<string> s;
    s.push("one");
    s.push("two");
    s.push("three");

    cout<<"TOP ELEMENT "<<s.top()<<endl;
    cout<<"POP ELEMENT "<<endl;
    s.pop();
    cout<<"TOP ELEMENT "<<s.top()<<endl;
    cout<<"SIZE OF STACK "<<s.size()<<endl;
}
