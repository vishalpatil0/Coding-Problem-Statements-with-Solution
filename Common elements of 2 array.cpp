/*
1-> sort the both array
2-> take 2 variable i,j with initial value as 0
3-> iterate the loop with condition of length of array 1 should be greater than i and length of array 2 should be greater than array 2
4-> if element of array_1 at i_th position is smaller than element of array_2 at j_th position then increment i with 1.
5-> if element of array_2 at j_th position is smaller than element of array_1 at i_th position then increment j with 1.
5-> otherwise in third ifelse print the element and increment both i and j bcoz that is our common element.
*/
#include<iostream>
#include<algorithm>
using namespace std;
void common_array(int arr_1[],int len1,int arr_2[],int len2)
{
    int i=0,j=0;
    sort(arr_1,arr_1+len1);
    sort(arr_2,arr_2+len2);
    while(len1>i && len2>j)
    {
        if(arr_1[i]<arr_2[j])
        {
            i++;
        }
        else if(arr_2[j]<arr_1[i])
        {
            j++;
        }
        else
        {
            cout<<arr_1[i]<<' ';
            i++;
            j++;
        }
    }
}
int main()
{
    int len1,len2;
    cout<<"Enter the length of first array = ";
    cin>>len1;
    int arr_1[len1];
    cout<<"Enter the elements in the array = ";
    for (int i = 0; i < len1; i++)
    {
        cin>>arr_1[i];
    }
    cout<<"Enter the length of second array = ";
    cin>>len2;
    int arr_2[len2];
    cout<<"Enter the elements in the array = ";
    for (int i = 0; i < len2; i++)
    {
        cin>>arr_2[i];
    }
    common_array(arr_1,len1,arr_2,len2);
    return 0;
}