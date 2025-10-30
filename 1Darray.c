#include <stdio.h>
/* NAME : VICTOR GICHOMO 
REG NO : CT101/G/26447/25
DESCRIPTION : 1D ARAY
DATE: 29/10/2025 */
int main()
 {
    float revenue[7], total = 0, average;
    int i;

    printf("=== 1D ARRAY: Weekly Revenue Tracker ===\n");

    for (i = 0; i < 7; i++) 
    {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;

    printf("\nTotal Weekly Revenue = %.2f\n", total);
    printf("Average Daily Revenue = %.2f\n", average);

    return 0;
}