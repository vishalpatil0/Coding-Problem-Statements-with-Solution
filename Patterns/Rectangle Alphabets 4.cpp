/*
ABC
BCD
CDE
*/
#include<iostream>
using namespace std;
int main()
{
    int i=1;
    char x='A';
    while(i<=3)
    {
        int j=1;
        while (j<=3)
        {
            cout<<(char)(x+j-1);
            j++;
        }
        cout<<endl;
        i++;
        x++;
    }

    cout<<"\n\nAnother approach ->"<<endl<<endl;
        for(int i=1; i<=3; i++) {
        for(int j=0; j<3; j++) {
           cout<<char(64+i+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}