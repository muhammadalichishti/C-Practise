// Write comments for programs a & b.

// Program One (a)
#include<stdio.h> // Preprocessor Directive

int main() { // Main function
    float length; // Save the value of length
    float width; // Save the value of width
    printf("What is the length of the rectangle: "); // Give instructions to the user
    scanf("%f", &length); // Save the input given by the user to the length variable
    printf("What is the width of the rectangle: "); // Give instructions to the user
    scanf("%f", &width); // Save the input given by the user to the length variable
    printf("The perimeter of the rectange is %f", (length + width) * 2); // Show the final result to the user
    return 0; // Execution end
}


// Program One (b)
#include<stdio.h> // Preprocessor Directive

int main() { // Main Function
    float n; // Variable for the value of given by the user
    printf("Please add a number: "); // Ask the value
    scanf("%f", &n); // Takes the value from the user and assign it to the variable declared in the start
    printf("The cube of the given number is %f", n*n*n); // Performs the function and give the final result
    return 0; // Execution end
}