#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

    cout << "Before interchange:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Interchanging the values using a temporary variable
    temp = a;
    a = b;
    b = temp;

    cout << "After interchange:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    

  return 0;
}