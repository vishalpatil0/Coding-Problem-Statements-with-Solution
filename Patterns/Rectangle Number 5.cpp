/*
1 2 3 
4 5 6 
7 8 9 
*/
#include<iostream>
using namespace std;
int main()
{
    int m=1;
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cout<<m++<<' ';
        }
        cout<<endl;
    }
    return 0;
}