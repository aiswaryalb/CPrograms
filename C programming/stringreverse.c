#include <stdio.h>
#include <string.h>
 
int main(int argc,char *argv[])
{
    
  	char *str,temp;
  	int i;
  	str=argv[1];
  	
  	printf("%s \n",str);
 int j=strlen(str)-1;
 while(i<j)
 {
     temp=str[i];
     str[i]=str[j];
     str[j]=temp;
     i++;
     j--;
 }
 printf("reverse is %s",str);
  	
  	
  	return 0;
}