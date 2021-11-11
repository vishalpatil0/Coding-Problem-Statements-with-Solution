#include<iostream>
using namespace std;
string rev(string str)
{
  string temp;
  int j=0;
  for(int i=0;i<=str.size();i++)
  {
    if(str[i]==' ')
    {
      temp.insert(0,(" "+(str.substr(j,i))));
      j=i+1;
    }
    else if(str[i+1]=='\0')
    {
        temp.insert(0,str.substr(j,i+1));
        j=i+1;
    }
  }
  return temp;
}
int main()
{
  string str="My name is";
  cout<<endl<<endl<<endl;
  cout<<rev(str);
  cout<<endl<<endl;
  return 0;
}