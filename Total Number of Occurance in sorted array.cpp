/*

Binary Search Approach

*/
#include<iostream>
using namespace std;
pair<int,int> first_last(int arr[],int k,int n)
{
    pair<int,int>pr(-1,-1);
   	int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            pr.first=mid;
            e=mid-1;
        }
        else if(k>arr[mid])
        {
            s=mid+1;
        }
        else if(k<arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    s=0,e=n-1;
    mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            pr.second=mid;
            s=mid+1;
        }
        else if(k>arr[mid])
        {
            s=mid+1;
        }
        else if(k<arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return pr;

}
int main()
{
    int arr[]={0,3,4,4,4,5,5,6,6,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    pair<int,int>pr=first_last(arr,4,n);
    cout<<endl<<"Total Occurance --> "<<pr.second-pr.first+1<<endl;
    return 0;
}