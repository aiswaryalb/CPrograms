#include <stdio.h>
#include <string.h>
 
int main(int argc,char *argv[])
{
   int size,i,j,arr[50];
   size=atoi(argv[1]);
   for( i=0;i<size;i++)
   {
       arr[i]=atoi(argv[i+2]);
   }
  
  
  
  int temp;
  for(i=0;i<size;i++)
  {
      
      for(j=0;j<size;j++)
      {
          if(arr[j]>arr[j+1])
      {
          temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
      }
          
      }
      
  }
  	for( i=0;i<size;i++)
  printf("%d    ",arr[i]);
  	return 0;
}