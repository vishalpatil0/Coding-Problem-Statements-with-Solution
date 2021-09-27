/*
Print an integer representing the

concatenation of four digits where first digit represents the smallest digit in the thousands place of all three numbers; second digit represents the largest digit in the hundreds place of all three numbers; third digit represents the smallest digit in the tens place represents the largest digit in the units place of

of all three numbers and fourth digit

all three numbers.

Example

Input:

3521 2452 1352

Output:

1522
*/



#include<iostream>
using namespace std;
static int result=0;
void great(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        {
            result*=10;
            result+=a;
        }
        else
        {
            result*=10;
            result+=c;
        }
    }
    else if(b>c)
    {
        result*=10;
        result+=b;
    }
    else
    {
        result*=10;
        result+=c;
    }
}
void small(int a,int b,int c)
{
    if(a<b)
    {
        if(a<c)
        {
            result*=10;
            result+=a;
        }
        else
        {
            result*=10;
            result+=c;
        }
    }
    else if(b<c)
    {
        result*=10;
        result+=b;
    }
    else
    {
        result*=10;
        result+=c;
    }
}
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    cout<<"---"<<endl;
    int tn1=n1/1000;
    int tn2=n2/1000;
    int tn3=n3/1000;
    small(tn1,tn2,tn3);
    tn1=(n1/100)%10;
    tn2=(n2/100)%10;
    tn3=(n3/100)%10;
    great(tn1,tn2,tn3);
    tn1=((n1/10)%100)%10;
    tn2=((n2/10)%100)%10;
    tn3=((n3/10)%100)%10;
    small(tn1,tn2,tn3);
    tn1=(((n1%1000)%100)%10);
    tn2=(((n2%1000)%100)%10);
    tn3=(((n3%1000)%100)%10);
    great(tn1,tn2,tn3);
    cout<<endl<<result<<endl;
    return 0;
}