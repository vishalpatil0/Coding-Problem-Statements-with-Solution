#include<iostream>
using namespace std;
int  sub_total(int start,int end)
{
    int temp;
    int j=1;
    for(int i=start;i<=end;i++,j++);
    j--;
    return j*j;
}
int total_sqt(int num)
{
    int total=0;
    int temp=num;
    while(temp!=1)
    {
        if(temp%2==0)
        {
            total+=sub_total(temp,num);
        }
        temp--;
    }
    return total;
}
int main()
{
    int n;
    cout<<"Enter the side of the square = ";
    cin>>n;
    cout<<"Total number of sub square with side as even number is = "<<total_sqt(n)<<endl;
    return 0;
}