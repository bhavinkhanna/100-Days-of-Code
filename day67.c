#include <stdio.h>
int main(){
    int n,k;
    printf("Enter the size of the first array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter fist sorted array:\n ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the size of the second array:\n");
    scanf("%d",&k);
    int arr1[k];
    printf("Enter second sorted array:\n ");
    for(int j=0;j<k;j++){
        scanf("%d",&arr1[j]);
    }
    int c = n+k;
    int arr2[c];
    for(int i=0;i<n;i++){
         arr2[i] = arr[i];
    }
    for(int j=0;j<k;j++){
        arr2[n+j] = arr1[j];
    }

    for(int i=0;i<c-1;i++){
        for(int j=0;j<c-1-i;j++){
            if(arr2[j]>arr2[j+1]){
                int temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }
    }
    printf("Merged and sorted array:\n");
    for(int i=0;i<c;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}