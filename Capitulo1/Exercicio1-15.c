#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

double CparaF(double n);
double FparaC(double m);
double temperatura, n;
int conversao;

int main(){

setlocale(LC_ALL,"");

printf("Para converter de Fahrenheit para Cent�grado digite 0, caso contr�rio, digite 1: ", conversao);
scanf("%d", &conversao);
printf("Informe o valor da temperatura: ", temperatura);
scanf("%lf", &temperatura);
    if(conversao == 0){
        printf("%f Fahrenheit equivale a %f Cent�grados", temperatura,FparaC(temperatura));

    }else if(conversao == 1){
        printf("%f Cent�grados equivale a %f Fahrenheit", temperatura,CparaF(temperatura));
    }
}
double CparaF(double n){

     n = ((n+32)/5)*9;
    return n;

}
double FparaC(double n){

     n = ((n-32)/9)*5;
    return n;
return 0;
}

