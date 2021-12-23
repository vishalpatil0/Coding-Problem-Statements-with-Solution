#include<iostream>
#include<cstring>
using namespace std;
void reverse(char *str,int low,int high)
{
    for (int i = low, j=high-1; i < high; i++,j--)
    {
        if(i<j)
        {
            char *temp=new char(str[i]);
            str[i]=str[j];
            str[j]=*temp;
        }
    }
}
const char * reversedWords(char str[])
{
    int j=0;
    reverse(str,0,strlen(str));

    for (int i = 0; i <= strlen(str); i++)
    {
        if(str[i]=='\0')
        {
            reverse(str,j,i);        
        }
        else if(str[i]==' ')
        {
            reverse(str,j,i);
            j=i+1;
        }
    }
    return str;
}
int main()
{
    char *str=new char[100];
    cin.getline(str,100);
    cout<<"String after getting word reversed is as = "<<reversedWords(str)<<endl;
    return 0;
}