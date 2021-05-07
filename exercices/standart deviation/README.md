## commands to compile library / comandos para compilar a biblioteca

🇺🇸<br>
At the root of the project run the following commands

🇧🇷 <br>
Na raiz do projeto execute os seguintes comandos

```console
$ gcc -c lib/standart-deviation.c -o lib/standart-deviation.o
$ ar rv lib/lib_standart-deviation.a lib/standart-deviation.o
$ gcc  main.c -L. "./lib/lib_standart-deviation.a" -o main.bin -lm
```
