#include<stdio.h>
#include<stdlib.h>
void pythagoreanTriplet(int limit)
{
    int a,b,c=0;
    int m=2;
    while(c<limit)
    {
        for (int n = 1; n < m; n++)
        {
            
            a = m*m - n*n;
            b = 2*m*n;
            c = m*m + n*n;
  
            if (c > limit)
                break;
  
            printf("%d %d %d\n", a, b, c);
        }
        m++;
    }
    
}
int main(int argc,char *argv[])
{
    if(argc==1)
    {
        printf("no arguments");
        
    }
    else
    {
        int limit=atoi(argv[1]);
        pythagoreanTriplet(limit);
        
    }
    return 0;
}