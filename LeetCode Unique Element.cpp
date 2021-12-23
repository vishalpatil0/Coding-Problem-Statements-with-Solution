/*
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.

Input:
2 4 7 2 7
Output: 
4
Input:
1 3 1 3 6 6 7 10 7
Output: 
10
*/
#include<iostream>
using namespace std;
int unique(int arr[],int length)
{
    int ans=0;
    for (int i = 0; i < length; i++)
    {
        ans^=arr[i];
    }
    return ans;
}
int main()
{
    int size;
    cout<<"Enter size of array = ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements in array = "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Unique element is = "<<unique(arr,size)<<endl;
    return 0;
}