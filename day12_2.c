// Write a program to calculate electricity bill based on 
// units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit
#include <stdio.h>
int main(){
    int n;
    printf("Number of units burned");
    scanf("%d",&n);
    if(n>=0 && n<=100)
        printf("Your electricity bill is ₹%d",n*5);
    else if(n>=101 && n<=200)
        printf("Your electricity bill is ₹%d",n*7);
    else if(n>=201 && n<=200)
        printf("Your electricity bill is ₹%d",n*10);
    else
        printf("You electricity bill is ₹%d ",n*12);    

    return 0;
}