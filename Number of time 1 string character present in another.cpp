#include<bits/stdc++.h>
using namespace std;
int value(string j,string s)
{
    int count=0;
    map<char,bool> mp;
    for (int i = 0; i < j.size(); i++)
    {
        mp[j[i]]=true;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if(mp[s[i]]==true)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string j="aA",s="aAAbbbb";
    cout<<value(j,s)<<endl;
    return 0;
}