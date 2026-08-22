// Write a program to print numbers from 1 to n.
#include <stdio.h>
int main(){
    int n;
    printf("Enter number till you want numbers to print:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("\n%d",i);
    }
    return 0;
}