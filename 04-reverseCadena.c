// El metodo reverseCadena() es el que invierte el orden de los caracteres de una cadena de texto.

#include <stdio.h>

char reverseCadena(char *cadena)
{
    int i = 0;
    int j = 0;
    char aux;

    while (cadena[i] != '\0')
        i++;

    i--;

    while (i > j)
    {
        aux = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = aux;
        i--;
        j++;
    }
}

int main(int argc, char *argv[])
{
    char *cadena = "Hola mundo";

}