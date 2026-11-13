#include <stdio.h>
int main(){
    typedef struct student{
        char name[20];
        int roll_no;
        float marks;
    } student;
    student arr[5];
    printf("Enter details of 5 students:\n");
    for(int i=0;i<5;i++){
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].roll_no);
        scanf("%f",&arr[i].marks);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("Name: %s\n",arr[i].name);
        printf("Roll number: %d\n",arr[i].roll_no);
        printf("Marks: %.2f\n",arr[i].marks);
        printf("\n");
    }
    return 0;
}