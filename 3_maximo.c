/**
 * Un programa que acepta un numero arbitrario de argumentos enteros
 * Imprime el maximo de los numeros
 */
 #include <stdio.h>
 #include <stdlib.h>

   int main(int argc, char const *argv[]) {
     printf("Cantidad de args: %d\n", argc );
   int max = 0;

     for (int i = 1; i < argc; i++) {
       if (atoi[i] > max) {
        max = atoi(argv[i])
       }
     printf("El maximo es: %d\n", max);

 }
