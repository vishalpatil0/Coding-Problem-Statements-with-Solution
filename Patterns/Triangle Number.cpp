/*
   1
  121
 12321
1234321
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int space=n-row;
        while(space)
        {
            cout<<' ';
            space--;
        }
        int j=1;
        while(j<=row)
        {
            cout<<j;
            j++;
        }
        int i=row-1;
        while(i)
        {
            cout<<i;
            i--;
        }
        cout<<endl;
        row++;
    }
    return 0;
}