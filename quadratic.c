//program in c to find the roots of quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2,D;
    printf("enter the values of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
        D=b*b-4*a*c;
        if(D>0)
        {
        r1=(-b+sqrt(D))/(2*a);
        r2=(-b-sqrt(D))/(2*a);
        printf("the equation has two real roots=%f and%f",r1,r2);
        }
        if(D==0)
        {
        r1=-b/(2*a);
        printf("the equation has only one root=%f",r1);
        }
        if(D<0)
        {
        printf("the equation has imaginary roots");
        }

}