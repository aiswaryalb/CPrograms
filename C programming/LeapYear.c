/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*Pgm to check if entered year is leap or not*/
#include <stdio.h>

int main()
{
    int year;

    scanf("%d",&year);
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            printf("Leap year");
            else
            printf("Not Leap year");
        }
        else
        printf(" Leap year");
    }

    else
    printf("Not Leap year");

    return 0;
}
