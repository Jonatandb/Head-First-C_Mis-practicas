#include <stdio.h>

/*
  Requiere: geo2json, spooky.csv
  Uso:  (./bermuda | ./geo2json) < spooky.csv > bermuda.json
    Genera un archivo .json (en realidad tiene un array con objetos js)
  Luego abrir: map_bermuda_rectangle.html (Necesita bermuda.json)
  * The < will send a file’s contents to the first process in the pipeline (bermuda).
    The > will capture the Standard Output from the last process in the pipeline (geo2json).
*/

int main()
{
  float latitude;
  float longitude;
  char info[80];
  while (scanf("%f,%f,%79[^\r\n]", &latitude, &longitude, info) == 3)
  {
    if ( (latitude > 26) && (latitude < 34) )
    {
      if ( (longitude > -76) && (longitude < -64) )
      {
        printf("%f,%f,%s\n", latitude, longitude, info);
      }
    }
  }
  return 0;
}