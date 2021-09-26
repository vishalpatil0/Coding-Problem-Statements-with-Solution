#include<stdio.h>
#include<math.h>
float distance(int x1,int y1,int x2,int y2)
{
    float dist=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    return sqrt(dist);
}
void main()
{
    printf("Enter the (x1,y1) and (x2,y2) = ");
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

    printf("Euclidean Distance is = %f",distance(x1,y1,x2,y2));
}

//gcc Euclidean_Distance.c -o Euclidean_Distance -lm            --for math.h library.