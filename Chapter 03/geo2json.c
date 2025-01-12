#include <stdio.h>

/*
  Requiere: gpsdata.csv
  Uso:  ./geo2json < gpsdata.csv > data.json 2> errors.txt
    Genera un archivo .json (en realidad tiene un array con objetos js) y errors.txt
  Luego abrir: map.html (Necesita data.json)
*/

int main()
{
  float latitude;
  float longitude;
  char info[80];
  int started = 0;

  puts("[");
  while (scanf("%f,%f,%79[^\r\n]", &latitude, &longitude, info) == 3)
  {
    if (started) {
        printf(",\n");
    } else {
        started = 1;
    }
    // char currentChar;
    // int pos = 0;
    // do  {
    //   printf("%i -> %c\n", info[pos], info[pos]);
    // }  while( (currentChar = info[pos++]) != '\0');
    // break;
    if (latitude < -90 || latitude > 90)
    {
      //printf("Invalid latitude: %f\n", latitude);
      fprintf(stderr, "Invalid latitude: %f\n", latitude);
      return 2;
    }
    if (longitude < -180 || longitude > 180)
    {
      //printf("Invalid longitude: %f\n", longitude);
      fprintf(stderr, "Invalid longitude: %f\n", longitude);
      return 2;
    }
    printf("  { \"latitude\": %f, \"longitude\": %f, \"info\": \"%s\" }", latitude, longitude, info);
  }
  puts("\n]");
  return 0;
}