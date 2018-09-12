#include <stdio.h>
#include <stdlib.h>
/* C program for palindrome*/
int main()
{
    printf("Enter number \n");
    int num,i,r=0,rev=0;
    scanf("%d",&num);
    int num1=num;
    while(num!=0)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }

    if(rev==num1)
        printf("Is palindrome");
    else
        printf("Not palindrome");
    return 0;
}
