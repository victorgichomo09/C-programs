#include <stdio.h>
/* NAME : VICTOR GICHOMO 
REG NO : CT101/G/26447/25
DATE :17/9/2025
DESCRIPTION : PROMPTING THE USER */

int main() 
{
    float height;
    double bankbalance;
    char phoneNumber[+254];  

    
    printf("Enter your height in meters : ");
    scanf("%f", &height);

    printf("Enter your bank balance : ");
    scanf("%lf", &bankbalance);

    printf("Enter your phone number: ");
    scanf("%s", phoneNumber);  

    printf("Height: %.2f meters\n", height);
    printf("Bank Balance: KSH%.2lf\n", bankbalance);
    printf("Phone Number: %s\n", phoneNumber);

    return 0;
}