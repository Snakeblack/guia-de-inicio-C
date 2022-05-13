// El lenguaje de programación C no existen los strings, sino, que se escribe caracter por caracter por pantalla.
// Por eso se usan estos metodos para imprimir strings o cadenas de texto.
// El metodo printChar() es el que imprime el caracter dado por parametro.
// El metodo printString() es el que imprime o ejecuta la cadena dada por parametro.
// El caracter especial '\0' es el que indica el final de una cadena de texto.
// En este caso en vez de printChar() puedes poner directamente el write() en la funcion printString().

#include <unistd.h>

void printChar(char c)
{
    write(1, &c, 1);
}

void printString(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        printChar(s[i]);
        i++;
    }
}

int main()
{
    char *cadena = "Hola mundo";

    printString(cadena);

    return 0;
}

// Ejecutar en consola para compilar: gcc -o imprimirCadena imprimirCadena.c
// Ejecutar en consola para ejecutar el compilado: ./imprimirCadena