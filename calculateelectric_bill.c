#include <stdio.h>
/*NAME :VICTOR GICHOMO 
REG NO :CT101/G/26447/25
DESCRIPTION : CALCULATING ELECTRIC BILL 
DATE : 20/10/2025 */
J
float calculateElectricBill(int units)
 {
    float bill = 0;

    if (units <= 100) {
        bill = units * 10;
    } 
    else if (units <= 200) {
        bill = (100 * 10) + (units - 100) * 15;
    } 
    else {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }

    return bill;
}

int main()
 {
    int units;
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    printf("Total bill = KSh. %.2f\n", calculateElectricBill(units));
    return 0;
}