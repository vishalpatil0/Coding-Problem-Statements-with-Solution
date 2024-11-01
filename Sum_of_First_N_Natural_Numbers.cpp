/**
 * Program to find sum of first N natural numbers
 * N Exclusive: (n*(n-1))/2
 */

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter range of natural numbers = "<<endl;
    cin>>n;
    cout<<"Sum of first inclusive N natural numbers is = "<<(n*(n+1))/2<<endl;
    cout<<"Sum of first exclusive N natural numbers is = "<<(n*(n-1))/2<<endl;
    return 0;
}