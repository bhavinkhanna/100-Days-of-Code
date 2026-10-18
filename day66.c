#include <stdio.h>
int main(){
    int n,k;
    printf("Enter the value of k:\n");
    scanf("%d",&k);
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element %d:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                printf("Indices are %d and %d\n",i,j);
                break;
            }
        }
    }
    return 0;
}