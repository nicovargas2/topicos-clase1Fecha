#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "../Fecha/Fecha.h"

int main()
{
    // set console code page (CP) to UTF-8
    SetConsoleOutputCP(CP_UTF8);

    Fecha fechaX;

    ingresarFecha(&fechaX); // le mando la direccion de memoria
    mostrarFecha(&fechaX);
    putchar('\n');

    // Las siguientes lineas son para probar la funcion de sumar dias
    // int dias=30;
    // Fecha fechaY = fechaSumarDias(&fechaX, dias);
    // printf("Fecha luego de sumar %d dias: ",dias);
    // mostrarFecha(&fechaY);

    // Las sig lineas son para probar la fecha menor y mayor
    // Fecha fechaZ;
    // ingresarFecha(&fechaZ); //le mando la direccion de memoria

    // printf("Diferencia entre fechas: %d dia(s)\n", fechaDiferencia(&fechaX, &fechaZ));

    printf("La cantidad de dias que van del año es: %d \n", fechaDiaDelAnio(&fechaX));

    return 0;
}

// tarea: convertir todo a dia relativo (las mas dificiles son fechaSet y fechaGet)