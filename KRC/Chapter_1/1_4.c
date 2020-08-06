/*
 * Write a program to print the corresponding Celsius to Fahrenheit table
 */

#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    int upper, lower;

    lower = 0; /*lower limit of temperature*/
    upper = 300; /*upper limit of temperature*/
    
    printf("===================\n");
    printf("Celsius\tFahrenheit\n");
    printf("===================\n");
    for(celsius = lower; celsius <= upper; celsius += 20)
    {
        fahr = ((9.0/5.0) * celsius) + 32.0;
	printf("%3.0f\t%6.2f\n", celsius, fahr);
    }
    printf("===================\n");

    return 0;
}
