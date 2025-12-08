#include <iostream>
using namespace std;

int main()
{
    int sub1,sub2,sub3,sub4,sub5,total,average;
    
    cout << "Enter obtained marks in sub1 :";
    cin>>sub1;
    cout << "Enter obtained marks in sub2 :";
    cin>>sub2;
    cout << "Enter obtained marks in sub3 :";
    cin>>sub3;
    cout << "Enter obtained marks in sub4 :";
    cin>>sub4;
    cout << "Enter obtained marks in sub5 :";
    cin>>sub5;
    
    total = sub1+sub2+sub3+sub4+sub5;
    average = total/5;
    
    cout <<"The total of obtained marks = " << total << endl;
    cout <<"The average of 5 subjects = " << average << endl;
    

    return 0;
}