#include <stdio.h>
#include <stdlib.h>
/*Menu driven calculator*/
int main()
{
    int ch,a,b,ans=0,c;
    do
    {
        printf("Press \n 1.Add\n 2.Multiply \n 3.Divide \n 4.Subtract \n");
    printf("Enter choice \n");
    scanf("%d",&ch);

    switch(ch)
    {

    case 1:
            printf("Enter number 1 \n");
            scanf("%d",&a);
            printf("Enter number 2 \n");
            scanf("%d",&b);
            ans=a+b;
            printf("Sum=%d",ans);
            break;
    case 2:printf("Enter number 1 \n");
            scanf("%d",&a);
            printf("Enter number 2 \n");
            scanf("%d",&b);
            ans=a*b;
            printf("Product=%d",ans);
            break;
    case 3:printf("Enter number 1 \n");
            scanf("%d",&a);
            printf("Enter number 2 \n");
            scanf("%d",&b);
            ans=a/b;
            printf("Quotient=%d",ans);
            break;
    case 4:printf("Enter number 1 \n");
            scanf("%d",&a);
            printf("Enter number 2 \n");
            scanf("%d",&b);
            ans=a-b;
            printf("Difference=%d",ans);
            break;
    default: printf("Invalid choice \n");
    }
    printf("\n Press 1 to continue \n");
    scanf("%d",&c);
    }
    while(c==1);
    return 0;
}
