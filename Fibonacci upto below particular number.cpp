#include<iostream>
using namespace std;
int main()
{
    num,n1=0,n2=1,n3;
    cout<<"Enter the value "<<endl;
    cin>>num;
    for (int  i = 0; i<num; i++)
    {
        if(i==0 || i==1)
        {
            n3=i;
        }
        else
        {
            n3=n1+n2;
            n1=n2;
            n2=n3;
        }
        if(n3<=num)
            cout<<n3<<endl;
        else
            break;
    }
    
    return 0;
}