#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the length of number = ";
    int length;
    cin>>length;
    int arr[length];
    cout<<"Enter numbers in array "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    int number=0;
    for(int i:arr)
    {
        number=(number*10)+i;
    }
    cout<<"Answer --> "<<number<<endl;
    return 0;
}