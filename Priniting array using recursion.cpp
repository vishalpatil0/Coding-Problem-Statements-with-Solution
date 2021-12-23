#include<iostream>
using namespace std;
void rev(int arr[],int n)
{
    if(n>=0)
    {
        rev(arr,n-1);
        cout<<arr[n]<<endl;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    rev(arr,sizeof(arr)/sizeof(arr[0])-1);
    return 0;
}