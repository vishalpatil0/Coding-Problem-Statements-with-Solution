/*
ABC
DEF
GHI
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
            cout<<x++;
            j++;
        }
        cout<<endl;
        i++;
    }

    cout<<"\n\nAnother approach ->"<<endl<<endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
           cout<<char('A'+j+(i*3))<<" ";
        }
        cout<<endl;
    }
    return 0;
}