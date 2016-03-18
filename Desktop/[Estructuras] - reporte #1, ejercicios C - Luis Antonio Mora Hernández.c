#include <stdio.h>
#include <stdlib.h>

int main()
{

printf(" 1-1: Errores en hola mundo al dejar partes del codigo sin hacer\n\n" );
printf("\t------------------------------------------------------------------\n\n");
printf(" 1-2: Experiment to find out what happens when prints 's argument string contains '/c', where c is some character not listed above.\n" );
printf("\t\t Se ignora el backslash y se imprimer la c junto con el resto de texto\n\n");
printf("\t------------------------------------------------------------------\n\n");

printf(" 1-3: Agregar un titulo a la tabla\n" );
printf("\t\t-----------Tabla de Conversion de Fahrenheit a Celsius-----------\n");
float fahr, celsius;
float lower, upper, step;
lower = 0;
upper = 300;
step = 20;

fahr = lower;
while (fahr <= upper) {
celsius = 5 * (fahr-32) / 9;
printf("%f\t%f\n", fahr, celsius);
fahr = fahr + step;
}
printf("\t------------------------------------------------------------------\n\n");
printf(" 1-4: Write a program to print the corresponding Celsius to Fahrenheit table.\n\n");
celsius=0;
while (celsius <= upper) {

 fahr = (9*(celsius)/5)+32;
 printf("%3.0f %6.1f \n", celsius, fahr);
 celsius = celsius + step;}
 
printf("\t------------------------------------------------------------------\n\n");
printf(" 1-5: Modify the temperature conversion program to print the table in reverse order,that is, from 300 degrees to 0.\n\n");

fahr=upper;
while (fahr >= lower) {
celsius = 5 * (fahr-32) / 9;
printf("%f\t%f\n", fahr, celsius);
fahr = fahr - step;}

printf("\t------------------------------------------------------------------\n\n");
printf(" 1-6/1-7: Verify that the expression getchar() != EOF is 0 or 1./Write a program to print the value of EOF.\n\n");

printf("EOF == %d\n", EOF);

printf("\t------------------------------------------------------------------\n\n");
printf(" 1-8: Write a program to count blanks, tabs, and newlines.\n\n");

char c;
    unsigned int n=0, tab=0, space=0, nl=0,a=0;
    while((c = getchar()) != EOF){
                n++;
        if (c=='\t') tab++;
        if (c==' ') space++;
        if(c=='\n') nl++;
       
    }
     a=space+tab+nl;
     n=n-a;
    printf("Se leyeron %d caracteres,%d espacios, %d tabs y %d lineas ! \n",n,space,tab,nl);

printf("\t------------------------------------------------------------------\n\n");
printf("1-10: Write a program to copy its input to its output, replacing each tab by backslash t , eachbackspace by backslash b , and each backslash by double backslash . This makes tabs and backspaces visible in an unambiguous way\n\n");

while((c = getchar()) != EOF){
                
        if (c=='\t') printf("/t");
        if (c==' ') printf("/b");
        putchar(c);
    
}

printf("\t------------------------------------------------------------------\n\n");
printf("1-11: How would you test the word count program? What kinds of input are most likely to uncover bugs if there are any?\n\n");
printf("Utilizaria palabras pegadas y palabras separadas por varios espacion o varias tabulaciones a la vez, puesto que eso es lo que toma en cuenta el programa para contar.\n");

printf("\t------------------------------------------------------------------\n\n");
printf("1-12: Write a program that prints its input one word per line.\n\n");

while ((c=getchar())!= EOF){ 
    
    if (c!= ' ') c=putchar(c) ;
    if (c==' ') printf("\n");
}


    
}




     





}