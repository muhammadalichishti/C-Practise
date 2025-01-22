// Write a program to check if a number is prime or not.

#include<stdio.h>
#include<math.h>

int main() {
    int checkP;
    printf("Enter a number to check if it is a prime number or not: ");
    scanf("%d", &checkP);

    if (checkP < 2) {
        printf("%d is not Prime number", checkP);
        return 0;
    }

    double scP = sqrt(checkP);
    int isPrime = 1;

    for (int i = 2; i <= scP; i++) {
        if(checkP % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if(isPrime) {
        printf("%d is a prime number", checkP);
    } else {
        printf("%d is not a prime number", checkP);
    }

    return 0;
}