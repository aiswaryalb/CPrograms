#include <stdio.h>
#include <string.h>
 
int main(int argc,char *argv[])
{
 char c;
 c=*(argv[1]);
 
   if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
   printf("vowel");
   else
   printf("not vowel");
  	return 0;
}