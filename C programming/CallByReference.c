#include<stdio.h>
#include<stdlib.h>
swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
     printf("After swapping  p= %d  and q= %d \n",*a,*b);
}

int main(int argc,char *argv[])
{
    int p=atoi(argv[1]);
    int q=atoi(argv[2]);
    printf("Before swapping  p= %d  and q= %d \n",p,q);
    swap(&p,&q);
   // printf("After swapping  p= %d  and q= %d \n",p,q);
    return 0;
}