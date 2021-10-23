#include<iostream>
using namespace std;
bool prime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int start,last;
    cout<<"Enter the first and last number = ";
    cin>>start>>last;
    for(int i=start;i<=last;i++)
    {
        if(prime(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}