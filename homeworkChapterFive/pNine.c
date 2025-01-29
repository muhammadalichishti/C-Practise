#include<stdio.h>

void temp(float temp);

int main () {
    float givenTemp, intensity; 

    do {

        printf("Enter the current temperature to determine the living conditions: ");
        scanf("%f", &givenTemp);

        } while (givenTemp < -273.15 || givenTemp > 273.15);

        temp(givenTemp);
}

void temp(float temp) {
    if(temp > 22) {
        printf("It is hot out there!");
    } else if (temp >= 20 && temp <= 22) {
        printf("Perfect temperature for living!");
    } else {
        printf("It is cold!");
    }
}