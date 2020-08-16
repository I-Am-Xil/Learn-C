/*
	Asignacion dinamica de memoria en C
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define length 2
int size;
struct dog
{
	char name[20];
	char *p_name;
}dogs[length];

int main()
{
	for (int i = 0; i < length; ++i)
	{
		printf("Ingrese el nombre del perro\n");
		scanf("%s",dogs[i].name);
		size = strlen(dogs[i].name);
		printf("%i\n",size);
		dogs[i].p_name = malloc(size * sizeof(char));
		
		if (NULL == dogs[i].p_name)
		{
			printf("Error al asignar memoria\n");
		}else{
			strcpy(dogs[i].p_name,dogs[i].name);
		}
	}
	for (int i = 0; i < length; ++i)
	{
		printf("El nombre del perro es: %s\n",dogs[i].p_name);
	}
	return 0;
}