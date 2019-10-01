#include <stdio.h>
#include <conio.h>
main()
{

int  Fahrenheit;
float Celsius;

printf("Tabela de conversão graus Fahrenheit/graus Celsius \n");
printf("-------------------------------------------------\n");
printf("\t Fahrenheit \t | \t Celsius\n");
printf("-------------------------------------------------\n");
for (Fahrenheit = 20; Fahrenheit <= 80; Fahrenheit = Fahrenheit + 1)
{
Celsius = 5.0*(Fahrenheit - 32)/9;
printf("\t %.2f \t | \t %.2f \n", Fahrenheit, Celsius);
}
}
