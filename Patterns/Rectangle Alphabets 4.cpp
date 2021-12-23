/*
ABC
BCD
CDE
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
            cout<<(char)(x+j-1);
            j++;
        }
        cout<<endl;
        i++;
        x++;
    }
    return 0;
}