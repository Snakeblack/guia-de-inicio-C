// Para conseguir el tamaño de una cadena de texto se crea la funcion tamañoCadena() o ft_strlen() que devuelve el numero de caracteres que tiene la cadena de texto.
// La funcion tamañoCadena() o ft_strlen() recibe como parametro un puntero a una cadena de texto y devuelve el numero de caracteres que tiene la cadena de texto mediante una variable int y un bucle while.
// Nota: si solo hay una linea de codigo dentro del while o if, no es necesario usar llaves.
// Nota2: el printf() es una funcion que imprime por pantalla. NO se usa en la piscina de 42.

#include <stdio.h>

int tamañoCadena(char *cadena)
{
    int i = 0;

    while (cadena[i] != '\0')
        i++;

    return i;
}

int main()
{
    char cadena[] = "Hola mundo";
    printf("El tamaño de la cadena es: %d\n", tamañoCadena(cadena));

    return 0;   
}

// Ejecutar en consola para compilar: gcc -o tamañoCadena tamañoCadena.c
// Ejecutar en consola para ejecutar el compilado: ./tamañoCadena