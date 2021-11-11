#include<iostream>
#include<vector>
using namespace std;
vector<int>vect;
void insert_in_vector(int arr[],int length)
{
    int number=0;
    for(int i=0;i<length;i++)
    {
        number*=10;
        number+=arr[i];
    }
    vect.push_back(number);
}
void swap(int a[],int i,int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void permutated(int arr[],int length,int cid)
{
    if(cid==length-1)
    {
        insert_in_vector(arr,length);
        return;
    }
    for(int i=cid;i<length;i++)
    {
        swap(arr,i,cid);
        permutated(arr,length,cid+1);
        swap(arr,i,cid);
    }
}
int solve(int n)
{
    int sum=9999999;
    int length=0;
    int temp=n;
    while (temp!=0)
    {
        length++;
        temp/=10;
    }
    int count=length;
    int arr[length];
    temp=n;
    for(int i=0;temp!=0;i++)
    {
        arr[count-1]=temp%10;
        temp/=10;
        count--;
    }
    permutated(arr,length,0);
    for(int i=0;i<vect.size();i++)
    {
        temp=vect.at(i);
        int container=0;
        for(int j=0;j<length-1;j++)
        {
            container*=10;
            container+=(temp%10);
            temp/=10;
            if(sum>(container+temp))
            {
                sum=(container+temp);
            }
        }
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    cout<<"Minimum Addition is = "<<solve(n)<<endl;
    return 0;
}