#include <stdio.h>

int main() {

  char texto[] = "Jony";
  printf("char texto[] = \"Jony\";\n");
  printf("texto address: %p\n", texto);
  printf("&texto:        %p\n",    &texto);
  printf("&texto[0]:     %p\n", &texto[0]);
  printf("&texto[1]:     %p   -> '%c'\n", &texto[1], texto[1]);
  printf("texto[0]:      Character: '%c', Decimal: %i, Hexadecimal: %x, 'Pointer' (%%p): %p \n", texto[0], texto[0], texto[0], texto[0]);

  printf("\n");

  int num = 0;
  int *p = &num;
  printf("int num = 0;\n");
  printf("int *p = &num;\n");
  printf("Pointer *p address (%%p): %p \n", p);
  printf("Hexadecimal value %%lx:     %lx\n", p);
  printf("Long value %%li:          %li\n", p);
  printf("Decimal value %%i:        %i (Int overflow) \n", p);
  printf("Binary value %%b:         %b \n", p);

  printf("\n");

  int nums[] = {1,2,3};
  printf("int nums[] = {1, 2, 3};\n");
  printf("sizeof(nums): %d bytes (sizeof int -> %i * nums length: 3)\n", sizeof(nums), sizeof(int));

  printf("\n");

  printf("char texto[] = \"Jony\";\n");
  printf("sizeof(\"Jony\"):   %d bytes (Includes '\\0' character)\n", sizeof("Jony"));
  printf("sizeof(texto):    %d bytes (sizeof char -> %i * texto length: 5)\n", sizeof(texto), sizeof(char));

  printf("\n");

  printf("sizeof(char):           %d bytes\n", sizeof(char));
  printf("sizeof(int):            %d bytes\n", sizeof(int));
  printf("sizeof(long):           %d bytes\n", sizeof(long));

  char *char_pointer = NULL;
  printf("sizeof(char_pointer):   %d bytes\n", sizeof(char_pointer));
  int *int_pointer = NULL;
  printf("sizeof(int_pointer):    %d bytes\n", sizeof(int_pointer));
  long *long_pointer = NULL;
  printf("sizeof(long_pointer):   %d bytes\n", sizeof(long_pointer));

  return 0;
}