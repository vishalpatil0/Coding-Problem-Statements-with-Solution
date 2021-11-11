#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stack>
using namespace std;
char  *display(char *temp)
{
    char *data=new char[100];
    string str1;
    stack<string>stk;
    int j=0;
    for (int i = 0; i < strlen(temp); i++)
    {
        if(temp[i]==' ' || temp[i+1]=='\0')
        {
            for(int k=j;k<=i;k++)
            {
                str1.push_back(temp[k]);
            }
            if(temp[i+1]=='\0') str1.push_back(' ');
            stk.push(str1);
            str1.clear();
            j=i+1;
        }
    }
    str1.clear();
    while(!stk.empty())
    {
        str1.append(stk.top());
        stk.pop();
    }
    str1.copy(data,str1.size());
    return data;
}
int main()
{
    char string1[100];
    cin.getline(string1,100);
    puts(display(string1));
    return 0;
}