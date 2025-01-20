// Write a program to calculate perimeter of rectangle. Take sides, a & b, from the user.
#include<stdio.h>

int main() {
    float length;
    float width; 
    printf("What is the length of the rectangle: ");
    scanf("%f", &length);
    printf("What is the width of the rectangle: ");
    scanf("%f", &width); 
    printf("The perimeter of the rectange is %f", (length + width) * 2);
    return 0;
}