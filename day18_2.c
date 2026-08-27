#include <stdio.h>
int min(int a,int b){
    if(a>b) return b;
    else return a;
}
void gcd(int a,int b){
    int hcf;
    for(int i=min(a,b);i>=1;i--){
        hcf = i;
        break;
    }
    printf("The hcf of %d and %d is %d",a,b,hcf);
}    

int main(){
    int a,b;
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
    gcd(a,b);
    

    return 0;
}    


