#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enetr the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int found = 0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                found = 1;
                
            }
        }
        
        if(found==0){
            printf("Missing number is: %d\n",i);
        }
        found = 0;
    
        }
    }
