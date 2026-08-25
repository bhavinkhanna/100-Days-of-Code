// Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number to be converted into its binary equivalent:\n");
    scanf("%d",&n);
    int binary=0; int rem; int place=1;
    while(n>0){
    rem = n%2;
    binary = binary + rem*place;
    place = place*10;
    n = n/2;
        
    }
    printf("Binary = %d",binary);
    return 0;
}