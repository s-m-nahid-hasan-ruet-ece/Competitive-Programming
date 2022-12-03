/*
   Task: Take an array input, copy it to another.

*/


#include<stdio.h>

int main()
{

    int n;
    scanf("%d",&n);
    int ar[n], br[n];

    for(int i =0 ;i<n;i++)
        scanf("%d",&ar[i]);

    for(int i =0;i<n;i++)
        br[i]= ar[i];

    for(int i =0;i<n;i++)
        printf("%d ",br[i]);

}

