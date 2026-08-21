// Write a program to find profit or loss percentage 
// given cost price and selling price.
#include <stdio.h>
int main(){
    float sp,cp,profit,profitper,loss,lossper;
    printf("Enter selling price:\n");
    scanf("%f",&sp);
    printf("Enter cost price:\n");
    scanf("%f",&cp);
    if(sp>cp){
    profit= sp-cp;
    profitper= (profit*100)/cp;
    printf("The profit percentage is %f",profitper);
    }
    else{
    loss= cp-sp;
    lossper= (loss*100)/cp;
    printf("The loss percentage is %f",lossper);
    }
    
    return 0;
}