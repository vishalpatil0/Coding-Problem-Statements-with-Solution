/*
Approach = Binary Search

Pivot is the smallest or largest element in the array here.
so here we are fiding the index of the smallest element in the sorted--rotated(in any order) array using Binary search. 

10 20 30 40 50 array 

40 50 10 20 30 right rotation

30 40 50 10 20 left roatation

in any roatation as you can see the highest element are on the left side and smallest are on the left side 

so there whole array is not sorted but if we divide it logically then we have two sorted array.

So thats why we can use binary search here.

*/
#include<iostream>
using namespace std;
int pivot(int *arr,int length)
{
    int s=0,e=length-1;
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
int main()
{
    int arr[5]={40,50,10,20,30};
    cout<<"Pivot index = "<<pivot(arr,5)<<endl;
    return 0;
}