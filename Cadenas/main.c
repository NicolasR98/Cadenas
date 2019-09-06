#include <stdio.h>
#include <stdlib.h>
#include <string.h> //funciones para caracteres;

int main()
{
    /*
    strlen
    strcpy
    strupr
    strlwr
    stricmp     //No discrimina ni mayusculas ni minusculas;
    strcat
    */
    /*
    char palabra[10];//si pongo 10 puedo poner 9 caracteres.;
    char palabra2[10];
    char todo[100];
    //int lenght;
    //int comp;
    printf("Ingrese una palabra: ");
    gets(palabra);
    strcpy(palabra2, "Perro");                //el valor 2 se guarda en valor 1;
    if(strcmp(palabra, palabra2)== 0)
    {
       printf("Son iguales");
    }
    else
    {
       printf("No son iguales");
    }
    strcpy(todo, palabra);
    strcat(todo, palabra2);
    strcat(todo,"chau");

    return 0;
    */


char nombre[15];
char apellido[15];
char nombreApellido[50];
int i;
int lenght(nombre,apellido);


printf("Ingrese nombre: ");
gets(nombre);
printf("\nIngrese apellido ");
gets(apellido);
strlen(lenght);


for(i=0;i<15;i++)
{
strcpy(nombreApellido,nombre);
strcat(nombreApellido,", ");
strcat(nombreApellido,apellido);
}
printf("Su nombre y apellido es %s", nombreApellido);



}
//fgets(palabra, 10, stdin); //fgets lee desde un archivo y el stdin es el buffer de entrada. se lo coloca para que lo lea
//el gets una funcion que permite leer una cadena de caracteres
// se necesita un espacio en el array para guardar el \0;

    //recibe una direccion de memoria;
    //scanf("%s",palabra); //&s es para leer una cadena de caracteres;
    //Como lee un vector de char, no se necesita poner el &;
    //el scanf interpreta el espacio como un enter.
   // printf("La palabra es %s y el largo: %d",palabra, lenght);
