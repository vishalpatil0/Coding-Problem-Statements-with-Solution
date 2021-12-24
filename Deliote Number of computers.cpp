#include<iostream>
using namespace std;
class computers{
    public:
        int data[100][2];
        int size=0;
        bool check(int m,int n)
        {
            bool flag;
            for(int i=0;i<size;i++)
            {
                if((data[i][1]<=m) || (data[i][0]>=n))
                {
                    flag=true;
                }
                else
                {
                    return false;
                }
            }
            if(flag)
            {
                return true;
            }
        }
};
int ComputerRequired(int n,int arr[][2])
{
    int count=0;
    bool token;
    computers comp[n];
    comp[count].data[comp[count].size][0]=arr[0][0];
    comp[count].data[comp[count].size][1]=arr[0][1];
    comp[count].size++;
    for(int i=1;i<n;i++)
    {
        for(int k=0;k<=count;k++)
        {
            if(comp[k].check(arr[i][0],arr[i][1]))
            {
                comp[count].data[comp[count].size][0]=arr[i][0];
                comp[count].data[comp[count].size][1]=arr[i][1];
                comp[count].size++;
                token=true;
                break;
            }
        }
        if(!token)
        {
            count++;
            comp[count].data[comp[count].size][0]=arr[i][0];
            comp[count].data[comp[count].size][1]=arr[i][1];
            comp[count].size++;
        }
        token=false;
    }
    return count+1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    cout<<"Computer Required --> "<<ComputerRequired(n,arr)<<endl;
    return 0;
}