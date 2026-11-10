#include <stdio.h>
enum values{
    SUCCESS = 0,
    FAILURE,
    TIMEOUT,
};
int main(){
    enum values v;
    for(int i = SUCCESS; i<= TIMEOUT; i++){
        switch(i){
            case SUCCESS:
                printf("SUCCESS = %d ",i);
                break;
            case FAILURE:
                printf("FAILURE = %d ",i);
                break;
            case TIMEOUT:
                printf("TIMEOUT = %d ",i);
                break;
        }
    }
    return 0;
}