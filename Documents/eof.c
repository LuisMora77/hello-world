    #include <stdio.h>
    #include <stdlib.h>
     
    int main(void)
    {
       int c;
     
       while ((c = getchar()) != EOF)
          putchar(c);
     
       printf("EOF == %d\n", EOF);
     
       return EXIT_SUCCESS;
    }