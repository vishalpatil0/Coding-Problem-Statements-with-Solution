#include<iostream>
using namespace std;
bool check(int num)
{
        for (int i = 2; i <= num/2; i++)
        {
            if(num%i==0)
            {
                return false;
            }
        }
    return true;
}
int main()
{
    int N,i=2;
    cout<<"Enter the Nth term = ";
    cin>>N;
    while(N!=0)
    {
        if(check(i))
        {
            cout<<i<<endl;
            N--;
        }
        i++;
    }
    return 0;
}