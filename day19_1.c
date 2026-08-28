#include <stdio.h>
int max(int a,int b){
    if (a>b) return a;
    else return b;
}
int main(){
    int a,b;
    printf("Enter first number:\n ");
    scanf("%d",&a);
    printf("Enter second number:\n ");
    scanf("%d",&b);
    int LCM;
    for (int i = max(a,b); i >=1; i--){
        if(a%i==0 && b%i==0){
            int GCD = i;
            LCM = (a*b)/GCD;
            printf("The LCM of %d and %d is %d",a,b,LCM);
            break;
        }
        
    }

    return 0;
}