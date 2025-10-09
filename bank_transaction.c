#include <stdio.h>
/* NAME : VICTOR GICHOMO 
REG NO : CT101/G/26447/25
DESCRIPTION : WHILE LOOP 
DATE :6/10/2025 */
int main() 
{
    float balance, withdraw;

    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    while (balance > 0) 
    {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;

        if (balance > 0)
            printf("Remaining balance: %.2f\n", balance);
        else
            printf("Balance is zero or negative. Transaction stopped.\n");
    }

    return 0;
}