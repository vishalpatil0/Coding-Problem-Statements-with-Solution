// C++ Program to read a square matrix
// and print the main diagonal elements
#include <iostream>
#include<time.h>
#include<algorithm>
using namespace std;

int main()
{

	int m,n;
    cout<<"Enter the size = ";
    cin>>m>>n;
    int arr[m][n];
    srand(time(0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j]=rand()%89+11;
        }
    }
    int maxm=max(m,n);
    int small=min(m,n);
    int data[maxm][maxm]={};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            data[i][j]=arr[i][j];
        }
    }
    if(small==n)
    {
        while(small!=maxm)
        {
            for(int i=0;i<maxm;i++)
            {
                data[i][small]=1;
            }
            small++;
        }
    }
    else if(small==m)
    {
        while(small!=maxm)
        {
            for (int i = 0; i < maxm; i++)
            {
                data[small][i]=1;
            }
            small++;
        }
    }
    for (int i = 0; i < maxm; i++)
    {
        for (int j = 0; j < maxm; j++)
        {
            cout<<data[i][j]<<' ';
        }
        cout<<endl;
    }
    int temp[maxm];
    for(int i=0;i<maxm;i++)
    {
        temp[i]=data[i][i];
    }
    for(int x:temp) cout<<x<<endl;
	return 0;
}

// This code is contributed by SHUBHAMSINGH10
