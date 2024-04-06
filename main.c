#include <stdio.h>
#include <stdlib.h>
#include "fecha.h"

int main()
{
    printf("Hello world!\n");

    Fecha fechaHoy = ingresarFecha();
    mostrarfecha (&fechaHoy);


    return 0;
}
