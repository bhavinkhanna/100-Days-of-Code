// Write a program to reverse a given number.
#include <stdio.h>
int main(){
    int n;
    printf("Enter number that you want to be reversed\n");
    scanf("%d",&n);
    int ld;
    int sum=0;
    int b,c;
    for(int i=1;i<=n;i++){
        ld= n%10; 
        sum=sum+ld;
        n=n/10;
        sum=sum*10;
        
     

    }
    printf("The reversed number is %d\n",sum/10);
    return 0;
}