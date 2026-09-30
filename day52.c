#include <stdio.h>
#include <limits.h>
int main(){
    int n,x;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter a integer:\n");
    scanf("%d",&x);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int min = INT_MAX;
    int index=0;
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]<min && arr[i]>=x){
            min = arr[i];
            index = i;
            flag = 1;
        }
    }
    if(flag==0){
        printf("-1");
    }
    if(flag==1)
    printf("The smallest element of array greater than %d is %d and its index is %d",x,min,index);
    

    return 0;
}