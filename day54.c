#include <stdio.h>
int main(){
    int n;
    printf("Enter a integer:\n");
    scanf("%d",&n);
    
    int totalsum=0;
    for(int i=0;i<=n;i++){
        totalsum= totalsum+i;
    }
    int leftsum =0;
    int found =0;
    
    for(int j=0;j<=n;j++){
        leftsum = leftsum + j;
        int rightsum =  totalsum - leftsum + j;
        if(leftsum==rightsum){
            printf("Pivot integer is %d\n",j);
            found =1;
            break;
        }

        
    }
    if(found==0){
        printf("-1\n");
    }
    return 0;
}