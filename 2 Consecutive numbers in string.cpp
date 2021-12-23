//find position of first 2 repeat character one bye one.
#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int pos;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]==str[i+1])
        {
            pos=i+1;
            break;
        }
    }
    cout<<"Position = "<<pos<<endl;
    return 0;
}