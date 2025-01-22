// Write a program to print prime numbers in a range.

#include<stdio.h>
#include<math.h>

int main() {
    
    for(int i = 1; i <= 100; i++) {
        
        int isPrime = 1;
        double squareI = sqrt(i);

        if(i < 2) {
            // printf("%d is not a prime number\n", i);
            continue;
        }
        
        for (int j = 2; j <= squareI; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime) {
            printf("%d is a prime number\n", i);
        } 
        
        // else {
        //     printf("%d is not a prime number\n", i);
        // }
        
    }

}