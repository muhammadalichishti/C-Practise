#include<stdio.h>

int main() {
    long long checkN; // int data type has a certain range which is +_2,147,483,647 and long long has the way more range than int which is +_9,223,372,036,854,775,807.
    printf("Enter a number to check if it is a natural number or not: ");
    scanf("%lli", &checkN); 

    if (checkN > 0) {
        printf("Congrats, it is a natural number!");
    } else {
        printf("Sorry, it is not a natural number!");
    }
}