// Convert Celsius Temperature into Fehranheit

#include<stdio.h>

float calculateTemp(float celsiusTemp);

int main () {
    float givenValue;
    printf("Enter the temp in celsius to convent into fahrenheit: ");
    scanf("%f", &givenValue);
    float celsiusTemp = calculateTemp(givenValue);
    printf("The %f celsius is %f fahrenheit", givenValue, celsiusTemp);
    return 0;
}

float calculateTemp(float celsiusTemp) {
    return celsiusTemp * (9.0/5.0) + 32;
}