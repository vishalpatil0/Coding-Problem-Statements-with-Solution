/*
12345
 2345
  345
   45
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
            if(j>=x) cout<<j+1;
            else    cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}