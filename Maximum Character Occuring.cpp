#include<iostream>
using namespace std;
char maxmCharacter(string str)
{
    int arr[26]={};
    for(int i=0;i<str.length();i++)
    {
        char temp=str[i];
        int number;
        if(temp>=97 && temp<=122)
        {
            number=temp-'a';
        }
        else
        {
            number=temp-'A';
        }
        arr[number]++;
    }
    int ans=-1,maxi=-1;
    for(int i=0;i<26;i++)
    {
        if(maxi<arr[i])
        {
            maxi=arr[i];
            ans=i;
        }
    }   
    return 'a'+ans;
}
int main()
{
    string str;
    cout<<"Enter the string = "<<endl;
    getline(cin,str);
    cout<<"Character -> "<<maxmCharacter(str)<<endl;
    return 0;
}