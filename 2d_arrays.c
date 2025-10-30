#include <stdio.h>
/* NAME : VICTOR GICHOMO 
REG NO : CT101/G/26447/25
DESCRIPTION : 2D ARRAYS 
DATE 28/10/2025 */
int main() {
    int occupancy[5][10];
    int occupied, vacant;

    printf("=== Room Occupancy (One Branch) ===\n");
    printf("Enter 1 for occupied and 0 for vacant.\n");

    for (int floor = 0; floor < 5; floor++) {
        printf("\n--- Floor %d ---\n", floor + 1);
        occupied = vacant = 0;

        for (int room = 0; room < 10; room++) 
        {
            printf("Enter status for room %d: ", room + 1);
            scanf("%d", &occupancy[floor][room]);

            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}



