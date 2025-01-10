#include <stdio.h>
#include <string.h>

void find_track(char []);

char tracklist[][80] = {
  "I left my heart in Harvard Med School",
  "Newark, Newark - a wonderful town",
  "Dancing with a Dork",
  "From here to maternity",
  "The girl from Iwo Jima"
};
// Alternative: pointer array -> char *tracklist[] = {"str1", "str2"...}

int main() {
  char searchFor[80];

  printf("Search for: ");
  scanf("%79s", searchFor);

  find_track(searchFor);

  return 0;
}

void find_track(char searchFor[]) {
  for (int i = 0; i < 5; i++) {
    if (strstr(tracklist[i], searchFor)) {
      printf("Track %i: '%s'\n", i, tracklist[i]);
    }
  }
}