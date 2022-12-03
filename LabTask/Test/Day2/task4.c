#include<stdio.h>

int main()
{

    int n,m;
    scanf("%d %d",&n,&m);

    int ar[n];
    for(int i =0;i<n;i++)
        scanf("%d",&ar[i]);

    int x = 0;
    for(int i=0;i<n;i++)
    {
        if(m==ar[i])
        {
            printf("Yes\n");
            x=1;
            //return 0;
        }
    }

    if(x!=1)
       printf("No\n");
}
