#include <stdio.h>
enum roles{
    ADMIN = 1,
    USER,
    GUEST,
};
int main(){
    enum roles r;
    printf("Enter a role (1 for ADMIN, 2 for USER, 3 for GUEST): ");
    scanf("%d",&r);
    if(r<1 || r>3){
        printf("Invalid role\n");
    }
    else{
        switch(r){
            case ADMIN:
                printf("Welcome ADMIN!!\n");
                break;
            case USER:
                printf("Welcome USER!!\n");
                break;
            case GUEST:
                printf("Welcome GUEST!!\n");
                break;
        }
    }
    return 0;
}