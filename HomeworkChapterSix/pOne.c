// Swap two numbers, a and b.

#include<stdio.h>

int swapf(int *a, int *b);

int main() {
    int num1, num2;
    printf("Enter two numbers that you want to swap\n");
    printf("Enter the value of a: ");
    scanf("%d", &num1);
    printf("Enter the value of b: ");
    scanf("%d", &num2);
    
    int swaped = swapf(&num1, &num2);

    printf("a = %d, b = %d", num1, num2);
}

int swapf(int *a, int *b) {
    int temp = *a;
    *a = *b; 
    *b = temp;
}