//program in to check whether the number is even or odd
#include<stdio.h>
int main()
{
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("%d is even",x);
    }
    else
    {
        printf("%d is odd",x);
    }
    return 0;
}