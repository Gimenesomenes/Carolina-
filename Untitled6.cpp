#include <stdio.h>
#include <stdlib.h>
int main( int argc, char *argv[]) {
int numero;
int divisor;
int resto;
 printf( "Digite o numero: ");
 scanf( "%d", &numero);
 for (divisor = 1; divisor <= numero; divisor++) {
 resto = numero % divisor;
 if (resto == 0) {
 printf( "Divisor encontrado: %d \n", divisor);
 }
 }
return 0;
}
