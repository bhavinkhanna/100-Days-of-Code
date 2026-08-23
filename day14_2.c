// Write a program to print the product of 
// even numbers from 1 to n.

#include <stdio.h>
int main(){
    int a;
    printf("Enter the number till you want even numbers to be multiplied:\n");
    scanf("%d",&a);
    int product=1;
    int even;
    for(int i=1;i<=a-2;i++){
        
        even=2*i;
        product=product*even;
        
    }
    printf("%d",product);
    return 0;
}