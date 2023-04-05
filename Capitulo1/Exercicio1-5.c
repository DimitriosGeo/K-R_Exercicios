#include <stdio.h>

int main()
{

    int fahr;

    printf("  Fahrenheit \t  Celsius\n\n");

    for(fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("   %3d \t\t %6.1f\n", fahr,(5.0/9.0)*(fahr-32));

/*float fahr, celsius;
//int inicio, fim, incr;

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
}*/

}

