/*
654321
654321
654321
654321
654321
*/
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int m=1;
    while(i<=3)
    {
        int j=1;
        while(j<=3)
        {
            cout<<m++<<' ';
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}