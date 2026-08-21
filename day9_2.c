// Write a program that accepts a percentage (0-100) and assigns 
// a grade based on the following criteria: 
// 90-100: Grade A 
// 80-89: Grade B 
// 70-79: Grade C 
// 60-69: Grade D 
// below 60: Grade F.
#include <stdio.h>
int main(){
    float english,physics,chemistry,maths,percentage;
    printf("Enter your english marks:\n");
    scanf("%f",&english);
     printf("Enter your physics marks:\n");
    scanf("%f",&physics);
     printf("Enter your chemistry marks:\n");
    scanf("%f",&chemistry);
     printf("Enter your maths marks:\n");
    scanf("%f",&maths);
    percentage= (english+physics+chemistry+maths)*100/400;
    if(percentage>=90 && percentage<=100)
        printf("Congratulations you have got grade A");
    else if(percentage>=80 && percentage<=89)
        printf("Congratulations you have got grade B");
    else if(percentage>=70 && percentage<=79)
        printf("Congratulations you have got grade C");
    else if(percentage>=60 && percentage<=69)
        printf("Congratulations you have got grade D");
    else
        printf("You have got grade F");    

    return 0;
}