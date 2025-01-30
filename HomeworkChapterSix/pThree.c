// Write a program in C to find the maximum number between the two numbers using a pointer.

#include<stdio.h>

void findMax(int a, int b, int *print);

int main() {
    int a, b, print;
    printf("Enter a: ");    
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    findMax(a, b, &print);
    printf("Maximum number is: %d", print);
}

void findMax(int a, int b, int *print) {
    if(a > b) {
        *print = a;
    } else {
        *print = b;
    }
}