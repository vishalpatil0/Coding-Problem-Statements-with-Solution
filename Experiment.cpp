#include<iostream>
using namespace std;

int main()
{
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
           cout<<char('A'+j+(i*3))<<" ";
        }
        cout<<endl;
    }

    return 0;
}