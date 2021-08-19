/**
 * Un programa que recibe dos argumentos enteros a y b
 * Si a > b el programa termina e imprime el mensaje:
 * Error: a tiene que ser menor o igual a b
 * Si a <= b el programa busca e imprime todos los enteros divisibles por 3
 * en el rango [a, b]
 * Ejemplo:
 * $ ./divisible 1 20
 * 3 6 9 12 15 18
 */
 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[]) {
   int a= atoi(argv[1]);
   int b= atoi(argv[2]);
   if (a%b != 0) {
     printf("Cannot divide these numbers\n");
   }
   return 0;
 }
