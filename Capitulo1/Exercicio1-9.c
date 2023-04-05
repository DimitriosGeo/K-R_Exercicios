#include <stdio.h>

main(){


FILE *fp;
int c, duplo, c1, c2;


c1 = c2 = duplo = 0;



 fp = fopen("D:/Programas/CodeBlocks20/Lusiadas1verso.txt","r");

while((c = getc(fp))!= EOF)
    {
    if(c == ' ' && c1 == c)
        duplo++;
    else {
        c1 = c;
        printf("%c",c);
        //putc(fp);
    }
    }
    fclose(fp);
printf("%d ", duplo);


}
