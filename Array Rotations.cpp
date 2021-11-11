#include<iostream>
using namespace std;
void left_rotation(int arr[],int length,int k)
{
  for(int i=0;i<k;i++)
  {
    int temp=arr[0];
    for(int j=0;j<length;j++)
    {
      arr[j]=arr[j+1];
    }
    arr[length-1]=temp;
  }
}
void right_rotation(int arr[],int length,int k)
{
  for(int i=0;i<k;i++)
  {
    int temp=arr[length-1];
    for(int j=length-1;j>=0;j--)
    {
      arr[j]=arr[j-1];
    }
    arr[0]=temp;
  }
}
int main()
{
  int arr[]={10,20,30,40,50};
  int length=sizeof(arr)/sizeof(arr[0]);
  int choice;
  cout<<"Default array is : "<<endl<<endl;
  for(int x:arr) cout<<x<<"->";
  cout<<endl;
  int k;
  while(true)
  {
    cout<<"\n1-Left Rotation\n2-Right Rotation\n3-Exit\n\nEnter your choice = ";
    cin>>choice;
    switch(choice)
    {
      case 1:
            cout<<"how many left Rotation you want = ";
            cin>>k;left_rotation(arr,length,k);
            cout<<"\n\nArray after "<<k<<" rotations is :\n"<<endl;
            for(int x:arr)
            {
              cout<<x<<endl;
            }
            break;
      case 2:
            cout<<"How many Right Rotation you want = ";
            cin>>k;right_rotation(arr,length,k);
            cout<<"\n\nArray after "<<k<<" rotations is :\n"<<endl;
            for(int x:arr)
            {
              cout<<x<<endl;
            }
            break;
      case 3:
            exit(0);
      default:
            cout<<"Please enter right choice."<<endl;
    }
  }
  return 0;
}