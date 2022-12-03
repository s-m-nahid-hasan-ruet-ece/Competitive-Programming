/*
5

i<=n/2  5/2=2
i<=j
ar[0]= 5
ar[1]= 4
ar[2]= 3 ij
ar[3]= 2
ar[4]= 1
for(i=0;i<5;i++)
*/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int ar[n];

    for(int i=0;i<n;i++)
        scanf("%d",&ar[i]);

    for(int i =0, j = n-1;i<n/2;i++,j--)
    {
        int temp = ar[i];
        ar[i]=ar[j];
        ar[j]=temp;
    }

    for(int i =0;i<n;i++)
        printf("%d ",ar[i]);



}
