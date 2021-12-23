/*
1
22
333
4444
55555
*/
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<6)
    {
        int j=1;
        while(j<=i)
        {
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}