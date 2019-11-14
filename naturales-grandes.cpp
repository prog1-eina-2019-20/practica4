/*********************************************************************************
 * Programación 1. Práctica 4
 * Autores originales: Javier Martínez y Miguel Ángel Latre
 * Modificado por: ¡PON AQUÍ TU NOMBRE!
 * Ultima revisión: 7 de noviembre de 2019
 * Resumen: Fichero de implementación «naturales-grandes.cpp» de un módulo
 *          denominado «naturales-grandes» para trabajar con números naturales de
 *          gran magnitud en la 4.ª práctica.
 * Codificación de caracteres original de este fichero: UTF-8 con BOM
\********************************************************************************/


/*
 * Pre:  numero >= 0
 * Post: «secuencia» almacena una cadena de caracteres, la secuencia de dígitos de
 *       «numero». Sea n el número de dígitos de «numero». El carácter 
 *       secuencia[n - 1] representa las unidades de «numero», el carácter
 *       secuencia[n - 2] las decenas de «numero» y así, sucesivamente, el
 *       carácter secuencia[0] representa el dígito más significativo. El carácter
 *       secuencia[n] es igual al carácter '\0' (cuyo código ASCII es 0).
 */
void convertir(const int numero, char secuencia[]) {
    // Por hacer
}

/*
 * Pre:  «sec» almacena una secuencia de caracteres que corresponden a los
 *       dígitos de un número natural comprendido en el intervalo de
 *       valores representables por el tipo <int>, seguida por el carácter
 *       NUL, cuyo código ASCII es el '\0'.
 * Post: Devuelve el valor numérico del natural almacenado en «sec»
 */
int valor(const char sec[]) {
    // Por hacer
}


/*
 * Pre:  «a» y «b» almacenan sendas cadenas de caracteres con las secuencias
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
void sumar(const char a[], const char b[], char suma[]) {
    // Por hacer
}


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
void calcularImagen(const char numero[], char imagen[]) {
    // Por hacer
}


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
bool esCapicua(const char numero[]) {
    // Por hacer
}
