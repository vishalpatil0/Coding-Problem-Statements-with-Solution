#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter two nubmers = "<<endl;
    cin>>num1>>num2;
    while (num1!=num2)
    {
        if(num1>num2)
        {
            num1-=num2;
        }
        else
            num2-=num1;
    }
    
    cout<<"HCF [Highest Common Factor] of "<<num1<<" and "<<num2<<" is "<<num1<<'.'<<endl;
    return 0;
}