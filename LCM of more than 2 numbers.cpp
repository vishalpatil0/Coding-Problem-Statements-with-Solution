#include<iostream>
using namespace std;
class LCM
{
    public:
        int largest(int arr[],int length)
        {
            int max=0;
            for (int i = 0; i < length; i++)
            {
                if(max<arr[i])
                    max=arr[i];
            }
            return max;
        }
        bool check(int arr[],int length,int max)
        {
            for (int i = 0; i < length; i++)
            {
                if(max%arr[i]!=0)
                {
                    return false;
                }    
            }
            return true;
        }
        void print(int arr[],int n,int lcm)
        {
            cout<<"Least common multiple of = [";
            for (int i = 0; i < n-1; i++)
            {
                cout<<arr[i]<<",";
            }
            cout<<arr[n-1]<<"] is "<<lcm<<"."<<endl;
        }
        int process(int arr[],int n)
        {
            int i,temp=largest(arr,n);
            for ( i = temp; ; i*=2)
            {
                if(check(arr,n,i))
                {
                    break;
                }
            }
            return i;
        }
};
int main()
{
    LCM l1;
    int n;
    cout<<"Total Numbers = ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int lcm=l1.process(arr,n);
    cout<<"LCM : "<<lcm<<endl;
    l1.print(arr,n,lcm); //print method of the class.
    return 0;
}