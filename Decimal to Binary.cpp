#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number = ";
    cin>>number;
    int temp=number;
    int ans=0,i=0;
    while(number!=0)
    {
        ans+=((number%2)*(pow(10,i++)));
        number/=2;
    }
    cout<<"Binary Format of "<<temp<<" is = "<<ans<<endl;
    return 0;
}