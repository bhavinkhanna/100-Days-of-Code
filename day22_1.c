// Write a program to check if a number is a strong number.
 #include <stdio.h>
int factorial(int n){
    if(n==0 || n==1) return 1;
    else return n*factorial(n-1);
}
int ld;
int strongnum(int n){
    int fact=0;
    while(n!=0){
        ld = n%10;
        n = n/10;
        fact = fact + factorial(ld);
        


    }
    return fact;
}

    int main(){
        int n,strongnumber;
        printf("Enter a number to check for strong number:\n");
        scanf("%d",&n);
        int original = n;
        strongnumber = strongnum(n);
        if(original==strongnumber)
        printf("The entered number %d is a strong number",original);
        else
        printf("The entered number %d is not a strong number",original);
    }
