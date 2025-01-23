// Write a program to calculate the following
// Area of Square
// Area of Circle
// Area of Rectangle

#include<stdio.h>
#include<math.h>

int areaOfSquare(int a);
int areaOfCircle(int a);
int areaOfRectangle(int a, int b);

int main () {
    char a;
    int givenValueOne;
    int givenValueTwo;
    printf("What do you want to find?\nEnter s in order to find area of square\nEnter c in order to find area of Circle\nEnter r in order to find area of Rectangle\n Please Enter Here: ");
    scanf("%c", &a);
    if(a == 's') {
        printf("Enter the value of a side of a circle to find its area: ");
        scanf("%d", &givenValueOne);
        int s = areaOfSquare(givenValueOne);
        printf("Area of the Circle is %d", s);
    } else if (a == 'c') {
        printf("Enter the value of radius of circle to find its area: ");
        scanf("%d", &givenValueOne);
        int c = areaOfCircle(givenValueOne);
        printf("The area of circle is %d", c);
    } else if (a == 'r') {
        printf("Enter the value of length and width of rectangle to find its area: \n");
        printf("Length: ");
        scanf("%d", &givenValueOne);
        printf("Width: ");
        scanf("%d", &givenValueTwo);
        int r = areaOfRectangle(givenValueOne, givenValueTwo);
        printf("The area of Rectangle is %d", r);
    }
}

int areaOfSquare(int a) {
    return a * a;
}

int areaOfCircle(int a) {
    return (22/7) * pow(a, 2);
}

int areaOfRectangle(int a, int b){
    return a * b;
}