#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, s, area;

    cout << "Enter the length of side a: ";
    cin >> a;

    cout << "Enter the length of side b: ";
    cin >> b;

    cout << "Enter the length of side c: ";
    cin >> c;

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "The value of s is = " << s << endl;
    cout << "Area of the triangle = " << area << endl;

    return 0;
}