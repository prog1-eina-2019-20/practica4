/*********************************************************************************
 * Programación 1. Práctica 4
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Ultima revisión: 7 de noviembre de 2019
 * Resumen: Fichero de interfaz «naturales-grandes.h» de un módulo denominado
 *          «naturales-grandes» para trabajar con números naturales de gran
 *          magnitud en la 4.ª práctica.
 * Codificación de caracteres original de este fichero: UTF-8 con BOM
\********************************************************************************/

#ifndef NATURALES_GRANDES_H_INCLUDED
#define NATURALES_GRANDES_H_INCLUDED

/*
 * Pre:  numero >= 0
 * Post: «secuencia» almacena una cadena de caracteres, la secuencia de dígitos de
 *       «numero». Sea n el número de dígitos de «numero». El carácter 
 *       secuencia[n - 1] representa las unidades de «numero», el carácter
 *       secuencia[n - 2] las decenas de «numero» y así, sucesivamente, el
 *       carácter secuencia[0] representa el dígito más significativo. El carácter
 *       secuencia[n] es igual al carácter '\0' (cuyo código ASCII es 0).
 */
void convertir(const int numero, char secuencia[]);

/*
 * Pre:  «secuencia» almacena una secuencia de caracteres que corresponden a los
 *       dígitos de un número natural comprendido en el intervalo de
 *       valores representables por el tipo «int», seguida por el carácter '\0'
 *       (cuyo código ASCII es 0).
 * Post: Ha devuelto el valor numérico del natural almacenado en «secuencia».
 */
int valor(const char secuencia[]);

/*
 * Pre:  «a» y «b» almacenan sendas cadenas de caracteres con la secuencias
 *       de dígitos de dos números naturales. Sea «n» el número de dígitos de «a»
 *       y «m» el número de dígitos de «b». Los caracteres a[n-1] y b[m-1]
 *       representan las unidades, los caracteres a[n-2] y b[m-2] las
 *       decenas y así sucesivamente, los caracteres a[0] y b[0] representan los
 *       dígitos más significativos de «a» y «b», respectivamente. Los caracteres 
 *       a[n] y b[m] son iguales al carácter '\0' (cuyo código ASCII es 0).
 * Post: «suma» almacena la secuencia de dígitos de la suma de los naturales
 *       representados por «a» y «b». Sea «s» el número de dígitos de suma.
 *       El carácter suma[s-1] representa las unidades de la suma, el carácter
 *       suma[s-2] representa las decenas y así sucesivamente, el carácter suma[0]
 *       representa el dígito más significativo de la suma. El carácter
 *       suma[s] es igual al carácter '\0' (cuyo código ASCII es 0).
 */
void sumar(const char a[], const char b[], char suma[]);

/*
 * Pre:  «numero» almacena una cadena de caracteres con la secuencia de dígitos de
 *       un número natural. Sea «n» el número de dígitos de «numero».
 *       El carácter numero[n-1] representa las unidades de «numero»,
 *       el carácter numero[n-2] las decenas de «numero» y así,
 *       sucesivamente, el carácter numero[0] representa el dígito más
 *       significativo. El carácter numero[n] es igual al carácter '\0' (cuyo
 *       código ASCII es 0).
 * Post: «imagen» almacena una cadena de caracteres con la secuencia de dígitos
 *       correspondiente a la imagen especular de «numero».
 */
void calcularImagen(const char numero[], char imagen[]);

/*
 * Pre:  «numero» almacena una cadena de caracteres con la secuencia de dígitos de
 *       un número natural. Sea «n» el número de dígitos de «numero».
 *       El carácter numero[n-1] representa las unidades de «numero»,
 *       el carácter numero[n-2] las decenas de «numero» y así,
 *       sucesivamente, el carácter numero[0] representa el dígito más
 *       significativo. El carácter numero[n] es igual al carácter '\0' (cuyo
 *       código ASCII es 0).
 * Post: Ha devuelto «true» si y solo si la secuencia de dígitos «numero» se
 *       corresponde con la de un número capicúa.
 */
bool esCapicua(const char numero[]);

#endif // NATURALES_GRANDES_H_INCLUDED
