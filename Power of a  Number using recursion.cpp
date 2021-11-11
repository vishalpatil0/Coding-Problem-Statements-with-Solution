#include<iostream>
using namespace std;
int raised_to(int number,int power)
{
    if(power==0)
    {
        return 1;
    }
    else if(power>0)
    {
        return number*raised_to(number,--power);
    }
    return -1;
}
int main()
{
    int number,power;
    cout<<"Enter the number = ";
    cin>>number;
    cout<<"Enter the power = ";
    cin>>power;
    cout<<number<<'^'<<power<<" = "<<raised_to(number,power)<<endl;
    return 0;
}