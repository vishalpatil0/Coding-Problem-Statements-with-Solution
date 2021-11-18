#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int x,k;
    cin>>x>>k;
    vector<int>v1;
    int temp;
    v1.reserve(x);
    cout<<"Enter elements in array "<<endl<<endl;
    for (int i = 0; i < x; i++)
    {
        cin>>temp;
        v1.push_back(temp);
    }
    map<int,int> mp;
    int m,n;
    for (int i = 0; i < k; i++)
    {
        cin>>m>>n;
        mp.insert({m,n});
    }
    auto itr=mp.begin();
    for(; itr != mp.end();itr++)
    {
        m=itr->first;
        n=itr->second;
        int check;
        for (int i = 0; i < v1.size(); i++)
        {
            if(v1.at(i)==m)
            {
                v1.at(i)=n;
                check=i;
                break;
            }
        }
        for (int i = 0; i < v1.size(); i++)
        {
            if(v1.at(i)==n && check!=i)
            {
                v1.at(i)=m;
                break;
            }
        }
    }
    for(int x:v1)
    {
        cout<<x<<endl;
    }
    return 0;
}