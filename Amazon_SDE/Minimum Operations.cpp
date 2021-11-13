#include<iostream>
#include<vector>
using namespace std;
int minop(int N,vector<int> A, int k)
{
    int total=0;
    for(int i=0;i<N;i++)
    {
        if(!(A.at(i)<=A.at(i+k)))
        {
            total++;
        }
        if((i+k)==(N-1))
        {
            break;
        }
    }
    return total;
}
int main()
{
    vector<int> v1={20,14,13,19,14,18,10,14,17,10,14,11};
    cout<<minop(12,v1,6)<<endl;
    return 0;
}