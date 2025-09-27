//program in c to display grade of a student based on marks obtained
#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks obtained\n");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100)
    {
        printf("congratulations you have got A grade\n");
    }
    else if(marks>=80 && marks<90)
    {
        printf("congratulations you have got B grade\n");
    }
    else if(marks>=70 && marks<80)
    {
        printf("congratulations you have got C grade\n");
    }
    else if(marks>=60 && marks<70)
    {
        printf("congratulations you have got D grade\n");
    }
    else if(marks>=50 && marks<60)
    {
        printf("congratulations you have got E grade\n");
    }
    else if(marks>=0 && marks<50)
    {
        printf("you have failed\n");
    }
    else
    {
        printf("you have entered invalid marks\n");
    }
    return 0;
}