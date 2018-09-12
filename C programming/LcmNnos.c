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
int findlcm(int arr[],int n)
{
    int result=arr[0];
    for(int i=1;i<n;i++)
    {
       result=(result*arr[i])/(gcd(arr[i],result)) ;
        
    }
    return result;
}

int main(int argc,char *argv[])
{
    int n=atoi(argv[1]);
    int arr[20],i;
    for(i=0;i<n;i++)
    {
        arr[i]=atoi(argv[i+2]);
    }
    
    int lcm=findlcm(arr,n);
    printf("LCM %d",lcm);
    return 0;
}
