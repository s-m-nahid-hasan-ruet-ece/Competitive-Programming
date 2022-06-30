#include<stdio.h>

void makeSum(int a,int b, int *sum)
{
    *sum = a+b;

}

void stringCat(char a[], char b[], char out[])
{
    int ind = 0;
    int size_a = sizeof &a/sizeof a[0];
    printf("sxz--  %d",size_a);
    for(int i = 0; i<size_a; i++)
      {
          out[ind++] = a[i];
      }

    for(int i = 0; i<(sizeof b)/(sizeof(b[0])); i++)
      {
          out[ind++] = b[i];
      }

}

int main()
{
    int x;
    makeSum(2,3,&x);

    printf("x= %d\n", x);

    char a[]={'a','b','c','\0'};

    char b[]={'d','e','f','\0'};
    char c[711];

     int size_a = sizeof a/sizeof a[0];
    printf("sxz--  %d",size_a);
    stringCat(a,b,c);

    for(int i =0 ;i<3;i++)
        printf("%c",c[i]);


}
