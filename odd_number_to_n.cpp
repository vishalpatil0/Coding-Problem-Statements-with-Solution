/**
 * Program to print odd numbers from 1 to n.
 */

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Odd numbers from 1 to " << n << " are: " << endl;
    for(int i = 1; i<=n; i+=2) {
        cout << i << endl;
    }
    return 0;
}