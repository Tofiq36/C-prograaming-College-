#include<stdio.h>
int main(){
    int x, y, add, subtract, multiply, remainder;
    printf("Enter two numbers for addition: ");
    scanf("%d%d", &x,&y);
    add = x + y;
    printf("Sum of two numbers is %d\n", add);
    printf("Enter two numbers for subtraction: ");
    scanf("%d%d", &x,&y);
    subtract = x - y;
    printf("Subtraction of two numbers is %d\n", subtract);
    printf("Enter two numbers for multiply: ");
    scanf("%d%d", &x,&y);
    multiply = x * y;
    printf("Multiplication of two numbers is %d\n", multiply);
    printf("Enter two numbers for remainder: ");
    scanf("%d%d", &x,&y);
    remainder = x % y;
    printf("Remainder of two numbers is %d\n", remainder);
    return 0;
    
}