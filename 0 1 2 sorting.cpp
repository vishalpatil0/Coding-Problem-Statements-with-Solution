//array contain only 0,1 and 2 as element sort the array without using sorting algorithms.
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int *temp=new int(a);
    a=b;
    b=*temp;
    free(temp);
}
void sort(int arr[],int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0:
                    swap(arr[low++],arr[mid++]);
                    break;
            case 1: 
                    mid++;
                    break;
            case 2:
                    swap(arr[mid],arr[high--]);
                    break;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array = ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    cout<<"after sorting array is "<<endl<<endl;
    for(int x:arr)
    {
        cout<<x<<endl;
    }
    return 0;
}