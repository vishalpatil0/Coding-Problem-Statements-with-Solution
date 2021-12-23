#include<iostream>
using namespace std;
int main()
{
    int rr=6,qq=8;
    int pp=19&6;
    pp=9+rr;
    qq=(pp+pp)+qq;
    qq=(qq+rr)&rr;
    cout<<pp+qq+rr<<endl;
    return 0;
}