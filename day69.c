#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("The repeated number is: %d\n",arr[i]);
                count = 1;
            }
        }
    }
    if(count == 0){
        printf("No repeated numbers found.\n");
    }
    return 0;
}