#include <stdio.h>
#include <limits.h>
int main(){
    typedef struct student{
        char name[20];
        int roll_no;
        float marks;
    } student;
    student arr[3];
    printf("Enter details of 3 students:\n");
    for(int i=0;i<3;i++){
        scanf("%s",arr[i].name);
        scanf("%d",&arr[i].roll_no);
        scanf("%f",&arr[i].marks);
    }
    printf("\n");
    int max = INT_MIN;
    int index = -1;
    for(int i=0;i<3;i++){
        if(arr[i].marks > max){
            max = arr[i].marks;
            index = i;
        }
    }
    printf("Topper = %s(Marks: %f)\n",arr[index].name,arr[index].marks);
}