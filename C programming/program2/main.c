#include <stdio.h>
#include <stdlib.h>
/* C program for Factorial*/
int main()
{
    printf("Enter number \n");
    int num,i,pdt=1;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {

        pdt=pdt*i;
    }
    printf("Factorial is  %d",pdt);
    return 0;
}
