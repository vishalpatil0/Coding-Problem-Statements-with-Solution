/*
String is a character array so changes in array as an paramter willl reflect in main 
*/
#include<stdio.h>
#include<string.h>
#define namesize 100
void reverse(char [],int);
void main()
{
    char str1[namesize],str2[namesize];   
    printf("Enter the string here = ");
    fgets(str1,namesize,stdin);
    int length=strlen(str1);
    strcpy(str2,str1);
    reverse(str1,length);
    if(strcmp(str1,str2))
    {
        printf("It is not palindrome.\n");
    }
    else
    {
        printf("It is palindrome.\n");
    }
}
void reverse(char arr[],int length)
{
    char temp;
    for (int i = length-2,j=0; i >=length/2; j++,i--)
    {
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }

}