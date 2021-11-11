#include <iostream>

using namespace std;
void alt_tab(int arr[],int k, int n)
{
  if(k>=n) k%=n;
  int temp=arr[k];
  for(int i=k;i>0;i--)
  {
    arr[i]=arr[i-1];
  }
  arr[0]=temp;
}
int main()
{

  int arr[] = {3, 5, 2, 4, 1};
  int n = sizeof(arr) / sizeof(arr[0]), k;
  cout << "Number of times ALT + TAB is pressed = ";
  cin >> k;

  alt_tab(arr,k,n);
  cout << "After Alt+Tab  : " << endl;

  for (int x : arr)
    cout << x << ' ';
  cout << endl;

  return 0;
}