//We can only add or subtract matrices if their dimensions are the same
//while passing mutlidimensional array as arguments in the paramter all the other dimesion excpets first must have size bound mentioned. 
//For matrix multiplication, the number of columns in the first matrix must be equal to the number of rows in the second matrix. 
#include<stdio.h>
#define size 10
void takingData(int arr[][size],int no,int row, int col)
{
    printf("Enter the data in matrix %d \n",no);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the [%d,%d]th element = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}
void printingData(int arr[][size],int row,int col)
{   
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
void addition(int m1[][size],int m2[][size],int m3[][size],int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            m3[i][j]=m1[i][j]+m2[i][j];
        }   
    }
}
void subtraction(int m1[][size],int m2[][size],int m3[][size],int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            m3[i][j]=m1[i][j]-m2[i][j];
        }   
    }
}
void multiplication(int m1[][size],int m2[][size],int m3[][size],int row, int col,int row2)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            m3[i][j]=0;
            for (int k = 0; k < row2; k++)
            {
                m3[i][j]+=m1[i][k]*m2[k][j];
            }
        }   
    }
}
void transpose(int m1[][size],int m3[][size],int row,int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           m3[i][j]=m1[j][i]; 
        }
    }
}
void main()
{
    int m1[size][size],m2[size][size],m3[size][size];
    int row1,col1,row2,col2;
    printf("Enter the number of rows and columns for matrix 1 =");
    scanf("%d%d",&row1,&col1);
    printf("Enter the number of rows and columns for matrix 2 =");
    scanf("%d%d",&row2,&col2);
    
    takingData(m1,1,row1,col1);
    
    takingData(m2,2,row2,col2);

    printf("Elements of both matrices are \n");   
    printf("\nMatrix 1\n\n");

    printingData(m1,row1,col1);
    printf("\nMatrix 2\n\n");

    printingData(m2,row2,col2);

    begin:
    printf("\n\n1-Addtion\n2-Subtraction\n3-Multiplication\n4-Transpose\n\nEnter your choice = ");
    int choice;
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        //Addtion of matrices
        if(row1==row2 && col1==col2)
        {
            addition(m1,m2,m3,row1,col1);
            printf("\nAddtion is \n\n");
            printingData(m3,row1,col1);
        }
        else
        {
            printf("Addition is not possible bcause matrices have different dimension.\n");
        }
        break;
    
    case 2:
        //Subtraction of matrices
        if(row1==row2 && col1==col2)
        {
            subtraction(m1,m2,m3,row1,col1);
            printf("\nSubtraction is \n\n");
            printingData(m3,row1,col1);
        }
        else
        {
            printf("Subtraction is not possible bcause matrices have different dimension.\n");
        }
        break;
    
    case 3:
        //Multiplication of matrices
        if(col1==row2)
        {
            multiplication(m1,m2,m3,row1,col2,row2);
            printf("\nMultiplication is \n\n");
            printingData(m3,row1,col2);
        }
        else
        {
            printf("Mulitplication is not possible because column of matrix 1 and row of matrix 2 is not same.");
        }
        break;

    case 4:
        //Transpose of matrices 
        printf("\nTranspose of matrix 1 is as follow \n\n");
        transpose(m1,m3,row1,col1);
        printingData(m3,row1,col1);
        printf("\nTranspose of matrix 2 is as follow \n\n");
        transpose(m2,m3,row2,col2);
        printingData(m3,row2,col2);
        break;
    default:
        printf("Please enter right choice.\n");
        goto begin;
    }
    
    printf("If you want to continue then press 'y' =");
    getchar();
    char decision=getchar();
    if(decision=='y' || decision=='Y')
        goto begin;
}
