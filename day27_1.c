// Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *
#include <stdio.h>
int main(){
    int lines;
    for(int i=0;i<=8;i++){
        if(i<=4)
        lines = 2*i+1;
        else
        lines = 2*(8-i)+1;
        for(int j=0;j<lines;j++){
            printf("*");
        }
        printf("\n");

    }
}