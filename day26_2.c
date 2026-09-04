// Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *

#include <stdio.h>
int main(){
    int lines;
    for(int i=1;i<=5;i++){
        if(i<=3)
        lines = 2*i-1;
        else
        lines = 2*(5-i)+1;
        for(int j=1;j<=lines;j++){
            printf("*\n");
        }
        printf("\n");
    }
}