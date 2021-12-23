#include<iostream>
using namespace std;
int main()
{
    //Completment of a number 
    //e.g. 5 in binary 101 complement in 010 which is 2
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    int mask=0;
    int m=n;
    while(m!=0)
    {
        mask=(mask<<1)|1;
        m>>=1;
    }
    int ans=(~n)&mask;
    cout<<ans<<endl;
    return 0;
}