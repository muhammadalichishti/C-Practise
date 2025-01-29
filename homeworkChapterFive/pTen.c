// Make your own pow function.

#include<stdio.h>

int cPowF(int n, int p);

int main() {
    int givenN, givenP, sol;
    printf("Enter the number and its power following for which the calculation is required\n");
    printf("Enter the number: ");
    scanf("%d", &givenN);
    printf("Enter the power: ");
    scanf("%d", &givenP);
    sol = cPowF(givenN, givenP);
    printf("The solution is: %d", sol);
}

int cPowF(int n, int p) {
    if (p == 0) {
        return 1;
    }

    int powN = cPowF(n, p - 1);
    int pow = powN * n;
    return pow;
}