/*this array rotation takes less time as comapared to the other program present in this directory named array rotation.
for rotation of string and array 
Left rotation :   
               i-> reverse the array from 0th index to (number of rotation - 1)
               ii-> reverse the array from (number of rotation) index to n-1 index
               iii-> reverse the entrire array
Right rotation :
                i-> Reverse the entire array.
                ii-> Reverse the array from 0 index to (number of rotation - 1)th index.
                iii-> Reverse the array from (number of rotation)th index to n-1 index.               
*/
#include<iostream>
using namespace std;
void reversed(int arr[],int start,int end)
{
    while(start<=end)
    {
        swap(arr[start++],arr[end--]);
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
    d%=n;
    if(d!=0)
    {
        //for left rotation
        // reversed(arr,0,d-1);
        // reversed(arr,d,n-1);
        // reversed(arr,0,n-1);
        //for right rotation
        reversed(arr,0,n-1);
        reversed(arr,0,d-1);
        reversed(arr,d,n-1);
    }
    

    cout<<"After rotate array is as follow "<<endl;
    for(int x:arr)
    {
        cout<<x<<' ';
    }
    cout<<endl;
    return 0;
}