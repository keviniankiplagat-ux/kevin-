/*
Name:kevin ian kiplagat
Reg no:PA106/G/28724/25
Description:Program that display a c function named converttocelsius
*/
#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = convertToCelsius(fahrenheit);
    printf("Temperature in Celsius: %.2f°C\n", celsius);

    return 0;
}
