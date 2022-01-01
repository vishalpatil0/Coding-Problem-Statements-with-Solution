#include<iostream>
#include<math.h>
using namespace std;
long addition(int n,int arr[])
{
    long sum=0;
    int j=0;
    for (int i = 0; i < n; i++)
    {
        int data=arr[i];
        int position=data%10;
        data/=10;
        int temp=0;
        while(position!=0)
        {
            temp+=((data%10)*pow(10,j++));
            data/=10;
            position--;
        }
        j=0;
        sum+=pow(data,temp);
        temp=0;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Number of operands = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the operands = "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Sum --> "<<addition(n,arr)<<endl;
    return 0;
}