/* Qué: TP0 - Hello World
 * Instalacion de compilador de c, manejo de github, salida a un archivo de un hello world
 * Maria Musante (TP individual)
 * 20240401
 */

#include <stdio.h>
int main() {
   FILE* f = fopen("../output.txt", "w+");
   fprintf(f,"Hola mundo :)");
   return 0;
}