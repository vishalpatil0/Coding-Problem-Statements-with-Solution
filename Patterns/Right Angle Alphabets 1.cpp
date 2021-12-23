/*
A
BB
CCC
*/
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    char ch='A';
    while(i<=3)
    {
        int j=1;
        while (j<=i)
        {
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
        ch++;
    }
    return 0;
}