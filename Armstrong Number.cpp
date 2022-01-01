// armstrong number is a number which is same as "sum of each digit power of total number of digit in the number."
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,sum=0,temp;
    cout<<"Enter number = ";
    cin>>num;
    temp=num;
    int count=0;
    while(temp!=0)
    {
        count++;
        temp/=10;
    }
    temp=num;
    while(num!=0)
    {
        sum+=pow(num%10,count);
        num/=10;
    }
    if(sum==temp)   cout<<temp<<" is an armstrong number."<<endl;
    else            cout<<temp<<" is not an armstrong number."<<endl;
    return 0;
}