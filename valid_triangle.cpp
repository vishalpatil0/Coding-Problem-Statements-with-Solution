/*
A triangle is valid if the sum of any 2 sides is greater than the remaining third side.
*/

#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;
    if (a+b >c && b+c > a && c+a > b) {
        cout << "The triangle is valid." << endl;
    } else {
        cout << "The triangle is not valid." << endl;
    }
    return 0;
}