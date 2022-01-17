#include<iostream>
using namespace std;
int sq(int n)
{
    if(n==0 || n==1) return n;
    int ans=-1,s=0,e=n/2,mid=s+(e-s)/2;
    while(s<=e)
    {
        if(mid==n/mid)
        {
            return mid;
        }
        else if(mid<n/mid)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double precision(int n,int prec,int sol)
{
    if(sol*sol==n) return sol;
    double ans=sol;
    double factor=1;
    for(int i=1;i<=prec;i++)
    {
        factor/=10;
        for(double j=ans;j*j<n;j+=factor)
        {
            ans=j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    int temp=sq(n);
    int prec;
    cout<<"Enter the precision you want == ";
    cin>>prec;
    cout<<"Square root is = "<<precision(n,prec,temp)<<endl;
    return 0;
}