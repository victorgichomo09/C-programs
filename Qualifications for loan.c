#include <stdio.h>
/* Name: Victor Gichomo 
Reg No : CT101/G/26447/25
Description : Qualifications for loan
Date :19/9/25 */
int main() 
{
    int age;
    float income;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income : ");
    scanf("%f", &income);

    
    if (age >= 21 && income >= 21000) 
        printf("Congratulations! You are eligible for the loan.\n");
    else
        printf("Sorry, you are not eligible for the loan.\n");
    
    return 0;
    }




    
    
