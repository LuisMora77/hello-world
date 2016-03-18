#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

 
    typedef struct Alien_t{
    char nombre[30];
    int          id;
    char *especie;
    struct Planetas_t *planetas;
    struct   Idiomas_t *idiomas;
    struct   Alien_t *siguiente;
    }alien;

    typedef struct Planetas_t{
    char nombre[30];
    int starwars_code;
    char agua[1];
    char oxigeno[1];
    struct planetas_t *siguiente;
    }planetas;

    typedef struct Idiomas_t{
    char nombre[30];
    char tipo[20];
    int simbolos;
    struct Idiomas_t *siguiente;
    struct Planetas_t *planetas;
    }idiomas;
    
int main()
{
	alien *lista;
	lista=malloc(sizeof(alien));
	strcpy(lista->nombre,"Esternolfo ");
	printf("Nombre del primer alien es: %s",lista->nombre);
	lista->id = 777889;
	printf("\n\nEl id de %s es %d\n",lista->nombre,lista->id);
	//alien-> especie = malloc(sizeof("Esternolfo"));
	
	lista->idiomas = malloc(sizeof(idiomas));
	strcpy(lista->idiomas->nombre, "Reguliano");
	strcpy(lista->idiomas->tipo, " normal");
	lista->idiomas->simbolos = 1234567890;
	printf("\n\nEl alien %s con id %d habla un idioma llamado: %s\n",lista->nombre,lista->id,lista->idiomas->nombre);
	printf("\n\nEl alien %s con id %d que habla %s habla un tipo %s de idioma ",lista->nombre,lista->id,lista->idiomas->nombre,lista->idiomas->tipo);
	printf("\n\nEl alien %s con id %d que habla %s habla un tipo %s de idioma, el cual posee simbolos como: %d ",lista->nombre,lista->id,lista->idiomas->nombre,lista->idiomas->tipo,lista->idiomas->simbolos);
	
	lista->planetas=malloc(sizeof(planetas));
	strcpy(lista->planetas->nombre,"Regulus");
	lista->planetas->starwars_code=12245;
	strcpy(lista->planetas->agua,"si");
	strcpy(lista->planetas->oxigeno,"si");
	printf("\n\nEl planeta en el que vive %s se llama %s, posee el codigo %d,%s posee agua y %s posee oxigeno",lista->nombre,lista->planetas->nombre,lista->planetas->starwars_code,lista->planetas->agua,lista->planetas->oxigeno);
	
	 
	
	
	
    
  
 
    return 0;
    }
