#include<iostream>
using namespace std;
void rev(int arr[],int i,int n)
{
    if(i<n)
    {
        rev(arr,i+1,n);
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    rev(arr,0,sizeof(arr)/sizeof(arr[0]));
    return 0;
}