/*
     1
    22
   333
  4444
 55555
666666
*/
#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if((i+j)<5)
            {
                cout<<' ';
            }
            else
            {
                cout<<i+1;
            }
        }
        cout<<endl;
    }
    
    return 0;
}