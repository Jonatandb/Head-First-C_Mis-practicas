# Head First C [1st ed.] - My practices

- [O'Reilly - Head First C Book](https://www.oreilly.com/library/view/head-first-c/9781449335649/)

- [O'Reilly - Head First C Book - Errata](https://www.oreilly.com/catalog/errata.csp?isbn=0636920015482)

- [O'Reilly - Head First C Book - Github Repository](https://github.com/dogriffiths/HeadFirstC)

- [O'Reilly - Head First C Book - Arduino lab code](https://dogriffiths.github.io/HeadFirstC/)
---

### Generación de un ejecutable mediante el uso de Make:

Para enlazar y compilar un archivo `.c` en un ejecutable:

  `make nombreArchivo` (sin el ".c")

Para ejecutarlo:

  `./nombreArchivo`

- Para que make funcione de esta manera, se debe crear un archivo en la carpeta del archivo `.c`, llamado `Makefile` (sin extensión), que contenga lo siguiente:
```
# Compilación simple con gcc
%: %.c
gcc $< -o $@ && echo "Compilación exitosa: $@"
```