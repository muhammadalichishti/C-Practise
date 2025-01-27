// Sum of first N natural Numbers

#include<stdio.h>

int sumNaturalNumbers(int n);  // function - sum of n natural numbers

int main () {
    int givenN;
    int returnValueOfFunction;
    printf("Enter the number whome Natural Number is required: ");   
    scanf("%d", &givenN);
    returnValueOfFunction = sumNaturalNumbers(givenN);
    printf("The sum of all natural numbers till %d: %d", givenN, returnValueOfFunction);
}

int sumNaturalNumbers(int n) {
    if (n == 1) {
        return 1;
    }

    int sumUptoPrevious = sumNaturalNumbers(n - 1); // sum of all natural number except the last.
    int sumIncludingN = sumUptoPrevious + n;  // Sum of all natural numbers including the last nutural number as well.
    
    return sumIncludingN;
}