#include<iostream>
#include<stdlib.h>

using namespace std;
void func(int *x, int *y)
{
  int temp;
  x=(int**)malloc(sizeof(int));
  y=(int**)malloc(sizeof(int));
  temp=*x;
  *x=*y;
  *y=temp;
}
int main()
{
  int i=1;
  int j=2;
  cout<<i<<endl<<j<<endl;
  func(&i,&j);
  cout<<i<<endl<<j<<endl;
  return 0;
}