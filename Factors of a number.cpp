#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number = ";
    cin>>num;
    cout<<"Factors of "<<num<<" is = ";
    for (int  i = 2; i <= num/2; i++)
    {
        if(num%i==0)
        cout<<i<<' ';
    }
    cout<<endl;
    return 0;
}