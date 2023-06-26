#include <iostream> 
using namespace std;

int main (){
    
    char a;

    cin >> a;

    // 'A' -> 65
    // 'a' -> 97
    // '0' -> 48

    if (a>= 'A' && a<= 'Z'){
        cout << "this is upper case"<<endl;
    }else if (a >= 'a' && a<='z'){
        cout << "This is lower case"<<endl;
    }
    else if ( a>='0' && a <= '9')
    {
        cout << "This is a digit" << endl;
    }
    return 0;

}