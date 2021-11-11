/*
program to check composite number
composite number is a number which have more than 2 factors
the 2 factor are 1 and itself.
*/
#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"Enter the number here = ";
    cin>>num1;
    bool flag=false;
    for (int i = 2; i < num1/2; i++)
    {
        if(num1%i==0)
        {
            flag=true;
            break;
        }
    }
    flag? cout<<"It is composite number."<<endl: cout<<"It is not composite number."<<endl;
    return 0;
}