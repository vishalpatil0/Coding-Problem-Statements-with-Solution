#include<iostream>
#include<map>
using namespace std;
char maxmCharacter(string str)
{
    map<char,int>mp;
    for(int i=0;i<str.length();i++)
    {
        mp[str[i]]++;
    }
    auto content=mp.begin();
    auto itr=mp.begin();
    itr++;
    for(;itr!=mp.end();itr++)
    {
        if((content->second)<(itr->second))
        {
            content=itr;
        }
    }
    return content->first;
}
int main()
{
    string str;
    cout<<"Enter the string = "<<endl;
    getline(cin,str);
    cout<<"Character -> "<<maxmCharacter(str)<<endl;
    return 0;
}