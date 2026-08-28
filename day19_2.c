#include <stdio.h>
int main(){
    int n;
    printf("Enter number for which you want the sum of digits:\n");
    scanf("%d",&n);
    int ld,sum=0;
    while(n!=0){
        ld = n % 10;
        sum = sum+ld;
        n = n/10;
    }
    printf("The sum of digits of %d is %d",n,sum);
    return 0;
}