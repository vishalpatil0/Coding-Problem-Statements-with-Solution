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
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j>=i)
            {
                cout<<j;
            }
            else
            {
                cout<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}