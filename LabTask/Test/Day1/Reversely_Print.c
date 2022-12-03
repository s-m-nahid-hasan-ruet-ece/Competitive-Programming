/*    Task : Take an integer n which is the size of an array.
             Take the array values and print in reverse order.

      5
      1 2 3 4 5

      print: 5 4 3 2 1
*/



#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int ar[n];

    for(int i =0;i<n;i++)
        scanf("%d",&ar[i]);

    for(int i = n-1 ;i>=0;i--)
        printf("%d ",ar[i]);

}
