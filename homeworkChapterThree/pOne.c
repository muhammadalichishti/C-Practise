// Write a program to check if a given number is Armstrong number or not.

#include<stdio.h>
#include<math.h>

int main() {
    int numOne, numTwo, numThree;

    printf("Please add three numbers one by one to see if it is Armstrong number or not:\n");

    do {
        printf("Enter the first number (0-9): ");
        scanf("%d", &numOne);
    } while (numOne < 0 || numOne > 9);

    do {
        printf("Enter the second number (0-9): ");
        scanf("%d", &numTwo);
    } while(numTwo < 0 || numTwo > 9);

    do {
        printf("Enter the third number (0-9): ");
        scanf("%d", &numThree);
    } while (numThree < 0 || numThree > 9);

    
    int comNum = (numOne * 100) + (numTwo * 10) + numThree;
    int powNum = pow(numOne, 3) + pow(numTwo, 3) + pow(numThree, 3); 

    if (comNum == powNum) {
        printf("Congrats, it is an Armstrong number.");
    } else {
        printf("Sorry it not an Armstrong number.");
    }
}