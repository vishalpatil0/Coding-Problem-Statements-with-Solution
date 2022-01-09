#include<iostream>
#include<vector>
using namespace std;
void dosomething(vector<int>&arr)
{
	int m=0,n=arr.size()-1,i=0;
	while(m<=n)
	{
		if(arr[i]==0)
		{
			swap(arr[m++],arr[i]);
		}
		else if(arr[i]==1)
		{
			swap(arr[n--],arr[i]);
		}
	}
}
int main()
{
	vector<int>vect={1,0,1,0,1,0};
	dosomething(vect);
	for(int x:vect)
	{
		cout<<x<<endl;
	}
	return 0;
}