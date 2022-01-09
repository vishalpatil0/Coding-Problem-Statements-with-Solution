/*

Binary Search Approach


You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.
Now, your task is to find the first and last occurrence of ‘K’ in ARR.

Note:
1. If ‘K’ is not present in the array, then the first and the last occurrence will be -1. 
2. ARR may contain duplicate elements.

For example, if ARR = [0, 1, 1, 5] and K = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.

Sample Input:
6 3
0 5 5 6 6 6
8 2
0 0 1 1 2 2 2 2

Output:
-1 -1 
4 7

Link: https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0

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
    int arr[]={0,5,5,6,6,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    pair<int,int>pr=first_last(arr,6,n);
    cout<<endl<<"First Occurance --> "<<pr.first<<endl
    <<"Last Occurance --> "<<pr.second<<endl;
    return 0;
}