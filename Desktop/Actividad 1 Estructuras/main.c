#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

 

    
int main()
{
	
	struct Alien_t{
    char nombre[30];
    int          id;
    struct Planetas_t *planetas;
    struct   Idiomas_t *idiomas;
    struct   Alien_t *siguiente;
    };

    struct Planetas_t{
    char nombre[30];
    int starwars_code;
    char agua[1];
    char oxigeno[1];
    struct planetas_t *siguiente;
    };

    struct Idiomas_t{
    char nombre[30];
    char tipo[1];
    int simbolos;
    struct Idiomas_t *siguiente;
    struct Planetas_t *planetas;
    };
    
   struct Alien_t a1;
   strcpy(a1.nombre,"Julia");
   a1.id=567400001;
   printf("El nombre de una Alien es %s y su id es: %d\n",a1.nombre,a1.id);
   
    struct Planetas_t p1;
    strcpy(p1.nombre,"Regulus 1");
    p1.starwars_code=11001;
    strcpy(p1.agua,"si");
    strcpy(p1.oxigeno,"si");
    printf("En el planeta %s ,codigo %d ,%s hay agua y %s hay oxigeno\n",p1.nombre,p1.starwars_code,p1.agua,p1.oxigeno);
    
   struct Idiomas_t i1;
   strcpy(i1.nombre,"reguliano");
   strcpy(i1.tipo,"tipo desconocido");
   i1.simbolos=1234567890;
   printf("En el planeta hay un idioma llamado %s que es de tipo %s que contiene simbolos como %d\n",i1.nombre,i1.tipo,i1.simbolos);


   //Alien_t *a2 = malloc(sizeof(Alien_t));   

    return 0;
}
