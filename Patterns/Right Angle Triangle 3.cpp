/*
1 
2 3 
3 4 5 
4 5 6 7 
5 6 7 8 9 
*/
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<6)
    {
        int j=1;
        int value=i;
        while(j<=i)
        {
            cout<<value++<<' ';
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}