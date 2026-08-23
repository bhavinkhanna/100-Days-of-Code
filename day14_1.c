//Write a program to print the sum of 
// the first n odd numbers.
#include <stdio.h>
int main(){
    int a;
    printf("Enter the number till you want odd numbers to be added:\n");
    scanf("%d",&a);
    int sum=0;
    int odd;
    for(int i=1;i<=a;i++){
        
        odd=2*i-1;
        sum=sum+odd;
        
    }
    printf("%d",sum);
    return 0;
}