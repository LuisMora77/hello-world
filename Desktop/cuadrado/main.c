#include <stdio.h>
#include <stdlib.h>

int main()
{
     printf("Digite el numero que desea elevar al cuadrado: ");
    int num,cuadrado;
    scanf("%d",&num);
    cuadrado=alcuadrado(num);
    printf("%d al cuadrado da %d",num,cuadrado);
    return 0;
}
int alcuadrado(int base){
int resultado;
resultado=base*base;
return resultado;
}

