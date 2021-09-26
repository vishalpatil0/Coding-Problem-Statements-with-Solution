#include<stdio.h>
void main()
{
    printf("Enter the rows and columns = ");
    short row,col;
    scanf("%hi%hi",&row,&col);

    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= col; j++)
        {
            if(i==0 || i==row || j==0 || j==col)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}