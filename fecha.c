#include "fecha.h"
#include <stdio.h>




Fecha ingresarFecha()
{
    Fecha f;
    puts("Ingrese una fecha (D/M/A)");
    scanf("%d/%d/%d",&f.dia, &f.mes, &f.anio);
    while (!esFechaValida(&f))
    {
        puts ("Fecha invalida, ingrese nuevamente (D/M/A");
        scanf("%d/%d/%d", &f.dia, &f.mes, &f.anio);

    }

    return f;
}


bool esFechaValida(const Fecha* fecha)
{
    if (fecha->anio <= 1600)
        return false;
    if (fecha->mes <1 || fecha->mes > 12)
        return false;
    if (fecha->dia < 1 || fecha->dia > max_dias(fecha->mes, fecha->anio))
        return false;
return true;

}

int max_dias (int m, int a)
{
    int cdm[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    if (m==2 && esBisiesto(a))
        return (29);

    return cdm[m];
}

bool esBisiesto (int a)
{
    if ((a%4==0 && a%100!=0) || a%400 == 0)
        return true;
return false;
}


void mostrarfecha (const Fecha* fecha)
{
    printf("%02d/%02d/%04d", fecha->dia, fecha->mes, fecha->anio);
}
