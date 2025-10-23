#include <stdio.h>
/* NAME : VICTOR GICHOMO 
REG NO :  CT101/G/ 26447/25
DESCRIPTION : CONVERT TEMPERATURE 
DATE :  20/10/2025 */
float convertToCelsius(float fahrenheit)
 {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Temperature in Celsius = %.2f°C\n", convertToCelsius(fahrenheit));
    return 0;
}