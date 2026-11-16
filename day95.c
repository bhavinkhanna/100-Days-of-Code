#include <stdio.h>
#include <limits.h>
struct student{
    char name[20];
    int age;
    float score;
};
int main(){
    struct student arr[3];
    for(int i=0;i<3;i++){
        printf("Enter name, age and score of student %d: ", i+1);
        scanf("%s %d %f", arr[i].name, &arr[i].age, &arr[i].score);
    }
    float max = INT_MIN;
    int index = -1;
    for(int i=0;i<3;i++){
        if(arr[i].score > max){
            max = arr[i].score;
            index = i;
        }
    }
    printf("Student details with highest score:\n");
    printf("Name : %s\n",arr[index].name);
    printf("Age : %d\n",arr[index].age);
    printf("Score : %.2f\n",arr[index].score);
    return 0;
}