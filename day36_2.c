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
            printf("Enter the elements of matrix %d,%d:\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }

    }
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum = sum + arr[i][j];
        }
    }
    printf("The sum of all the elements of the matrix is: %d\n",sum);

    return 0;
}