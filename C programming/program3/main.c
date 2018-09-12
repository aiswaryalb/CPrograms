#include <stdio.h>
#include <stdlib.h>
/* C program for Fibonacci*/
int main()
{
    printf("Enter limit \n");
    int limit,i,c=0,a=0,b=1,pdt=1;
    scanf("%d",&limit);
   printf("%d\t%d\t",a,b);
    for(i=3;i<=limit;i++)
    {

      c=a+b;
     printf("%d\t",c);
      a=b;
      b=c;
    }

    return 0;
}
