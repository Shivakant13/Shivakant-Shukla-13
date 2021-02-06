#include<stdio.h>
void main()
{
    float temp,farh;
    printf("Enter the temperature in celsius\n");
    scanf("%f", &temp);
    farh=(temp*9/5)+32;
    printf("\n the converted temperature in fahrenheit is%f",farh);
}
