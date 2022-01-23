#include<iostream>
using namespace std;
int main()
{
    int arr[4]={};
    arr[2]++;
    arr[2]++;
    arr[2]++;
    arr[2]++;
    cout<<arr[2]<<endl;
    arr[2]--;
    cout<<arr[2]<<endl;
    return 0;
}