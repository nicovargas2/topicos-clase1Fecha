#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "../Fecha/Fecha.h"

int main()
{
    // set console code page (CP) to UTF-8
    SetConsoleOutputCP(CP_UTF8);

    Fecha fechaX;

    ingresarFecha(&fechaX); //le mando la direccion de memoria
    mostrarFecha(&fechaX);
    putchar('\n');

    int dias=30;
    Fecha fechaY = fechaSumarDias(&fechaX, dias);
    
    printf("Fecha luego de sumar %d dias: ",dias);
    mostrarFecha(&fechaY);

    return 0;
}

// tarea: convertir todo a dia relativo (las mas dificiles son fechaSet y fechaGet)