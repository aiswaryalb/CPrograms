/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int gcd(int a ,int b)
{
    if(a==0||b==0)
        return 0;
    else if(a==b)
        return a;
    else if(a>b)
        return gcd(a-b,b);
    else
        return gcd(a,b-a);
    
}
int main(int argc,char *argv[])
{
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    int hcf=gcd(a,b);
    int lcm=(a*b)/hcf;
    printf("GCD %d \n",hcf);
    printf("LCM %d",lcm);
    return 0;
}
