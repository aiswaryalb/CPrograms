#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    if(argc==1)
    {
        printf("no arguments");
        
    }
    else
    {
        int n=atoi(argv[1]);
    int a[n][n],i,j;
    int c=2;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=atoi(argv[c]);
            c++;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d \t",a[j][i]);
            
        }
        printf("\n");
    }
        
    }
    return 0;
}