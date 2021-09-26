#include<stdio.h>

void main()
{
    int number_1,i;
    printf("Enter the number for which you want table : ");
    scanf("%d",&number_1);
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",number_1,i,number_1*i);
    }
}
