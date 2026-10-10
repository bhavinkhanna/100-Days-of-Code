#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
   
    int arr1[n];
    for(int i=0;i<n;i++){
         arr1[i]=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                arr1[i]=arr1[i]*arr[j];
            }
        }
        
    
    
    
    
    
}
for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
}