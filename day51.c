// Write a Program to take a sorted array(say nums[]) and 
// an integer (say target) as inputs. The elements in 
// the sorted array might be repeated. You need to print 
// the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>
int main(){
    int n;
    int x;
    printf("Enter the size of the arrayz:\n");
    scanf("%d",&n);
    printf("Enter a integer:\n");
    scanf("%d",&x);
    int arr[n];
    int count = 1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==x){
            count = 0;
            printf("%d ",i);
        }
    }
    if(count==1){
        printf("-1,-1");
    }


    return 0;
}