#include <stdio.h>
#include <stdlib.h>
/*C program for Prime number*/
int main()
{
    int num,i,flag=0;
    printf("Enter number \n");
    scanf("%d",&num);
    for( i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            flag++;
        }

    }
    if(flag==2)
    {

        printf("Prime number");
    }
    else
        printf("composite number");
    return 0;
}
