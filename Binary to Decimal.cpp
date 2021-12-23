#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    string binary;
    cout<<"Enter the binary number = ";
    cin>>binary;
    int raised_to=0,decimal=0;
    for(string::reverse_iterator rtr=binary.rbegin();rtr!=binary.rend();rtr++)
    {
        if((*rtr)=='1')
        {
            decimal+=(pow(2,raised_to));
        }
        raised_to++;
    }
    cout<<"Decimal format of "<<binary<<" is = "<<decimal<<endl;
    return 0;
}