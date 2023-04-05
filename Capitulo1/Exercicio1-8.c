#include <stdio.h>


int main () {
   FILE *fp;
   int c;

   fp = fopen("D:/Programas/CodeBlocks20/Lusiadas1verso.txt","r");
   while(1) {
      c = fgetc(fp);
      if( feof(fp) ) {
         break ;
      }
     //  printf("%c", c);
       putchar(c);
   }
   fclose(fp);
   return(0);
}

 /*  FILE *fp;
    int c,esp, tab, lin;

    esp = tab = lin = 0;

    fp = fopen("D:/Programas/CodeBlocks20/Lusiadas1verso.txt","r");

    while((c = getc(fp))!= EOF)
    {
        if(c == ' ')
            ++esp;
        if(c == '\t')
            ++tab;
        if(c == '\n')
            ++lin;
    }
    printf("%d %d %d\n", esp, tab, lin);
}*/
