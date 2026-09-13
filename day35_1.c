// Find the second largest element in an array.

#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);

    }
    int max = INT_MIN;
    int smax= INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }

    }
    for(int i=0;i<n;i++){
        if(arr[i]!=max && arr[i]>smax){
            smax=arr[i];
        }
        
        }
        printf("Second Maximum value of the array is %d",smax);
    return 0;

    }
    