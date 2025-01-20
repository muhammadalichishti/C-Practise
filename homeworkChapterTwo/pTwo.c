// Write a program to check if given character is digit or not.

#include<stdio.h>

int main() {
    char checkDigit;
    printf("Please enter a character to check if it is a digit or not: ");
    scanf("%c", &checkDigit);
    
    if (checkDigit >= '0' && checkDigit <= '9') {
        printf("Congrats, It is a digit!");
    } else {
        printf("Oh, no!\nIt is not a digit");
    }

}

