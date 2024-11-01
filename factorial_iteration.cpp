/**
 * Factorial of a number using iteration.
 * Factorial of a number n is the product of all positive integers less than or equal to n.
 * 
 * example:
 * 5! = 5*4*3*2*1 = 120
 */

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fact=1;
    for(int i =1; i<=n; i++) {
        fact*=i;
    }
    cout<<"factorial of number is -> "<<fact<<endl;
    return 0;
}