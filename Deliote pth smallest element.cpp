#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int pthsmallest(int n,int arr[],int p,int x,int z)
{
    int res=0;
    vector<int>vct;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%x==z)
        {
            vct.push_back(arr[i]);
        }
    }
    sort(vct.begin(),vct.end());
    int data=vct.at(p-1);
    for (int i = 0; i < n; i++)
    {
        if(data==arr[i]) return i;
    }
    return res;
}
int main()
{
    int n,p,x,z;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>p>>x>>z;
    cout<<"Index = "<<pthsmallest(n,arr,p,x,z)<<endl;
    return 0;
}