#include <stdio.h>
enum numbers{
    A = 10,
    B,
    C,

};
int main(){
    enum numbers num;
    for(num = A; num<=C; num++){
        switch(num){
            case A:
                printf("A = %d\n",num);
                break;
            case B:
                printf("B = %d\n",num);
                break;
            case C:
                printf("C = %d\n",num);
                break;
        }
    }
    return 0;
}