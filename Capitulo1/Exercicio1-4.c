//Usando 'while' para conversão de Celsius para Fahrenheit. Chato (Boring).

#include <stdio.h>

int main()
{

float fahr, celsius;
int inicio, fim, incr;

inicio = 0;
fim = 300;
incr = 20;

celsius = inicio;

printf("Celsius \t Fahrenheit\n\n");

while(celsius <= fim)
{
    fahr = (9.0/5.0)*(celsius+32);
    printf("%3.0f \t\t %6.1f\n", celsius,fahr);
    celsius = celsius + incr;
}

}

