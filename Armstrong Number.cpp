// armstrong number is a number which is same as "sum of cube of each digit"
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,sum=0,temp;
    cout<<"Enter number = ";
    cin>>num;
    temp=num;
    while(num!=0)
    {
        sum+=pow(num%10,3);
        num/=10;
    }
    if(sum==temp)   cout<<temp<<" is an armstrong number."<<endl;
    else            cout<<temp<<" is not an armstrong number."<<endl;
    return 0;
}