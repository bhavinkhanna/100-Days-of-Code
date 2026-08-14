#include <stdio.h>
int main(){
    int n;
    printf("Enter the number till you want to sum:\n");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("The sum of numbers is %d",sum);
    return 0;
}