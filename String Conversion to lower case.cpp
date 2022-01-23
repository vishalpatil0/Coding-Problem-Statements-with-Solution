#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter the string == ";
    cin>>name;
    for(int i=0;i<name.size();i++)
    {
        if(name[i]<97)
        {
            name[i]=name[i]-'A'+'a';
        }
    }
    cout<<"Lower case string is == "<<name<<endl;
    return 0;
}