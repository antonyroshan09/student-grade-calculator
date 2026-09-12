#include <stdio.h>

int main() {
    float mark1, mark2, mark3;
    float total, average;

    printf("Enter marks for 3 subjects: ");
    scanf("%f %f %f", &mark1, &mark2, &mark3);

    total = mark1 + mark2 + mark3;
    average = total / 3;

    printf("\nTotal = %.2f", total);
    printf("\nAverage = %.2f", average);

    if (average >= 90)
        printf("\nGrade = A");
    else if (average >= 75)
        printf("\nGrade = B");
    else if (average >= 60)
        printf("\nGrade = C");
    else if (average >= 50)
        printf("\nGrade = D");
    else
        printf("\nGrade = F");

    return 0;
}