// Conversão de Fahrenheit para Celsius.Tudo "hard coded".

#include <stdio.h>

int main()
{

float fahr, celsius;
int inicio, fim, incr;

inicio = 0;
fim = 550;
incr = 20;

fahr = inicio;

printf("Fahrenheit \t Celsius\n\n");

while(fahr <= fim)
{
    celsius = (5.0/9.0)*(fahr-32);
    printf("%3.0f \t\t %6.1f\n", fahr, celsius);
    fahr = fahr + incr;
}

}
