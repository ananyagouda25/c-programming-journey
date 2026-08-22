/* Program: It calculates the simple interest. */

#include <stdio.h>
int main()
{
    float principal, rate, interest, time;
    printf("This program calculates the simple interest.\n");
    printf("Enter the principal amount:\n");
    scanf("%f",&principal);
    printf("Enter the rate:\n");
    scanf("%f",&rate);
    printf("Enter the time:\n");
    scanf("%f",&time);
    interest= (rate*time*principal)/100;
    printf("Your interest on the given amount of %.2f at %.2f rate, for %.2f years is %.2f.", principal,rate,time,interest);
    return 0;
}
