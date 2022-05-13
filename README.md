# Guia de inicio en C - 42 Madrid

Esta guia inicial es para nuevos alumnos de 42 que nunca habian visto C como lenguaje de programación.

## Uso de Vim

El uso de Vim es importante en 42.

### ¿Que es Vim?

- Vim es un editor de texto o codigo desde la terminal.

#### ¿Como abrir Vim?

- Desde la terminal, ejecuta el comando `vim "nombre del archivo"` para abrir y/o crear un archivo de texto.

#### Comandos basicos en Vim

- Estos comandos te permite abrir, cerrar y guardar el documento.
Al igual que con la mayoria de otros editores de texto, existen protecciones para evitar salir del editor sin haber guardado.

- Para ejecutar los siguientes comandos tienen que estar fuera de la edición. Para ello tienes que presionar la tecla "**Escape**".

    1. `:help [palabra]` - Realiza una busqueda de documentación como ayuda, de cualquier palabra que ingreses.

    2. `:e [archivo]` - Abre un archivo, colocando el nombre en [archivo].

    3. `:w` - Guarda el archivo actual.

    4. `:w [nombre del archivo]` Guarda el archivo con el nombre definido en [nombre del archivo].

    5. `:wq` - Guardar el archivo y cerrar Vim.

    6. `q!` - Salir sin guardar el archivo.

#### ¿Como escribir en Vim?

- Para insertar texto en Vim tienes dos formas:

    1. Con la tecla "**a**" insertas después del carácter actual.
    2. Con la tecla "**i**" insertas antes del carácter actual.

- Comandos de edicion [dar a las teclas (previamente dar a *Escape* si se esta en edición)]:

    1. `yy` - Copiar una linea de texto.
    2. `yw` - Copiar una palabra.
    3. `y$` - Copiar desde el cursor hasta el final de la linea.
    4. `v` - Seleccionar caracter por carácter moviendo el cursor.
    5. `V` - Seleccionar lineas de texto.
    6. `p` - pegar lo que este en tu portapapeles.
    7. `d` - Eliminar el texto seleccionado
    8. `dd` - Eliminar la linea de texto.
    9. `dw` - Eliminar una palabra.
    10. `D` - Eliminar todo desde el cursor hasta el final de la linea.
    11. `d0` - Eliminar todo desde el cursor hasta el inicio de la linea.
    12. `dgg` - Elimina todo, desde don de esta el cursor hasta el principio del archivo.
    13. `dG` - Elimina todo, desde don de esta el cursor hasta el final del archivo.
    14. `x` - Elimina un solo carácter.
    15. `u` - Deshace tu ultima operacion.
    16. `Ctrl + r` - Rehace tu ultimo Deshacer.
    17. `.` - Repite tu ultima acción.
