// Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    int ld,product=1;
    while(a!=0){
        ld = a%10;
        if(ld%2==0){
        a=a/10;
        continue;
        }
        else
        product = product*ld;
        a = a/10;

    }
    printf("The product of odd digits is %d",product);
    return 0;
}