#include <stdio.h>
#include <stdlib.h>
int main(){
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
    /*printf("el tamanho del char: %d , int: %d ! \n",n,sizeof(char),sizeof(int));*/
} 
