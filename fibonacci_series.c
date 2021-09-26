#include<stdio.h>

long fib(long);
long n1=0,n2=1,n3;

void main()
{

    // Iterative mode
    long first=0,second=1,next,num;
    printf("Enter the number = ");
    scanf("%ld",&num);

    for (long i = 0; i <= num; i++)
    {
        if(i<=1)
        {
            next=i;
        }
        else
        {
            next=first+second;
            first=second;
            second=next;
        }
        
    }
    printf("%ld\n",next);
    

    //Recursive Mode

    // long n;
    
    // printf("Enter the number");
    // scanf("%ld",&n);
    // fib(n);
}

// long fib(long n)
// {
//     if(n1==0 && n2==1)
//     {
//         printf("%ld\n%ld\n",n1,n2);
//     }
//     if(n>0)
//     {
//         n3=n1+n2;
//         n1=n2;
//         n2=n3;
//         printf("%ld\n",n3);
//         fib(n-1);
//     }
// }


