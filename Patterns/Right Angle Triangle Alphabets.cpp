/*
D
CD
BCD
ABCD
*/
#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 5; i++)
    {
        int start=65+4-i;
        for (int j = 0; j < i; j++)
        {
            cout<<char(start+j);
        }
        cout<<endl;
    }
    return 0;
}