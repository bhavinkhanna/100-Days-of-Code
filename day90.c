#include <stdio.h>
enum gender{
    Male,
    Female,
};
struct person{
    char name[20];
    enum gender g;
};
int main(){
    struct person p;
    printf("Enter name: ");
    scanf("%s", p.name);
    printf("Enter gender (0 for Male, 1 for Female): ");
    scanf("%d",&p.g);
    if(p.g<0 || p.g>1){
        printf("Invalid gender\n");
    }
    else{
        switch(p.g){
            case Male:
                printf("Gender: Male\n");
                break;
            case Female:
                printf("Gender: Female\n");
                break;
        }
    }
}