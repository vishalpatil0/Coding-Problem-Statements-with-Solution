//1 is A , 2 is B  ..... 26 is X;
//123->
//  12 3->LC

#include<iostream>
using namespace std;
int decoding(string digit)
{
    int n=digit.size();
    int count[n+1];
    count[0]=1;
    count[1]=1;
    for (int i = 2; i <= n; i++)
    {
        count[i]=0;
        if(digit[i-1]>'0') count[i]=count[i-1];
        if(digit[i-2]=='1'||(digit[i-2]=='2' && digit[i-1]<'7'))
            count[i]=count[i]+count[i-2];
    }
    return count[n];
}
int main()
{
    string digit;
    cout<<"enter the digit = ";
    cin>>digit;
    cout<<decoding(digit)<<endl;
    return 0;
}