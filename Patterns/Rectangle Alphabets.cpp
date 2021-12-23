/*
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
*/
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    char x='A';
    while(i<=5)
    {
        int j=1;
        while (j<=5)
        {
            cout<<x;
            j++;
        }
        cout<<endl;
        i++;
        x++;
    }
    return 0;
}