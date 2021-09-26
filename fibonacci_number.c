#include<stdio.h>

long fib(long);

void main()
{
    printf("Enter the number = ");
    long n;
    scanf("%ld",&n);
    printf("Fibonacci number = %ld",fib(n));
}

long fib(long n)
{
    if(n<=1 && !(n<0))
    {
        return n;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}