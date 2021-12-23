/*
11111
22222
33333
44444
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
        while(j<6)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}