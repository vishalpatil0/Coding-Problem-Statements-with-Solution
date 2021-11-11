#include<iostream>
using namespace std;
int product(int n1,int n2)
{
    if(n1!=0)
    {
        return n2+product(--n1,n2);
    }
    return 0;
}
int main()
{
    int number_1,number_2;
    cout<<"Enter number 1 = ";
    cin>>number_1;
    cout<<"Enter number 2 = ";
    cin>>number_2;
    cout<<number_1<<'*'<<number_2<<" = "<<product(number_1,number_2)<<endl;
    return 0;
}