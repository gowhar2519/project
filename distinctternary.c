//program in c to find larger number
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the two numbers\n");
    scanf("%d%d",&x,&y);
    z = x>y? x:y ;
    printf("%d is the larger number\n",z);
return 0;
}