// Write a program to print the average of 3 numbers.
#include<stdio.h>

int main() {
    float numOne, numTwo, numThree, avg;
    printf("In order to get average of three numbers, please enter them one by one.\n");
    printf("Enter the first number: ");
    scanf("%f", &numOne);
    printf("Enter the second number: ");
    scanf("%f", &numTwo);
    printf("Enter number third number: ");
    scanf("%f", &numThree);
    avg = (numOne + numTwo + numThree) / 3;
    printf("Average of the given numbers is %2.f", avg);
    return 0;
}