#include<iostream>
using namespace std;
int main()
{
    int num1,num2,HCF;
    cout<<"Enter two nubmers = "<<endl;
    cin>>num1>>num2;
    int min=(num1<num2)?(num1):num2;
    for (int i = min; i >=1; i--)
    {
        if(num2%i==0 && num1%i==0)
        {
            HCF=i;
            break;
        }
    }
    cout<<"HCF [Highest Common Factor] of "<<num1<<" and "<<num2<<" is "<<HCF<<'.'<<endl;
    return 0;
}