/*
1
12
123
1234
12345
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
            cout<<j;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}