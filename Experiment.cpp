#include<vector>
#include<iostream>
using namespace std;
void toLower(string &str)
{
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]-'A'+'a';
        }
    }
}
int main()
{
    string s="aabb";
    vector<char>chars(s.begin(),s.end());
    cout<<"chars size --> "<<chars.size()<<endl;
    for(char x:chars)
    {
        cout<<x<<" done "<<endl;
    }
    return 0;
}