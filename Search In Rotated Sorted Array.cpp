/*
Search In Rotated Sorted Array

You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.
Now the array is rotated at some pivot point unknown to you. For example, if ARR = [ 1, 3, 5, 7, 8]. Then after rotating ARR at index 3, the array will be ARR = [7, 8, 1, 3, 5].
Now, your task is to find the index at which ‘K’ is present in ARR.

Note:

1. If ‘K’ is not present in ARR then print -1.
2. There are no duplicate elements present in ARR. 
3. ARR can be rotated only in the right direction.

Sample Input 1:
2
4 3
8 9 4 5
7 2
2 4 5 6 8 9 1

Sample Output 1:
-1 
0

*/

#include<iostream>
#include<vector>
using namespace std;

int getPivot(vector<int>&arr, int n)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binarySearch(vector<int>&arr,int s,int e,int k)
{
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]<k)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
	int pivot=getPivot(arr,n);
    if(arr[pivot]<=k && k<=arr[n-1])
    {
        return binarySearch(arr,pivot,n-1,k);
    }
    else
    {
        return binarySearch(arr,0,pivot-1,k);
    }
}

int main()
{
    vector<int>v={2,4,5,6,8,9,1};
    cout<<findPosition(v,7,2)<<endl;
    return 0;
}