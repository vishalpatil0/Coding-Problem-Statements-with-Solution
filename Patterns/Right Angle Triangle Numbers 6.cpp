/*
4
34
234
1234
*/
#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 4; i++)
    {
        int start=4-i;
        for (int j = 0; j <= i; j++)
        {
            cout<<start+j;
        }
        cout<<endl;
    }
    return 0;
}