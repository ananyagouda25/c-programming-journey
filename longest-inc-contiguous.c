/* Program: Longest Increasing Contiguous Subsequence.
Description:
Finds the length of the longest increasing contiguous subsequence
in a sequence of integers terminated by -1. */

#include <stdio.h>
int main()
{
    int p,c,len=0,maxlen=0;
    printf("Enter a number: ");
    scanf("%d",&p);
    if (p!=-1){
        printf("Enter number: ");
        scanf("%d",&c);
        len=1;
        maxlen=1;
        while (c!=-1){
        printf("Enter number: ");
        scanf("%d",&c);  
        if(p<c){
            len++;
        } else {
            if (maxlen<len){
                maxlen=len;
            }
            len=1;
        p=c;
        }  
        if (maxlen<len){
            maxlen=len;
        }    
        }
    }
    printf("The longest increasing contiguous subsequence: %d\n.",maxlen);
    return 0;
}
