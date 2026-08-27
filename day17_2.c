#include <stdio.h>
int main(){
    int i,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n==1){
        printf("The number you entered is neither prime nor composite: %d\n", n);
        return 0;
    }
    int a=0;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0){
        printf("The number you entered is a prime number: %d\n", n);
    }
    else{
        printf("The number you entered is a composite number: %d\n", n);
    }
    return 0;
}