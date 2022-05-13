// #include <unistd.h> es una libreria que contiene funciones para el manejo de archivos como por ejemplo el uso de write()
// La funcion main es la primera que se ejecuta en el programa y es la que se encarga de llamar a las demas funciones.
// El metodo write() es el que escribe por pantalla.
// El primer parametro de write() es el fichero de salida [en este caso es 1], el segundo es el texto que queremos escribir y el tercero es el numero de caracteres que queremos escribir.

#include <unistd.h>

int main()
{
    write(1, "Hello, World!\n", 14);
    return 0;
}

// Ejecutar en consola para compilar: gcc -o helloworld helloworld.c
// Ejecutar en consola para ejecutar el compilado: ./helloworld