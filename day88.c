#include <stdio.h>
enum colors{
    RED = 0,
    YELLOW,
    GREEN,
};
int main(){
    enum colors c;
    for(int i = RED; i<= GREEN; i++){
        switch(i){
            case RED:
                printf("RED = %d\n",i);
                break;
            case YELLOW:
                printf("YELLOW = %d\n",i);
                break;
            case GREEN:
                printf("GREEN = %d\n",i);
                break;
        }
    }
    return 0;
}