/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*program to find largest among 3 numbers*/
#include <stdio.h>

int main()
{
    int a,b,c,large;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if(a>b&&a>c)
    large=a;
    else if(b>a&&b>c)
    large=b;
    else
    large=c;
    printf("Largest is %d",large);
    return 0;
}
