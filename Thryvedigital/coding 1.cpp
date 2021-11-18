#include<iostream>
#include<bitset>
#include<map>
using namespace std;
int no_of_1s(int number)
{
    bitset<16>b1(number);
    return b1.count();
}
void process(int arr[],int length)
{
    int nt;
    int temp;
    map<int,int>mp;
    for (int i = 0; i < length; i++)
    {
        nt=no_of_1s(arr[i]);
        temp=arr[i];
        cout<<"nt == "<<nt<<endl<<endl;
        while(true)
        {
            temp++;
            if(nt==no_of_1s(temp))
            {
                mp.insert({arr[i],temp});
                cout<<i<<" element inserted"<<endl;
                break;
            }
        }
    }
    auto itr=mp.begin();
    for(;itr!=mp.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
}
int main()
{
    int T;
    cin>>T;
    int arr[T];
    for (int i = 0; i < T; i++)
    {
        cin>>arr[i];
    }
    process(arr,T);
    return 0;
}