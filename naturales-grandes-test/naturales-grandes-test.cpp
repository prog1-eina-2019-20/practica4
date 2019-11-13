/*********************************************************************************
 * Programación 1. Práctica 4
 * Autor: Miguel Ángel Latre Abadía
 * Ultima revisión: 10 de noviembre de 2018
 * Resumen: Fichero de implementación «naturales-grandes-test.cpp» de un módulo
 * denominado «naturales-grandes-test» para hacer de pruebas de las funciones
 * definidas en el módulo «naturales-grandes» de la 4.ª práctica.
 * Codificación de caracteres original de este fichero: UTF-8 con BOM
\********************************************************************************/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include "../naturales-grandes.h"
using namespace std;

/**************************************************************************
 * Funciones para probar las funciones nuevas de la biblioteca «calculos» *
 *                                                                        *
 * (Para escribir estas funciones, no se ha utilizado conceptos de C++    *
 * que no se hayan visto en la asignatura)                                *
 **************************************************************************/

const int MAX_DIGITOS = 30;
const char CADENA_NO_INICIALIZADA[MAX_DIGITOS] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa";


/* Funciones que escriben los resultados de las pruebas.
 * Por legibilidad, aquí solo se declaran. La definición completa de la función
 * está al final del fichero.
 */
void escribirResultadoPrueba(const char valorEsperado[], 
                             const char valorCalculado[]);
void escribirResultadoPrueba(const int valorEsperado, const int valorCalculado);
void escribirResultadoPrueba(const bool valorEsperado, const bool valorCalculado);

/*
 * Pre:  «valorEsperado» es la secuencia de dígitos de «n» en base 10, terminado
 *       en '\0'.
 * Post: Ha escrito un mensaje en pantalla informando acerca de si la función
 *       «convertir», invocada con el argumento «n», ha calculado el valor
 *       correcto «valorEsperado». En caso negativo, ha informado
 *       también acerca del valor incorrecto que calculó la función.
 */
void probarConvertir(const int n, const char valorEsperado[]) {
    cout << "Prueba convertir (" << n << ", char[]) ";
    char valorCalculado[MAX_DIGITOS];
    strcpy(valorCalculado, CADENA_NO_INICIALIZADA);
    convertir(n, valorCalculado);
    escribirResultadoPrueba(valorEsperado, valorCalculado);
}

/*
 * Pre:  «valorEsperado» es la secuencia de dígitos de la suma de «a» y «b»
 *       en base 10, terminado  en '\0'.
 * Post: Ha escrito un mensaje en pantalla informando acerca de si la función
 *       «sumar», invocada con los argumentos «a» y «b», ha calculado el valor
 *       correcto «valorEsperado». En caso negativo, ha informado
 *       también acerca del valor incorrecto que calculó la función.
 */
void probarSumar(const char a[], const char b[], const char valorEsperado[]) {
    cout << "Prueba sumar (\"" << a << "\", \"" << b << "\", char[]) ";
    char valorCalculado[MAX_DIGITOS];
    strcpy(valorCalculado, CADENA_NO_INICIALIZADA);
    sumar(a, b, valorCalculado);
    escribirResultadoPrueba(valorEsperado, valorCalculado);
}


/*
 * Pre:  «numero» almacena una cadena de caracteres con la secuencia de
 *       dígitos de un número natural. «valorEsperado» es el valor numérico
 *       representado por la secuencia «numero».
 * Post: Ha escrito un mensaje en pantalla informando acerca de si la función
 *       «valor», invocada con el argumento «numero», ha devuelto el valor
 *       correcto «valorEsperado». En caso negativo, ha informado también acerca
 *       del valor incorrecto que devolvió la función.
 */
void probarValor(const char numero[], const int valorEsperado) {
   cout << "Prueba valor(\"" << numero << "\") ";
   int valorDevuelto = valor(numero);
   escribirResultadoPrueba(valorDevuelto, valorEsperado);
}


/*
 * Pre:  «numero» almacena una cadena de caracteres con la secuencia de
 *       dígitos de un número natural. «valorEsperado» es misma secuencia de
 *       dígitos que «numero», pero en orden inverso.
 * Post: Ha escrito un mensaje en pantalla informando acerca de si la función
 *       «calcularImagen», invocada con el argumento «numero», ha calculado el
 *       valor correcto «valorEsperado». En caso negativo, ha informado también
 *       acerca del valor incorrecto que devolvió la función.
 */
void probarCalcularImagen(const char numero[], const char valorEsperado[]) {
    cout << "Prueba calcularImagen (\"" << numero << "\", char[]) ";
    char valorCalculado[MAX_DIGITOS];
    strcpy(valorCalculado, CADENA_NO_INICIALIZADA);
    calcularImagen(numero, valorCalculado);
    escribirResultadoPrueba(valorEsperado, valorCalculado);
}

/*
 * Pre:  «numero» almacena una cadena de caracteres con la secuencia de
 *       dígitos de un número natural. «valorEsperado» indica si la secuencia
 *       «numero» corresponde a un número capicúa («true») o no («false»).
 * Post: Ha escrito un mensaje en pantalla informando acerca de si la función
 *       «esCapicua», invocada con el argumento «numero», ha devuelto el valor
 *       correcto «valorEsperado». En caso negativo, ha informado también acerca
 *       del valor incorrecto que devolvió la función.
 */
void probarEsCapicua(const char numero[], const bool valorEsperado) {
    cout << "Prueba esCapicua (\"" << numero << "\") ";
    bool valorCalculado = esCapicua(numero);
    escribirResultadoPrueba(valorEsperado, valorCalculado);
}

/********************************************************************************/
const char ESCAPE_ROJO[] = "\033[31m";
const char ESCAPE_ROJO_NEGRITA[] = "\033[31;1m";
const char ESCAPE_NORMAL[] = "\033[0m";

/*
 * Pre:  En la línea actual de la pantalla se ha escrito un texto anunciando que
 *       se ha realizado una prueba de una determinada función con unos
 *       determinados argumentos.
 * Post: Si los valores de «valorEsperado» y «valorCalculado» son iguales, ha
 *       completado un mensaje en la pantalla informando de que la prueba ha sido
 *       correcta. En caso contrario, indica que ha sido incorrecta y ha informado
 *       también de los valores de «valorEsperado» y «valorCalculado».
 */
void escribirResultadoPrueba(const char valorEsperado[], 
                             const char valorCalculado[]) {
    if (strcmp(valorEsperado, valorCalculado) == 0) {
        cout << "correcta." << endl;
    }
    else {
        cout << "incorrecta:" << endl;
        cout << ESCAPE_ROJO;
        cout << "   debería haber calculado \"" << valorEsperado
             << "\" pero ha calculado \"" << valorCalculado << "\"." << endl;
        cout << ESCAPE_NORMAL;
    }
}

/*
 * Pre:  En la línea actual de la pantalla se ha escrito un texto anunciando que
 *       se ha realizado una prueba de una determinada función con unos
 *       determinados argumentos.
 * Post: Si los valores de «valorEsperado» y «valorCalculado» son iguales, ha
 *       completado un mensaje en la pantalla informando de que la prueba ha sido
 *       correcta. En caso contrario, indica que ha sido incorrecta y ha informado
 *       también de los valores de «valorEsperado» y «valorCalculado».
 */
void escribirResultadoPrueba(const int valorEsperado, const int valorCalculado) {
    if (valorEsperado == valorCalculado) {
        cout << "correcta." << endl;
    }
    else {
        cout << "incorrecta:" << endl;
        cout << ESCAPE_ROJO;
        cout << "   debería haber calculado " << valorEsperado
             << " pero ha calculado " << valorCalculado << '.' << endl;
        cout << ESCAPE_NORMAL;
    }
}

/*
 * Pre:  En la línea actual de la pantalla se ha escrito un texto anunciando que
 *       se ha realizado una prueba de una determinada función con unos
 *       determinados argumentos.
 * Post: Si los valores de «valorEsperado» y «valorCalculado» son iguales, ha
 *       completado un mensaje en la pantalla informando de que la prueba ha sido
 *       correcta. En caso contrario, indica que ha sido incorrecta y ha informado
 *       también de los valores de «valorEsperado» y «valorCalculado».
 */
void escribirResultadoPrueba(const bool valorEsperado, const bool valorCalculado) {
    if (valorEsperado == valorCalculado) {
        cout << "correcta." << endl;
    }
    else {
        cout << "incorrecta:" << endl;
        cout << ESCAPE_ROJO << boolalpha;
        cout << "   debería haber calculado " << ESCAPE_ROJO_NEGRITA 
             << valorEsperado << ESCAPE_ROJO << " pero ha calculado "
             << ESCAPE_ROJO_NEGRITA << valorCalculado << ESCAPE_ROJO << '.' 
             << endl;
        cout << ESCAPE_NORMAL;
    }
}