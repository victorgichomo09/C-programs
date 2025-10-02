#include <stdio.h>
/* NAME: VICTOR GICHOMO 
REG NO :CT101/G/26447/25
DATE: 29/9/2025 
DESCRIPTION : EXAMS ELIGIBILITY */
int main() 
{

    float attendance;
    float average;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
    
    printf("Enter average marks: ");
    scanf("%f", &average);
    
    if (attendance >= 75 && average >= 40) {
        printf("Eligible for final exam.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}