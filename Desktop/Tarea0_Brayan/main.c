#include <stdio.h>
#include <stdlib.h>

int main()
{

printf("Exercise 1-3. Modify the temperature conversion program to print a heading above the table.\n");
printf("+++++++++++Tabla de Conversion  Fahrenheit to celsius +++++++++++++++++++\n");
//ESte solo era de agregar un titulo a la tabla
printf("\nExercise 1-3... end\n\n");
printf("Exercise 1-4.Crear una tabla de celsius to fahrenheit\n");


   /* print Fahrenheit-Celsius table

 for fahr = 0, 20, ..., 300; floating-point version */

 float fahr, celsius;

 float lower, upper, step;

 lower = 0; /* lower limit of temperatuire scale */
 upper = 300; /* upper limit */
 step = 20; /* step size */
 celsius = lower;
 printf("+++++++++++Tabla de Conversion  celsius to Fahrenheit+++++++++++++++++++\n");

while (celsius <= upper) {

 fahr = ((9/5)+32) * celsius;
 printf("%3.0f %6.1f \n", celsius, fahr);
 celsius = celsius + step;
//Mae fijese bien en este, no se si la formula esta bien.
//Y se trata de hacer una tabla de celsius a fahrenheit

 }
printf("\nExercise 1-4...\n\n");
printf("Exercise 1-5. Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.\n");

 int fahr2;
 //for (fahr2 = 0; fahr2 <= 300; fahr2 = fahr2 + 20){
 //printf("%3d %6.1f\n", fahr2, (5.0/9.0)*(fahr2-32));}
for (fahr2 = 300; fahr2 >= 0; fahr2 = fahr2 - 20){
printf("%3d %6.1f\n", fahr2, (5.0/9.0)*(fahr2-32));}

//este solo era de empezar a imprimir desde fahr2 = 300.

printf("\nExercise 1-5...\n\n");








    return 0;
}
