#include <stdio.h>
#include <stdlib.h>

#define MAXLINHA 1000 /* maximum input line length */

int lelinha(char line[], int maxline);

int main(void){

    FILE *fp;
    int c;

    fp = fopen("D:/Programas/CodeBlocks20/Lusiadas1verso.txt","r");

    c = lelinha(&fp, MAXLINHA);
    printf("Numero de linhas é: %d", c);
    fclose(fp);
    return 0;
}

/* lelinha: read a line into s, return length */
int lelinha(char s[],int lim)
{
int c, i;
for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
s[i] = c;
if (c == '\n') {
s[i] = c;
++i;
}
s[i] = '\0';
return i;
}
