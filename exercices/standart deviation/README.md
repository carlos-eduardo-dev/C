## commands to compile library / comandos para compilar a biblioteca

πΊπΈ<br>
At the root of the project run the following commands

π§π· <br>
Na raiz do projeto execute os seguintes comandos

```console
$ gcc -c "lib/standart-deviation.c" -o "lib/standart-deviation.o"
$ ar rv "lib/lib_standart-deviation.a" "lib/standart-deviation.o"
$ gcc  main.c -L. "lib/lib_standart-deviation.a" -o main.bin -lm
```
