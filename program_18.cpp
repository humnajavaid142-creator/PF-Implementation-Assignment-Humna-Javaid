#include <iostream>
using namespace std;

int main()
{
    float v,t,a,product,sum,divide,S;
    
    cout << "Enter value of v = ";
    cin>>v;
    cout << "Enter value of t = ";
    cin>>t;
    cout << "Enter value of a = ";
    cin>>a;
    
    S = v*t + 0.5 * a * t * t  ;
    
    cout << "The value of v is : " << v << endl;
    cout << "The value of t is : " << t << endl;
    cout << "The value of a is : " << a << endl;
    cout << "The value of S is : " << S << endl;
    
    
    
    return 0;
}