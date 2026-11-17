#include <stdio.h>
#include <string.h>
int main(){
    struct employee{
        char name[20];
        int id;
    };
    struct joining{
        struct employee e;
        int day;
        int month;
        int year;
    };
    struct joining j;
    printf("Enter employee name: \n");
    scanf("%s",j.e.name);
    printf("Enter employee id: \n");
    scanf("%d",&j.e.id);
    printf("Enter joining date: \n");
    scanf("%d %d %d",&j.day,&j.month,&j.year);
    printf("\n");
    printf("Employee name: %s\n",j.e.name);
    printf("Employee id: %d\n",j.e.id);
    printf("Joining date: %d %d %d\n",j.day,j.month,j.year);
    return 0;
}