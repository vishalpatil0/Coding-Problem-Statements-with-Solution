/*
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1
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
            cout<<(i-j+1)<<' ';
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}