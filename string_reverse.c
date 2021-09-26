/*
String is a character array so changes in array as an paramter willl reflect in main 
*/
#include<stdio.h>
#include<string.h>
#define namesize 100
void reverse(char [],int);
void main()
{
    char str1[namesize];
    printf("Enter the string here = ");
    fgets(str1,namesize,stdin);
    int length=strlen(str1);
    reverse(str1,length);
    puts(str1);
}
void reverse(char arr[],int length)
{
    char temp;
    for (int i = length-1,j=0; i >=length/2; j++,i--)
    {
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
}