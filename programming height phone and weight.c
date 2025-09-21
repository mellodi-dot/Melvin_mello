/*
Name:Melvin nderitu maina
Reg:CT100/G/26132/25
Description:programming height weight and phone number
*/

#include <stdio.h>

int main() {
    float height, weight;
    char phone[20];

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your phone number: ");
    scanf("%s", phone);

    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    printf("\nYou entered:\n");
    printf("Height: %.2f meters\n", height);
    printf("Phone Number: %s\n", phone);
    printf("Weight: %.2f kg\n", weight);

    return 0;
}