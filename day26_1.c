// Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of lines:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int a=1;a<=n-i;a++){
            printf(" ");
        }
        for(int j=6-i;j<=5;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}