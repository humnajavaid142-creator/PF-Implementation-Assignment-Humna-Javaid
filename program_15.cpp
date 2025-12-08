#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20, temp;
    
    cout << "Value before interchange " << endl;
    cout << "The value of a is : " << a << endl;
    cout << "The value of b is : " << b << endl;
    
    
    temp = a;
    a = b;
    b = temp;
    
    cout << "Value after intercahnge " << endl;
    cout << "The value of a is : " << a << endl;
    cout << "The value of b is : " << b << endl;
    

    return 0;
}