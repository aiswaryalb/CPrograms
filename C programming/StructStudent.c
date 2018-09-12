#include<stdio.h>
#include<stdlib.h>
struct student{
  int rollno;
  char name[80];
  float percentage;
};
int main(int argc,char *argv[])
{
    
    struct student a;
    a.rollno=1;
    strcpy(a.name,"aiswarya");
    a.percentage=80.8;
    printf("%d\n",a.rollno);
    printf("%s\n",a.name);
    printf("%.2f\n",a.percentage);
   
    return 0;
}