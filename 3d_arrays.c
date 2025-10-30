#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BRANCHES 3
#define FLOORS 5
#define ROOMS_PER_FLOOR 10
/* NAME : VICTOR GICHOMO
REG NO : CT101/26447/25
DESCRIPTION : 3D ARRAYS
DATE: 29/10/2025 */
int main() 
{
    printf("MULTIPLE BRANCHES OCCUPANCY \n");
    
    
    int chain[BRANCHES][FLOORS][ROOMS_PER_FLOOR];
    int totalOccupied = 0;
    
    srand(time(NULL));
    
    printf("Generating random occupancy data for all branches...\n");
    for(int branch = 0; branch < BRANCHES; branch++) {
        int branchOccupied = 0;
        
        for(int floor = 0; floor < FLOORS; floor++) {
            for(int room = 0; room < ROOMS_PER_FLOOR; room++) {
                chain[branch][floor][room] = rand() % 2; 
                
                if(chain[branch][floor][room] == 1) {
                    branchOccupied++;
                    totalOccupied++;
                }
            }
        }
        
        printf("Branch %d: %d occupied rooms\n", branch + 1, branchOccupied);
    }
    
    
    printf("\nTotal Occupancy Across All Branches:\n");
    printf("Total Occupied Rooms: %d\n", totalOccupied);
    printf("Total Vacant Rooms: %d\n", 
           (BRANCHES * FLOORS * ROOMS_PER_FLOOR) - totalOccupied);
    printf("Total Rooms in Chain: %d\n", 
           BRANCHES * FLOORS * ROOMS_PER_FLOOR);
    
    return 0;
}