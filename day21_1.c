// Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int number = n;
    int ld,count=0,fd,place,middle,swap;
    ld = number%10;
    while(n!=0){
    fd = n%10;    
    
    n = n/10;
    
    count = count + 1;
    
    
    }
    place = pow(10,count -1);
    middle = (number % place)/10;
    swap = ld*place + middle*10 + fd;


    printf("The number after swapping of first and last digit is %d",swap);
    return 0;
}