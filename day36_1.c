#include <stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows:\n");
    scanf("%d",&m);
    printf("Enter the number of columns:\n");
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the elements %d,%d:\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}