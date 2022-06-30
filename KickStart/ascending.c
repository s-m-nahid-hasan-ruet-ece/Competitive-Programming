#include<stdio.h>

int main()
{

    int n;
    scanf("%d",&n);

    int array[n+5];

    for(int i= 0;i<n;i++)
        scanf("%d",&array[i]);


    int flag = 1;


    for(int i = 0;i<n-1;i++)
    {
        if(array[i]>array[i+1])
        {
            flag= 0;
            break;
        }
    }

    if(flag)
        printf("Yes\n");
    else
        printf("No\n");


}
