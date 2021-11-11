//remove outer braces
//(()())(()) == ()()()

#include<iostream>
using namespace std;
string removing(string temp)
{
    string result;
    result.reserve(100);
    int j=0;
    for (int i = 0; i < temp.size(); i++)
    {
        if(temp[i]==')')
        {
            j--;
        }
        if(j!=0)
        {
            result.push_back(temp[i]);
        }
        if(temp[i]=='(')
        {
            j++;
        }
    }
    return result;
}
int main()
{
    string input;
    cout<<"Enter the string = ";
    cin>>input;
    cout<<"Output = "<<removing(input)<<endl;
    return 0;
}