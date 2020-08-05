#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    int upper, lower;

    lower = 0; /*lower limit of temperature*/
    upper = 300; /*upper limit of temperature*/
    
    printf("=======================\n");
    printf("Fahrenheit\tCelsius\n");
    printf("=======================\n");
    for(fahr=lower; fahr <= upper; fahr += 20)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
	printf("%3.0f\t%14.2f\n", fahr, celsius);
    }
    printf("=======================\n");

    return 0;
}
