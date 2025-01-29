// Write a function to find square root of a number.

#include<stdio.h>
#include<math.h>

float squareRoot(int n);

int main() {
    float givenN, squareRootN;
    printf("Enter the number for which square root is required: ");
    scanf("%f", &givenN);
    squareRootN = squareRoot(givenN);
    printf("The square root of %.3f is %.3f", givenN, squareRootN);
}

float squareRoot(int n) {
    return sqrt(n);
}