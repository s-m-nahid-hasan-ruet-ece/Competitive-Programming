///  Take an array size n as user input and enter the array
///  values and print them.

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];

    for(int i = 0;i<n;i++)
       scanf("%d",&ar[i]);

    for(int i = 0;i<n;i++)
       printf("value at index %d : %d\n",i,ar[i]);



    //printf("array size:  %d", sizeof(ar)/4);
}
