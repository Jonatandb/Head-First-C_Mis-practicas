#include <stdio.h>
#include <stdlib.h>

int main() {
  char card_name[3];
  int val = 0;

  puts("Enter the card_name: ");
  scanf("%2s", card_name);

  switch (card_name[0]) {
    case 'K':
    case 'Q':
    case 'J':
      val = 10;
      break;
    case 'A':
      val = 11;
      break;
    default:
      val = atoi(card_name);
  }

  if((val > 2) & (val < 7)) {
    puts("Count has gone up");
  } else if ( val == 10 ) {
    puts("Count has gone down");
  }

  return 0;
}