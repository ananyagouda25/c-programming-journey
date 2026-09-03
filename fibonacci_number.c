// Program: Fibonacci number sequence upto n numbers.

#include <stdio.h>
int main(){
int prev,curr,tot,n;
tot=0;prev=0;curr=1;
scanf("%d",&n;
printf("%d\t%d\t",prev,curr);
for (int a=0;a<(n-2);a++){
    tot=prev+curr;
    prev=curr;
    curr=tot;
    printf("%d\t",tot);}
return 0;
}
