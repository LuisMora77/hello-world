#include <stdio.h>
#include <stdlib.h>
printf("\t------------------------------------------------------------------\n\n");
printf("1-15:Rewrite the temperature conversion program of Section 1.2 to use a function for conversion..\n");

int conversion(int fahr){

int celsius;
int lower, upper, step;
lower = 0;
upper = 300;
step = 20;

while (fahr <= upper) {
celsius = 5 * (fahr-32) / 9;
printf("%d\t%d\n", fahr, celsius);
fahr = fahr + step;}