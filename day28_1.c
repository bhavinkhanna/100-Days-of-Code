// Write a program to print all the prime numbers from 1 to 
//n.

#include <stdio.h>
int main(){
    int n,factors;
    printf("Enter number till which you want to print prime numbers: ");
    scanf("%d", &n);
    for(int i=2;i<=n;i++){
        factors=0;
        for(int j=1;j<=n;j++){
            if(i%j==0){
                factors++;
            }
        }
        if(factors==2){
            printf("%d ",i);
        }
        
    }
    return 0;
}