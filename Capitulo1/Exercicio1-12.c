#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

setlocale(LC_ALL,"");

FILE *fp;

char c;

   fp = fopen("D:/Programas/CodeBlocks20/KernighanERitchie/Lusiadas1verso.txt", "r");

   while((c = getc(fp))!= EOF){
    if(c == ' ')
    printf("\n");
    else
    printf("%c",c);
   }

   fclose(fp);

   return(0);

}
