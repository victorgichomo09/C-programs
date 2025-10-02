#include <stdio.h>
/* NAME :VICTOR GICHOMO 
REG NO: CT101/G/26447/25
DATE: 29/9/2025
DESCRIPTION :DATA BUNDLE PURCHASE */
int main() {
    int choice;

    printf("Option\tBundle\tCost (Ksh)\n");
    printf("1\t100MB\t50\n");
    printf("2\t500MB\t200\n");
    printf("3\t1GB\t350\n");
    printf("4\t2GB\t600\n");

    
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    
    switch(choice) {
        case 1:
            printf("You selected 100MB. Cost: 50 Ksh\n");
            break;
        case 2:
            printf("You selected 500MB. Cost: 200 Ksh\n");
            break;
        case 3:
            printf("You selected 1GB. Cost: 350 Ksh\n");
            break;
        case 4:
            printf("You selected 2GB. Cost: 600 Ksh\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}