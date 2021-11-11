//check if it is fully parenthesized or not
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the expression = "<<endl;
    getline(cin,str);
    stack<char> stk;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]=='{' || str[i]=='[' || str[i]=='(' )
        {
            stk.push(str[i]);
        }
        else if(str[i]=='}' and stk.top()=='{')
        {
            stk.pop();
        }
        else if(str[i]==']' and stk.top()=='[')
        {
            stk.pop();
        }
        else if(str[i]==')' and stk.top()=='(')
        {
            stk.pop();
        }
    }

    if(stk.empty()) cout<<"it is full parenthesized"<<endl;
    else            cout<<"it is not "<<endl;
    return 0;
}