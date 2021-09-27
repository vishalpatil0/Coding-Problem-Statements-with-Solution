#include<iostream>
using namespace std;
int main()
{
    int num1,num2,res=0;
    cin>>num1>>num2;
    int temp=num2;
    //5 3
    while (num2!=0)
    {
        res+=num1;
        num2--;
    }
    
    cout<<num1<<" * "<<temp<<" = "<<res<<endl;
    return 0;
}