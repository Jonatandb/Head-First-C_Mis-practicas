#include <stdio.h>

typedef char *string;

void main() {

  string s = "0";
  char x = '0';
  printf("string s = \"0\";\n");
  printf("char   x = '0';\n\n");
  printf("\t\tchar\tdec\tbinary\n");
  printf("s[0]\t\t%c\t%i\t%b\n", s[0], s[0], s[0]);
  printf("x   \t\t%c\t%i\t%b\n", x, x, x);
  printf("s[1]\t\t%c\t%i\t%b\n", s[1], s[1], s[1]);

}