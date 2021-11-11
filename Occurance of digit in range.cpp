#include<iostream>
using namespace std;
int check(int range,int digit)
{   int count=0;
    while(range!=0)
    {
        if(digit==range%10)
        {
            count++;
        }
        range/=10;
    }
    return count;
}
int main()
{
    int range,count=0;
    cout<<"Enter the range = ";
    cin>>range;
    int digit;
    cout<<"Enter the digit = ";
    cin>>digit;
    for (int i = range; i >= 0; i--)
    {
        count+=check(i,digit);
    }
    cout<<digit<<" is "<<count<<" times in the range "<<range<<endl;
    return 0;
}