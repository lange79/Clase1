#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <stdbool.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
}
Fecha;

Fecha ingresarFecha();
bool esFechaValida(const Fecha* fecha);
int max_dias (int m, int a);
bool esBisiesto (int a);
void mostrarfecha (const Fecha* fecha);


#endif // FECHA_H_INCLUDED