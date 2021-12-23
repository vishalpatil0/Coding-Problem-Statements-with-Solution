#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout<<"Enter the length of number = ";
    int length;
    cin>>length;
    int arr[length];
    cout<<"Enter numbers in array "<<endl;
    for (int i = 0; i < length; i++)
    {
        cin>>arr[i];
    }
    int ans=0,i=0;
    for(int x:arr)
    {
        ans+=(x*pow(10,i++));
    }
    cout<<ans<<endl;
    return 0;
}