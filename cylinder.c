/*
Name:MELVIN NDERITU
REG:CT100/G/26132/25
DESCRIPTION:VOLUME AND SURFACE AREA OF CYLINDER
*/

#include <stdio.h>
#define PI 3.14159265359

int main() {
    double radius, height, volume, surface_area;

    // Prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surface_area = 2 * PI * radius * radius + 2 * PI * radius * height;

    // Display results
    printf("Volume of the cylinder = %.2f\n", volume);
    printf("Surface area of the cylinder = %.2f\n", surface_area);

    return 0;
}
