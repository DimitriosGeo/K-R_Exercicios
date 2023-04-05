#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main(){

setlocale(LC_ALL,"");

FILE *fp;

fp = fopen("D:/Programas/CodeBlocks20/KernighanERitchie/Lusiadas1verso.txt", "r");

int i,caracter,numcaracteres;
int tamanhoPalavra[30];

for(i=0;i<30;i++)
    tamanhoPalavra[i]=0;


numcaracteres = 0;

while((caracter = getc(fp))!= EOF)
    {
        ++numcaracteres;
        if(caracter == '\n'|| caracter == ' ')
        {
        tamanhoPalavra[numcaracteres]++;
        numcaracteres = 0;
        }

    }

    for(i=0; i<30; i++)
        printf("Palavras com %d caracteres %d \n",i,tamanhoPalavra[i]);


return 0;

}

