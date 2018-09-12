/*

1

3*2

4*5*6

10*9*8*7

11*12*13*14*15    */


#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int i,k=0,t;
    int n=atoi(argv[1]);
    for(int i=0;i<n;i++)
   {
       if(i%2==0)
       {
           for(int y=0;y<i;y++)
           {
               printf("%d*",++k);
           }
           printf("%d",++k);
       }
       else
       {
           t=k+i+1;
           for(int x=0;x<i;x++)
           {
               printf("%d*",t--);
           }
           printf("%d",t--);
           k=k+i+1;
       }
       printf("\n");
   }

    
    
            return 0;

}