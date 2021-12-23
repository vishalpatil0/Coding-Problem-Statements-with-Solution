/*
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
*/
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=5)
    {
        int j=1;
        char x='A';
        while (j<=5)
        {
            cout<<(char)(x+(j-1));
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}