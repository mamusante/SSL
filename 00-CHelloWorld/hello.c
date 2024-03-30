#include <stdio.h>
int main() {
   FILE* f = fopen("../output.txt", "w+");
   fprintf(f,"Hola mundo :)");
   return 0;
}