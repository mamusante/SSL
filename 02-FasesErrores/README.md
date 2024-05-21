Paso 1 preprocesador: 
b. no hubo errores para preprocesar hello2.c, en el archivo hello2.i creemos que el preprocesador copio todo lo que estaba en stdio.h y luego copio el codigo de hello2.c sacando el comentario que estaba en el medio de la declaracion del main
d. int printf(const char * restrict s, ...); es la declaracion de la funcion printf como la conocemos, dice que recibe un parametro s que es un puntero a un const char y los tres puntos significan que recibira un numero variable de parametros.
e. Las diferencias entre hello3.c y hello3.i son pocas, difieren solamente en que hello3.i posee al principio del archivo comentarios especiales para controlar el preprocesador

Paso 2 compilacion:
b. error: expected declaration or statement at end of input
Lo arregle agregando la llave de cierre del main
c. El objetivo del codigo hello4.s es desarmar cada una de las lineas de codigo de hello4.c en instrucciones mas pequenas, por ejemplo pushq, movq 

Paso 3 vinculacion:
b. Corregi prontf por printf
c. Al ejecutar devuelve : La respuesta es , esto acompanado de un numero que varia cada vez que lo ejecutamos, creemos que esto se debe a que la funcion printf al usar %d espera un decimal pero nunca se lo pasamos, por lo cual devuelve informacion "basura" que se encuentra en la memoria

Paso 5 Remocion de Prototipo
b. Al generar el ejecutable arroja solo warnings y una nota que dice que se debe incluir stdio.h o dar una declaracion de printf

Un prototipo de funcion es una declaracion de una funcion que especifica el nombre, los tipos de sus parametros y el tipo de retorno. Esto da al compilador la informacion necesaria para realizar verificaciones de tipo en las llamadas a la funcion.

El prototipo puede generarse de varias maneras, una forma es agregando archivos headers con #include, como hacemos al agregar stdio.h para la funcion printf; otra forma es declarar el prototipo de la funcion en el codigo fuente antes de definir o llamar a la funcion; la tercera opcion es que el prototipo este generado por herramientas de desarrollo, estas los generan automaticamente basandolse en las definiciones de las funciones.

Una declaracion implicita de una funcion es cuando llamamos a una funcion sin haber sido previamente declarada con un prototipo.

La especificación del lenguaje C, según el estándar C99 y posteriores, indica que todas las funciones deben estar declaradas antes de ser usadas. Esto significa que si llamas a una función sin haber incluido su prototipo (mediante un #include de un archivo de cabecera apropiado o una declaración previa), el compilador debe arrojar un error o al menos un warning sobre una declaración implícita de la función.
En C89, se permitía la declaración implícita de funciones, pero esta práctica fue desalentada en C99 y prohibida en C11.

En GCC las principales implementaciones hacen que se genere un warning sobre la declaracion implicita de funciones y, en configuraciones mas estrictas (c99 y posteriores), genera un error

Una funcion built-in es una funcion que esta implementada directamente por el compilador en lugar de estar definida en la biblioteca estandar. Estas funciones estan disponibles sin la necesidad de incluir headers.

GCC se comporta generando warnings y errores para declaraciones implicitas para alinearse con el estandar C99 y posteriores, que desaconsejan y prohiben las declaraciones implicitas de funciones, esto ayuda a detectar potenciales errores en el codigo relacionados con el uso incorrecto de funciones no declaradas.
GCC va en contra de la especificacion del lenguaje C, ya que segun su estandar se deben incluir los headers necesarios para el uso de funciones estandar como lo es printf, sin embargo GCC es mas permisivo y da cierta flexibilidad en la inclusion de headers para ciertas funciones estandar. GCC hace una inferencia de tipo para esta funcion estandar y por eso permite usarla.

Paso 6 Compilacion Separada: contratos y modulos

b. Puedo hacerlo usando extern, esto dice que la declaracion de mi funcion o variable estara en otro archivo

c. Arroja error en ambos casos, ya que pront f recibe un char y un int, solo dos argumentos

d. iv. La ventaja de incluir los contratos en el cliente y en el proovedor es que, del lado del cliente, nos evitamos escribir las declaraciones a mano en el codigo fuente, lo que puede generar errores, y del lado del proovedor asegura que haya consistencia en la informacion (si se cambia la definicion de la funcion) y, en caso de no ser asi, arrojara un error de compilacion y podremos arreglarlo.
