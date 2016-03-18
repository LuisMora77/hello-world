#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main()
{
	struct Alien_t{
		char nombre[30];
		int id;
		struct Planetas_t *planetas;
		struct Idiomas_t *idiomas;
		struct Alient_t *siguiente;
	};
	
	struct Planetas_t{
		char nombre[30];
		int starwars_code;
		char agua;
		char oxigeno;
		struct Planetas_t *siguiente;
	};
	
	struct Idiomas_t{
		char nombre[30];
		char tipo;
		int simbolos;
		struct Idiomas_t *siguiente;
		struct Planetas_t *planetas;
	};
	
	Alient_t *lista-aliens;
	lista-aliens = malloc(sizeof(Alien_t));
	strcpy(lista-aliens.nombre,"Alien1.alf");
		
}

