#include <iostream>
using namespace std;

int main()
{
    int age,months,days,product1,product2;
    
    cout << "Enter your age : ";
    cin>>age;
    cout << "Enter months in a year : ";
    cin>>months;
    cout <<"Enter days in a year : ";
    cin>>days;
    
    product1 = age*months;
    product2 = age *days;
    
    cout << "Age in months is : " << product1 << endl;
    cout << "Age in days is : " << product2 << endl;
    return 0;
}