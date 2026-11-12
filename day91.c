#include <stdio.h>
int main(){
    typedef struct student{
        char name[20];
        int roll_no;
        float marks;
    
    }student;
    student s1;
    printf("Enter name: ");
    scanf("%[^\n]s",s1.name);
    printf("Enter roll number: ");
    scanf("%d",&s1.roll_no);
    printf("Enter marks: ");
    scanf("%f",&s1.marks);
    printf("\n");
    printf("Name: %s\n",s1.name);
    printf("Roll number: %d\n",s1.roll_no);
    printf("Marks: %.2f\n",s1.marks);
    return 0;
}