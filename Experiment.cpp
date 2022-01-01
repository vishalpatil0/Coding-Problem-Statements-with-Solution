#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    rotate(arr,arr+2,arr+5);
    rotate(arr,arr+5-2,arr+5);
    for(int x:arr) cout<<x<<' ';
    cout<<endl;
    return 0;
}