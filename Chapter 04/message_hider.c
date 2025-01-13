/*
  $ gcc message_hider.c encrypt.c -o message_hider

  $ gcc -c encrypt.c          // Genera "encrypt.o"
  $ gcc -c *.c                // Genera archivos ".o" en base a los ".c"
  $ gcc *.o -o message_hider  // Linkea los ".o" creando el ejecutable
*/

#include <stdio.h>
#include "encrypt.h"

int main() {
  char msg[80];
  while ( fgets(msg, 80, stdin) ) {
    encrypt(msg);
    printf("%s\n", msg);
  }
  return 0;
}

