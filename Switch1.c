//program in c to add two numbers if the user enters1,subtract if the user enters 2,multiply if the user enters 3
#include<stdio.h>
int main()
{
    int x,y,z,i;
    printf("enter the two numbers\n");
    scanf("%d%d",&x,&y);
    printf("enter 1 for addition,2 for subtraction,3 for multiplication\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
            z=x+y;
            printf("the sum is %d\n",z);
            break;
        case 2:
            z=x-y;
            printf("the difference is %d\n",z);
            break;
        case 3:
            z=x*y;
            printf("the product is %d\n",z);
            break;
        default:
            printf("you have entered an incorrect option\n");
    }
    return 0;
}