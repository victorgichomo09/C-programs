#include<stdio.h>
/* Name: Victor Gichomo 
Reg No : CT101/G/26447/25
Description :Surface area and volume of a cylinder
Date: 19/9/25 */

int main() 
{
     const float PI=3.142;
    float radius, height, surfaceArea, volume;

    
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius); 

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    
    surfaceArea = 2 * PI * radius * radius + PI *  2 * radius * height ;
    volume = PI * radius * radius * height;           

    
  printf("Surface Area of the cylinder = %.2f\n", surfaceArea);
  printf("Volume of the cylinder = %.2f\n", volume);

    return 0;
}