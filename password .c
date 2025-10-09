#include <stdio.h>
#include <string.h>
/* NAME :VICTOR GICHOMO 
REG NO :CT101/G/26447/25
DESCRIPTION : PASSWORD 
DATE: 6/10/2025 */
int main() 
{
    char password[10];

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0);  

    printf("Access Granted!\n");

    return 0;
}