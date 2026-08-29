// Write a program to find the 1’s complement of a 
// binary number and print it.

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number for compliment of its binary representation:\n");
    scanf("%d",&n);
    int rem, binary=0,place=1;
    int ld,sum=0;
    while(n>0){
        rem=n%2;
        if(rem==0)
        rem=1;
        else
        rem=0;
        binary = binary+rem*place;
        place=place*10;
        n=n/2;
        
    }
    printf("Compliment of binary representation of %d is %d",n,binary);

    return 0;
}