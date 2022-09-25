#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <errno.h>
/* Genere 100 números aleatorios y guárdelos en la memoria de manera ordenada (en una lista).
Imprímelos en orden. Debe usar listas enlazadas y el generador de números aleatorios de C. */
int primerEjercicio();

/*ealice un programa en C que tendrá de entrada un directorio (sino use el directorio actual)
Y liste, recursivamente, los archivos en ese y en los directorios dentro de este recursivamente
Para ello debe buscar información sobre la estructura de datos dirent con operaciones opendir()
readdir() y closedir()*/
int segundoEjercicio();

/*El arte y la ciencia de ocultar información incrustando mensajes dentro de otros mensajes aparentemente
inofensivos. Los bits de datos no utilizados se reemplazan por bits de información valiosa utilizando el
mecanismo LSB. El remitente y el receptor tendrán una clave/secreto individual en función del cual podrán
extraer los datos reales de la imagen. Para este proyecto también se necesita una comprensión de nivel básico de
las metodologías de procesamiento de imágenes. (Investigar solamente)*/
// El archivo esta en un pdf llamado tal ...

typedef struct nodo {
	int valor;
	struct nodo *sig;
}Nodo;
int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}

int primerEjercicio() {
	Nodo lista[100];
    for (int i = 0; i < count; i++) {
        int num = (rand() %
        (upper - lower + 1)) + lower;
        printf("%d ", num);
    }
}