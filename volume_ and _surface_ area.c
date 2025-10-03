/*
    Name: kevin ian kiplagat
Reg no:PA106/G/28724/25
    Description:program that finds volume and surface area of a cylinder
*/
#include <stdio.h>
#include <math.h>  
int main() {
    float radius, height, volume, surfaceArea;
    const PI=3.142;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);


    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    printf("Volume of the cylinder = %.2f\n", volume);
    printf("Surface Area of the cylinder = %.2f\n", surfaceArea);

    return 0;

}
