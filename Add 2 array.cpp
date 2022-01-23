#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> add(vector<int>&nums1,vector<int>&nums2)
{
    int n=nums1.size()-1;
    int m=nums2.size()-1;
    vector<int>result;
    int sum=0,carry=0;
    while(n>=0 && m>=0)
    {
        int val1=nums1[n];
        int val2=nums2[m];
        sum=val1+val2;
        sum+=carry;
        result.push_back(sum%10);
        carry=sum/10;
        n--;
        m--;
    }
    while(n>=0)
    {
        int val=nums1[n]+carry;
        result.push_back(val%10);
        carry=val/10;
        n--;
    }
    while(m>=0)
    {
        int val=nums2[m]+carry;
        result.push_back(val%10);
        carry=val/10;
        m--;
    }
    reverse(result.begin(),result.end());
    return result;
}
int main()
{
    vector<int>arr1={9,3,9,9};
    vector<int>arr2={4,4};
    vector<int>result=add(arr1,arr2);
    cout<<"Addition is = "<<endl;
    for(int x:result) cout<<x; cout<<endl;
    return 0;
}