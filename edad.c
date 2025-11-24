#include <stdio.h>

int main (){

    char nombre[50];
    int edad;

    printf ("Escribe tu nombre: ");
    scanf ("%s", nombre);

    printf ("Escribe tu edad: ");
    scanf ("%d", &edad);

    if (edad >=18) {
        printf ("Eres mayor de edad");
    }

    else {
        printf ("Eres menor de edad");
    }

    return 0;
}
