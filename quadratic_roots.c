// Program: It calculates the roots of a quadratic equation.

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    float x1,x2;
    printf("A quadratic equation is written in the form: ax^2+bx+c.\n");
    printf("Enter the values of a,b and c separated by spaces to find the roots.\n");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    if (d>0){
        printf("Roots are real and unequal.\n");
        x1=(-b+sqrt(d))/(2.0*a);
        x2=(-b-sqrt(d))/(2.0*a);
        printf("Roots are %.2f and %.2f.",x1,x2); }
    else if (d==0){
        printf("Roots are real and equal.\n");
        x1=-b/(2.0*a);
        x2=x1;
        printf("Roots are %.2f and %.2f",x1,x2); }
    else{
        printf("Roots are imaginary.\n");
        x1=-b/(2.0*a);
        x2=sqrt(-d)/(2.0*a);
        printf("Roots are %.2f+i%.2f and %.2f-i%.2f.",x1,x2,x1,x2); }
    return 0;
}
