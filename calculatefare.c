#include <stdio.h>
/*NAME : VICTOR GICHOMO 
REG NO: CT101/G/26447/25
DESCRIPTION : CALCULATING FARE
DATE :  20/10/2025 */
float calculateFare(float distance) 
{
    return distance * 50;
}

int main()
 {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Total fare = KSh. %.2f\n", calculateFare(distance));
    return 0;
}