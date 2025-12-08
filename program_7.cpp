#include <iostream>
using namespace std;

int main()
{
    int roll_number;
    float pf,ic,cg;
    float total,average;
    
    cout << "Enter Roll No: ";
    cin >> roll_number;
    
    cout << "Enter marks in Programming Fundamentals: ";
    cin >> pf;
    
    cout << "Enter marks in Introduction to computing: ";
    cin >> ic;
    
    cout << "Enter marks in Computer Graphics: ";
    cin >> cg;
    
    total = pf+ic+cg;
    cout << "The total of Programming Fundamentals,Introduction to computing,Computer Graphicsis : " << total << endl;
    
    average = total/3;
    cout << "The average is : " << average << endl;
    
    return 0;
}