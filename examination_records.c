/* NAME: VICTOR GICHOMO 
REG NO : CT101/G/26447/25
DESCRIPTION : STUDENT RECORD
DATE : 5/11/2025 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 256
#define FILE_NAME "results.csv"

int main() {
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char line[MAX_LINE];
    printf("\n--- Student Results ---\n");
    printf("%-10s %-10s %-6s %-6s %-6s %-7s\n", "Name", "Reg No", "U1", "U2", "U3", "Avg");

    while (fgets(line, MAX_LINE, file)) {
        char name[50], reg[20];
        int u1, u2, u3;
        float avg;

        // Parse CSV line
        sscanf(line, "%[^,],%[^,],%d,%d,%d", name, reg, &u1, &u2, &u3);
        avg = (u1 + u2 + u3) / 3.0;

        // Display formatted output
        printf("%-10s %-10s %-6d %-6d %-6d %-7.2f\n", name, reg, u1, u2, u3, avg);
    }

    fclose(file);
    return 0;
}