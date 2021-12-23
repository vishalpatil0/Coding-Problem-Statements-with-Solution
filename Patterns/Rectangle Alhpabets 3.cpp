/*
ABC
DEF
GHI
*/
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    char x='A';
    while(i<=3)
    {
        int j=1;
        while (j<=3)
        {
            cout<<x++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}