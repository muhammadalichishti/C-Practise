// Write a function to calculate sum product and average of two numbers. Print that calculations in the main function.

#include<stdio.h>

int calf(int a, int b, int *sum, int *prod, int *avg);

int main() {
    int a, b, sum, prod, avg;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    calf(a, b, &sum, &prod, &avg);

    printf("Sum: %d\nProduct: %d\nAverage: %d", sum, prod, avg);
}

int calf(int a, int b, int *sum, int *prod, int *avg) {
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}