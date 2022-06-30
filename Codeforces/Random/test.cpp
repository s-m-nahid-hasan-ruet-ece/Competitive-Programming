#include<stdio.h>
int main()
{
   int n,count;
   scanf("%d",&n);
   if(n==0)
   {count=1;}
   while(n>0)
   {
       count=count+1;
      n=n/10;
   }
   printf("%d\n",count);
   return 0;
   
}