/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*program to check armstrong number*/
#include <stdio.h>

int main()
{
    int num,num1,r,sum=0;

    scanf("%d",&num);
    num1=num;
    while(num!=0)
    {
        r=num%10;
        sum=sum+r*r*r;
        num=num/10;
    }
    if(num1==sum)
    printf("armstrong number");
    else
    printf("not armstrong number");

    return 0;
}
