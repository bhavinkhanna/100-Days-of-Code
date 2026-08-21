// Write a program to calculate library fine based on late 
// days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days days late: ₹6/day 
// More than 30 days: Membership Cancelled.

#include <stdio.h>
int main(){
    int c;
    printf("Enter for many days you were late:\n");
    scanf("%d",&c);
    if(c>=0 && c<=5)
        printf("fine %d",c*2);
    else if(c>=6 && c<=10)
        printf("fine %d",c*4);
    else if(c>=11 && c<=20)
        printf("fine %d",c*6);
    else
        printf("Your membership cancelled");            
    return 0;
}