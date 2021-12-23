#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int number,decimal=0,raised_to=0;
    cout<<"Enter the number = ";
    cin>>number;
    while(number!=0)
    {
        if(number%10==1)
        {
            decimal+=pow(2,raised_to);
        }
        raised_to++;
        number/=10;
    }
    cout<<decimal<<endl;
    return 0;
}