// Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of lines:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int a=0;a<i;a++){
            printf(" ");
        }
        for(int j=1;j<=n+1-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}