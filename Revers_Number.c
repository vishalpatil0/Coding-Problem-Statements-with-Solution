#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("Enter a number = ");
    int n,sum=0;
    int *nptr=NULL;
    nptr=(int *)malloc(sizeof(int));
    nptr=&n;
    scanf("%d",&n);
    while (n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    printf("Sum of digit of %d is = %d",*nptr,sum);
    free(nptr);
}