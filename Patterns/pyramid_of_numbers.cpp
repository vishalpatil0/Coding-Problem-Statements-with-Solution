/**
 *    1
     121
    12321
   1234321
 */

#include<iostream>
using namespace std;

int main()
{
    
    int n = 4;
    for(int i=1; i<=n; i++) {
        int j=i;
        while(j<n) {
            cout<<' ';
            j++;
        }

        int k = 1;
        while (k<=i) {
            cout<<k;
            k++;
        }

        k = i-1;
        while(k>=1) {
            cout<<k;
            k--;
        }
        
        cout<<endl;
    }

    return 0;
}