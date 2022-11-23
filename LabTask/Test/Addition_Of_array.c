/*
   Task: Take an integer n as size of the array. Take the values of the array
         and take average of the array value.

   3
   12 13 14

   average: 13

*/

#include<stdio.h>

int main()
{

    int n,  sum = 0;
    double average;
    scanf("%d",&n);
    int ar[n];

    for(int ind=0;ind<n;ind++)
        scanf("%d",&ar[ind]);


    for(int i =0;i<n;i++)
        sum = sum+ ar[i];

    average = (1.0*sum)/n;
 /*
    double/int
    int/double
    double/double
    25/2 = 12.5
 */
    printf("average = %0.3lf \n",average);
}

