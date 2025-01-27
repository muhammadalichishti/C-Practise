// Function to calculate the percentage of a student from marks in science, math and urdu.

#include<stdio.h>

int calAvgMarks(int math, int science, int urdu);

int main () {
    int  final, math, science, urdu;
    printf("Enter the numbers of Math, Science and Urdu respectively\n");
    printf("Enter the numbers of Math: ");
    scanf("%d", &math);
    printf("Enter the numbers of Science: ");
    scanf("%d", &science);
    printf("Enter the numbers of Urdu: ");
    scanf("%d", &urdu);
    printf("Percentage of a student from marks in science, math and urdu is %d percent", calAvgMarks(math, science, urdu));

}


int calAvgMarks(int math, int science, int urdu) {
    return ((math + science + urdu) / 3);
}