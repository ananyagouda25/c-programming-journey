/* Program: It calculates the factorial of a given number. */

# include <stdio.h>
int main()
{
    int num,fac,i;
    printf("Enter a number: ");
    scanf("%d", &num);
    fac=1;
    for (i=1;1<=i<=num;i++){
        fac=i*fac;
    }
    printf("Factorial:%d",fac);
    return 0;
}
