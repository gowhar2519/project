//program in c to swap two integers using 3rd variable
#include<stdio.h>
int main()
{
int a,b,temp;
//taking input
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
printf("before swapping a=%d b=%d\n",a,b);
//swapping
temp=a;
a=b;
b=temp;
printf("after swapping a=%d b=%d\n",a,b);
return 0;
}

