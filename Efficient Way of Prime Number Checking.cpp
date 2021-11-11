#include<iostream>
using namespace std;
int main()
{
    unsigned int num;
    bool isPrime=true;
    cout<<"Enter only positive integer = ";
    cin>>num;
    for (int i = 2; i*i <= num; i++)
    {
        if(num%i==0)
        {
            isPrime=false;
        }
    }
    if (isPrime)    cout<<num<<" is a prime number."<<endl;
    else            cout<<num<<" is not a prime number."<<endl;
    return 0;
}