// Write a program to print the smallest number of two.

#include<stdio.h>

int main() {
    float numOne;
    float numTwo;
    printf("Enter the two numbers below in order to get the smallest number\n");
    printf("Enter the first number: ");
    scanf("%f", &numOne);
    printf("Enter the Second number: ");
    scanf("%f", &numTwo);

    if (numOne < numTwo) {
        printf("Smallest number of two is %2.f", numOne);
    } else {
        printf("Smallest number of two is %2.f", numTwo);
    }
}