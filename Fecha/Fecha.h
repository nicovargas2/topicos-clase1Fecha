#ifndef FECHA_H
#define FECHA_H
#include <stdbool.h>

// Aca pongo los prototipos de las funciones que van a llamarse desde otro archivo o programa
// esto es lo que se exporta hacia otros archivos

typedef struct{
    int dia;
    int mes;
    int anio;
}
Fecha;

// Primitivas

void fechaSet(Fecha* f, int dia, int mes, int anio);
//esta es la forma en que la funcion debe retornar mas de un resultado
//se hace a traves de parametros de salida, se pasan los punteros

//el const indica que no se puede modificar la variable que esta apuntando el puntero
void fechaGet(const Fecha* f, int* d, int* m, int* a);

Fecha fechaSumarDias(const Fecha* f,int dias);
int fechaDiferencia(const Fecha* f1, const Fecha* f2);

// recibe una fecha y devuelve que dia es (0 Lunes, 1 Martes, 2 Mier...) 
int fechaDiaDeLaSemana(const Fecha* f);

// cuenta que dia del anio es, olvidandome de los meses
int fechaDiaDelAnio(const Fecha* f);

// no primitivas
void ingresarFecha(Fecha* f);
void mostrarFecha(const Fecha* f);

#endif // FECHA_H
