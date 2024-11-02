/**
 * Problem: Write a program to check whether the given character is uppercase, lowercase, numeric or special character.
 * 
 * Input: A single character.
 * 
 * Output: Print the type of character.
 * 
 * Constraints: The input character will be an alphabet or a number.
 * 
 * Example:
 * Input: A
 * Output: UPPERCASE
 * 
 * Input: 5
 * Output: NUMERIC
 * 
 * Note: Use the ASCII values of the characters to solve the problem.
 */

#include<iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') {
        cout<<"UPPERCASE";
    } else if(ch >= 'a' && ch <= 'z') {
        cout<<"lowercase";
    } else if(ch >= '0' && ch <= '9') {
        cout<<"NUMERIC";
    } else {
        cout<<"SPECIAL CHARACTER";
    }
    cout<<endl;
    return 0;
}