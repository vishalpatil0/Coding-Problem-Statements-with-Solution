/*
*****
 ****
  ***
   **
    *
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
            if(j>=x) cout<<'*';
            else    cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}