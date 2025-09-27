//program in c to swap two integers without using 3rd variable
#include<stdio.h>
int main()
{
int a,b;
//taking input
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
printf("before swapping a=%d b=%d\n",a,b);
//swapping
a=a+b;
b=a-b;
a=a-b;
printf("after swapping a=%d b=%d\n",a,b);
return 0;
}


