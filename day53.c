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
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum= totalsum+arr[i];
    }
    int leftsum = 0;
    int rightsum;
    int flag =0;
    for(int i=0;i<n;i++){
        rightsum = totalsum - leftsum - arr[i];
        if(leftsum == rightsum){
            printf("The pivot index is: %d\n",i);
            flag = 1;
            break;
        }
        leftsum = leftsum + arr[i];
    }

    
    if(flag == 0){
        printf("-1");
    }
    return 0;
}