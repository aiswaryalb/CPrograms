/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*program to find largest among 3 numbers*/
#include <stdio.h>

int main(int argc,char *argv[])
{
    int i;
    if(argc>=2)
    {
        printf("arguments are \n");
        for(i=1;i<argc;i++)
        printf("%s",argv[i]);

    }
    else
    printf("empty argument list");
    return 0;
}
