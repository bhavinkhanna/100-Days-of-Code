#include <stdio.h>
struct student{
    char name[20];
    int roll_no;
    float marks;
};
void display(struct student s){
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}
int main(){
    struct student s1;
    printf("Enter your name:");
    scanf("%s", s1.name);
    printf("Enter your roll number:");
    scanf("%d", &s1.roll_no);
    printf("Enter your marks:");
    scanf("%f", &s1.marks);
    printf("\n");
    display(s1);
    return 0;
}