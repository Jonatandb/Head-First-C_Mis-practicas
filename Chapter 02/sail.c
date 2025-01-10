#include <stdio.h>

void go_south_east(int *lat, int *lon) {
  (*lat)--; // = *lat - 1;
  (*lon)++; // = *lon + 1;
  // printf("lat:   %p\n", lat);
  // printf("lon:   %p\n", lon);
  // printf("lon+1: %p\n", lon+1);
  //*(lon+1)= *lat - 1; ✅
}

int main() {
  int latitude = 32;
  int longitude = -64;
  go_south_east(&latitude, &longitude);
  //printf("&latitude : %p\t (&latitude) + 1 : %p\n", &latitude, (&latitude)+1);
  //printf("&longitude: %p\t (&longitude) + 1: %p\n", &longitude,(&longitude)+1);
  //printf("Latitude: %i, \t Longitude: %i\n", latitude, longitude);
  printf("Now at: [%i, %i]\n\n", latitude, longitude);

  return 0;
}