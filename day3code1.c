#include <stdio.h>

int main()
{
float cel, fahren;
printf("Enter the temperature in Celsius: ");
scanf("%f", &cel);
fahren = (cel * 9 /5) + 32;
printf("%.2f Celsius = %.2f Fahrenheit\n", cel, fahren);
return 0;
}
