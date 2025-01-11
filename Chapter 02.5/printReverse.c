#include <stdio.h>
#include <string.h>

void printReverse(char *s);

int main() {
  char name[]= "Jonatandb";
  printReverse(name);
  return 0;
}

void printReverse(char *s){
  size_t len = strlen(s);
  char *t = s + len - 1;
  while(t >= s) {
    printf("%c", *t);
    t = t-1;
  }
  puts("");
}


// C-Cross
// 1 mulberry
// 2 yrrebwarts
// 3 sharonfruit
// 4 tiurfiwik
// 5 blueberry
// 6 yrrebkcalb
// 7 starfruit
// 8 tiurfilgu