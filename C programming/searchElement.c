#include <stdio.h>
#include <string.h>
 
int main(int argc,char *argv[])
{
   int size,i,flag=0,arr[50];
   size=atoi(argv[1]);
   for( i=0;i<size;i++)
   {
       arr[i]=atoi(argv[i+2]);
   }
  
  
  
  int search=atoi(argv[size+2]);
  for( i=0;i<size;i++)
   {
       if(arr[i]==search)
       {
           flag=1;
           break;
       }
   }
   if(flag==1)
   printf("found");
   else
   printf("not found");
  	return 0;
}