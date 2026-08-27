#include <stdio.h>
int main(){
    int n;
    printf("Enter the number for which you want the factors of:\n");
    scanf("%d",&n);
    if(n<=1){
        printf("No positive factors found for %d\n",n);
    }
    for(int i=2;i<=n-1;i++){
    if (n % i == 0) {
        printf("The factors of %d are %d\n",n,i);
       }
    }
    return 0;
}