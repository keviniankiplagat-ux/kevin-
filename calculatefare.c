/*
Name:kevin ian kiplagat
Reg no:PA106/G/28724/25
Description;program that display a c function named calculaterfare
*/
#include <stdio.h>
int calculateFare(int distance) {
    return distance * 50;
}

int main() {
    int distance;
    printf("Enter distance traveled in kilometers: ");
    scanf("%d", &distance);

    int fare = calculateFare(distance);
    printf("Total fare: KSh. %d\n", fare);

    return 0;
}