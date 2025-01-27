#include<stdio.h> // preprocessor directive

int nFactorial(int a); // function prototype

int main() { // main function
    int givenN;
    int returnValue;
    printf("Enter the number for which factorial is required: ");
    scanf("%d", &givenN);
    returnValue = nFactorial(givenN); // calling nFactorial funtion with the value taken from the user
    printf("The factorial of %d! is %d", givenN, returnValue);
}

int nFactorial(int a){ // Took the copy of the value from the main function and now doing its thing.
    if(a == 1) { 
        return 1;
    }

    return nFactorial(a - 1) * a; 
}

