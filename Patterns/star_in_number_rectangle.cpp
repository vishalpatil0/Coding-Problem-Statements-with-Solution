/**
1234554321
1234**4321
123****321
12******21
1********1
 */

#include<iostream>
using namespace std;

int main()
{
    
    int n = 5;
    for(int i=1; i<=n; i++) {
        int j=1;
        while(j<=n) {
            if (j>n-i+1) {
                cout<<'*';
            } else {
                cout<<j;
            }
            j++;
        }
        j=5;
        while(j>=1) {
            if (j>n-i+1) {
                cout<<'*';
            } else {
                cout<<j;
            }
            j--;
        }
        cout<<endl;
    }

    return 0;
}