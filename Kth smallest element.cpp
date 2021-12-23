#include<iostream>
#include<algorithm>
using namespace std;
int ksmallest(int arr[],int length,int k)
{
    sort(arr,arr+length);
    return arr[k-1];
}
int main()
{
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"kth position = ";
    cin>>k;
    cout<<k<<" smallest element is = "<<ksmallest(arr,n,k)<<endl;
    return 0;
}