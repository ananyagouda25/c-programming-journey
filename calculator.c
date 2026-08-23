/* Program: It is a basic calculator program. */

#include <stdio.h>
int main()
{
    float num1,num2;
    char oper;
    float sum,diff,mul,div,mod;
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("Enter the second number: ");
    scanf("%f",&num2);
    printf("Enter any one of these operators (+,-,/,*): ");
    scanf(" %c",&oper);
    if (oper=='+'){
        sum=num1+num2;
        printf("Sum: %.2f",sum);
    } else if (oper=='-'){
        diff=num1-num2;
        printf("Difference: %.2f",diff);
    } else if (oper=='*'){
        mul=num1*num2;
        printf("Multiplication: %.2f",mul);
    } else if (oper=='/'){
        div=num1/num2;
        printf("Quotient: %.2f",div);
    } else if (oper=='%'){
        mod= (int)num1%(int)num2;
        printf("Modulus: %.2f",mod);
    } else {
        printf("Invalid input");
    } return 0;
}
