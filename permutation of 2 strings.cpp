//check if one string is permutation of another.
// permutation  = have all the same character.
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s1="bat";
    string s2="tab";
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
    {
        cout<<"they are"<<endl;
    }
    return 0;
}