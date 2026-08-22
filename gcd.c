/* This program finds the GCD (Greatest Common Divisor) of two numbers. */
#include <stdio.h>
int main()
{
    int a,b,t;
    printf("Enter the two numbers seperated by a space: ");
    scanf("%d %d",&a,&b);
    printf("GCD of the two numbers %d and %d is\n",a,b);
/* Euclidean algorithm*/
    if (a<b){
        t=a;
        a=b;
        b=t;
    }
    while (!(b==0)){
        t=a;
        a=b;
        b=t%b;
    }
    printf("%d\n",a); 
    return 0;
}
