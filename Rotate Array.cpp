//this array rotation takes less time as comapared to the other program present in this directory named array rotation.
#include<iostream>
using namespace std;
void reversed(int arr[],int start,int end)
{
    int temp;
    for (int i = start,j=end;i<=(start+end)/2; i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array "<<endl;
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int d;
    cout<<"Enter number of rotation = ";
    cin>>d;
    //for left rotation
    // reversed(arr,0,d-1);
    // reversed(arr,d,n-1);
    // reversed(arr,0,n-1);
    //for right rotation
    reversed(arr,n-d,n-1);
    reversed(arr,0,n-d-1);
    reversed(arr,0,n-1);

    cout<<"After rotate array is as follow "<<endl;
    for(int x:arr)
    {
        cout<<x<<endl;
    }
    return 0;
}