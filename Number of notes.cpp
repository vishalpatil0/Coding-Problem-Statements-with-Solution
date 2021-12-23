//number of notes
//2000 500 100 50 20 10 5 2 1notes are available only
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the amount = ";
    cin>>num;
    static int two_thousand,five_hundred,hundred,fifty,twenty,ten,five,two,one;
    if(num>=2000)
    {
        two_thousand=num/2000;
        num%=2000;
    }
    if(num>=500)
    {
        five_hundred=num/500;
        num%=500;
    }
    if(num>=100)
    {
        hundred=num/100;
        num%=100;
    }
    if(num>=50)
    {
        fifty=num/50;
        num%=50;
    }
    if(num>=20)
    {
        twenty=num/20;
        num%=20;
    }
    if(num>=10)
    {
        ten=num/10;
        num%=10;
    }
    if(num>=5)
    {
        five=num/5;
        num%=5;
    }
    if(num>=2)
    {
        two=num/2;
        num%=2;
    }
    if(num>=1)
    {
        one=num/1;
        num%=1;
    }
    cout<<"Two Thousand = "<<two_thousand<<endl
    <<"Five Hundred = "<<five_hundred<<endl
    <<"Hundred = "<<hundred<<endl
    <<"Fifty = "<<fifty<<endl
    <<"Twenty = "<<twenty<<endl
    <<"Ten = "<<ten<<endl
    <<"Five = "<<five<<endl
    <<"Two = "<<two<<endl
    <<"One = "<<one<<endl;
    return 0;
}