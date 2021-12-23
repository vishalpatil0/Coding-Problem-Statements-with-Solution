/*
11111
 2222
  333
   44
    5
*/
#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i <5; i++)
    {
        int x=i;
        for (int j = 0; j < 5; j++)
        {
            if(j>=x) cout<<i+1;
            else    cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}