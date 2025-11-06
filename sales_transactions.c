/* NAME : VICTOR GICHOMO 
REG NO : CT101/26447/25
DESCRIPTION : SALES TRANSACTIONS 
DATE : 5/11/2025 */
#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "sales.txt"

int main() {
    char item[50];
    int quantity;
    float price;

    FILE *file = fopen(FILE_NAME, "r");

    if (!file) {
        printf("Error: Could not open file '%s'.\n", FILE_NAME);
        return 1;
    }

    printf("\n--- Supermarket Sales Summary ---\n");
    printf("%-15s %-10s %-10s %-15s\n", "Item", "Quantity", "Price", "Total Sales");

    while (fscanf(file, "%s %d %f", item, &quantity, &price) == 3) {
        float total = quantity * price;
        printf("%-15s %-10d %-10.2f %-15.2f\n", item, quantity, price, total);
    }

    fclose(file);
    return 0;
}