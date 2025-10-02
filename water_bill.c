#include <stdio.h>
/* NAME :VICTOR GICHOMO 
REG NO : CT101/G/26447/25
DATE: 28/9/2025
DESCRIPTION:WATER BILL */
int main() {
    int units;
    float bill = 0;

    printf("Enter water units consumed: ");
    scanf("%d", &units);

    if (units <= 0) {
        printf("Invalid input. Units must be greater than 0.\n");
    } else if (units <= 30) {
        bill = units * 20;
    } else if (units <= 60) {
    
        bill = (30 * 20) + ((units - 30) * 25);
    } else {
        
        bill = (30 * 20) + (30 * 25) + ((units - 60) * 30);
    }
    
    printf("Total bill: %.2f Ksh\n", bill);

    return 0;
}