#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter the string == ";
    cin>>name;
    for(int i=0;i<name.size();i++)
    {
        if(name[i]>90)
        {
            name[i]=name[i]-'a'+'A';
        }
    }
    cout<<"Upper case string is == "<<name<<endl;
    return 0;
}