#include<iostream>
using namespace std;
int main()
{
  int num;
  cout<<"Enter the number = ";
  cin>>num;
  int sum=0;
  for(int i=1;i<=num/2;i++)
  {
    if(num%i==0)    sum+=i;
  }
  if(sum==num) cout<<"It is perfect number."<<endl;
  else        cout<<"It is not perfect number."<<endl;
  return 0;
}