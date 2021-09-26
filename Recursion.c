#include<stdio.h>

//recursion means when a function calls a copy of itself
// in which we divide problms in small problems
// a problem that can be solve recursively can also be solved by iteratively
// a termination condtion should be imposed to stop the forver calling 


// int recusrion(int number)
// {
//     if (number==0 || number==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return number * recusrion(number-1);
//     }
// }

void main()
{
    int num;
    printf("Enter the number = \n");
    scanf("%i",&num);
    printf("Factorial of %i is = %i",num,recusrion(num));

    //Iterative way of factorial
    // int fact=1;
    // for(int j=num;j>=1;j--)
    // {
    //     fact*=j;
    // }
    // printf("%i",fact);
}