#include <iostream>
using  namespace std;

int main()
{
    string name;
    char gender;
    int age,height;
    
    cout << "Enter your name : ";
    getline(cin,name);
    cout << "Enter your age : ";
    cin>>age;
    cout << "Enter your height : ";
    cin>>height;
    cout << "Enter your gender : ";
    cin>>gender;
    

    return 0;
}