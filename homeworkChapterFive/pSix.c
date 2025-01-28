// fibonacci sequence

#include<stdio.h>

int nFiboSeq(int n);

int main(){
    int givenN;
    printf("Please enter a number for which fibonacci sequence is required: ");
    scanf("%d", &givenN);
    printf("Answer is %d", nFiboSeq(givenN));

}

int nFiboSeq( int n){
    if ( n == 0 || n == 1 ) {   
        if ( n == 0) {
            return 0;
        } else {
            return 1;
        }
    }

    int previousValue = nFiboSeq(n - 1) + nFiboSeq(n-2);
    return previousValue;   
}