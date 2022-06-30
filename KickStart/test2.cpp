#include<stdio.h>
int main()
{
    int rows,colomns,i,j;
    scanf("%d%d",&rows,&colomns);

    for(i=1;i<=rows; i++)
    {
        for(j=1;j<=colomns; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
