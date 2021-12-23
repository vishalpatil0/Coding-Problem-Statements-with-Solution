/*
  1
 23
456
*/
#include<iostream>
using namespace std;
int main()
{
    int temp=1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if((i+j)<2)
            {
                cout<<' ';
            }
            else
            {
                cout<<temp++;
            }
        }
        cout<<endl;
    }
    
    return 0;
}