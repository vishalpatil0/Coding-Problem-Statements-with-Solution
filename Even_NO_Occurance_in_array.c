#include <stdio.h>
int res[100][100], row = 0;
int check(int data)
{
    int flag=1;
    for (int i = 0; i < row; i++)
    {
        if(data==res[i][0])
        {
            flag=0;
            break;
        }
    }
    return flag;
}
void main()
{
    
    //fibonaci series

    int N,notation;
    printf("Enter the size of array = ");
    scanf("%d", &N);
    int tower[N];
    printf("Etner the element of array = ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &tower[i]);
    }

    printf("\n\nData in array =\n\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\t", tower[i]);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (tower[j] == tower[i])
            {
                if(check(tower[i]))
                {
                    res[row][0] = tower[i];
                    res[row][1] += 1;
                    notation=0;
                }
            }
        }
        if(notation==0)
        {
            row++;
            notation=1;
        }
    }

    printf("\n\nresult table \n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if(res[i][1]%2==0)
            {
                printf("%d\t",res[i][j]);
            }
        }
        printf("\n");
    }
}