</>Markdown
## ¿Qué es .gitignore?
El archivo .gitignore sirve para indicar que archivos Git se debe ignorar y no subir al repositorio.

## ¿Por qué es conveniente incluirlo?
Es conveniente incluirlo porque evita subir los archivos que no queremos o que son innecesarios como archivos privados, temporales o ejecutables.

## ¿Cuándo se debe hacer? 
Se recomienda hacerlo al inicio del proyecto.

## Configuracion
Para ignorar un archivo llamado ignorado.txt:
Pasos: 
1. Crear el archivo .gitignore
2. Escribir en el archivo .gitignore el nombre del archivo a ignorar (ignorado.txt)
3. Crear el archivo a ignorar, ej: ignorado.txt
4. Al realizar el gid add, Gist ignorará ese archivo y no lo incluirá al repositorio.


## Resultados del punto 3-f
1. El codigo realiza una serie de operaciones sobre un numero entero utilizando punteros.
Primer invierte el numero, luego lo divide por 2 y finalmente le suma la suma de sus digitos.

funciones renombradas:
f_alpha --> Invertir el numero (Invierte los digitos del numero).
f_beta --> Dividir por dos(Divide el numero por 2).
f_gamma -->Sumar digitos (Calcula la suma de los digitos y la agrega al numero).
procesar_enigma -->Procesar numero(Ejecuta todas las operaciones en orden).

##Resultados del punto 3 g
1. Se agregó la libreria #include <stdio.h> al inicio del archivo para permitir la compilacion correcta.
2. Error en scanf("%d", valor1); 
Se agregó el & en valor1 --> &valor1.
3. En el return0 faltaba la ";" al final.
