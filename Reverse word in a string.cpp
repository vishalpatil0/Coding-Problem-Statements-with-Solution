#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  string str;
  getline(cin,str);
  reverse(str.begin(),str.end());
  int j=0;
  for (int i = 0; i <= str.size(); i++)
  {
    if(str[i]=='\0')
    {
      reverse(str.begin()+j,str.end());
    }
    else if(str[i]==' ')
    {
      reverse(str.begin()+j,str.begin()+i);
      j=i+1;
    }
  }
  cout<<str<<endl;
  return 0;
}