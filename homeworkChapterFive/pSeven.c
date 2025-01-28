// Write a function to find sum of digits of a number.

#include<stdio.h>

int findDigitSum(int digits);

int main() {
    int givenN;
    printf("Enter a number to find sum of its digits: ");
    scanf("%d", &givenN);
    printf("The of digits of the given number is %d", findDigitSum(givenN));
}

int findDigitSum(int digits) {
    char str[10]; // Declared a character variable str with 10 characters to hold converted intergers as string.
    int digitsToString = digits;
    sprintf(str, "%i", digitsToString); // Here, the sprintf is converting digits to string and saving in str. 

    
    int sum = 0; 
    for (int i = 0; str[i] != '\0'; i++) { // Loop changing each character to seperate integer again.
        int digit = str[i] - '0';
        sum = sum + digit; // Adding the converted integers.
    }

    return sum; // Returing the value to calling function.
}