#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number = ";
    cin>>number;
    if(number&1) cout<<"It is odd number.";
    else cout<<"It is even number.";
    cout<<endl;
    return 0;
}