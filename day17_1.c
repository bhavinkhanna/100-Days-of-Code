#include <stdio.h>
int main(){
    int sum,ld,ld3,temp;
    
    for(int i=1;i<=500;i++){
        sum=0;
        temp=i;
        while(temp!=0){
        ld=temp%10;
        ld3=ld*ld*ld;
        sum=sum+ld3;
        temp=temp/10;
        }
        if(sum==i){
            printf("The amstrong number is %d\n",i);
            

        }
        
    }
    return 0;
}