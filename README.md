This project has been created as part of the 42 curriculum by dcuenca.

DESCRIPTION
Push Swap es un proyecto donde el objetivo es crear un programa que sea capaz de ordenar una pila de números enteros utilizando un conjunto limitado de operaciones.
El objetivo principal es conseguir que la ordenacion se produzca en el menor numero de movimientos posibles.

El programa trabaja con dos pilas, denominadas a y b, y solo puede manipularlas mediante un conjunto específico de operaciones predefinidas. Estas operaciones incluyen intercambios, rotaciones y movimientos de elementos entre pilas.

INSTRUCCIONES
El programa va a recibir como argumentos una lista de numeros enteros y va a mostrar por salida la secuencia de operaciones necesarias para ordenarlos en orden ascendente.
Al tener dos pilas:
- La pila A contiene todos los numeros proporcionados
- La pila B siempre empieza vacia y se utiliza de apoyo durante el proceso de ordenacioin.
El orden final nunca se muestra, pero si todos las operaciones realizadas.
Si los numeros ya estan ordenados, el programa no mostrará ninguna salida. En el caso de que los argumentos sean invalidos (valores no numericos, duplicados o fuera del rango permitido) el programa gestionara el error.

Explicacion de las diferentes operaciones:
-SA --> Intercambia los dos primeros elementos del stack A
-SB --> Intercambia los dos primeros elementos del stack B
-SS --> Intercambia los dos primeros elementos de ambos stack al mismo tiempo.
-PA --> Quita el primer elemento de B para ponerlo el primero de A
-PB --> Quita el primer elemento de A para ponerlo el primero de B
-RA --> Rota el stack A de manera que el prirmer elemento pasa a ser el ultimo.
-RB --> Rota el stack B de manera que el primer elemento pasa a ser el último.
-RR --> Rota ambos stack al mismo tiempo para que el primer elemento pase a ser el último.
-RRA --> Rota el stack A de manera que el ultimo elemento pasa a ser el primero.
-RRB --> Rota el stack B de manera que el último elemento pasa a ser el primero.
-RRR --> Rota ambos stack al mismo tiempo para que el ultimo elemento pase a ser el primero


Por último, se van a usar dos algoritmos de ordenación. Por un lado para cuando exista un input con una lista de 5 o menos elementos que se utilizará un formato más "lógico" y para el resto utilizaré radix.

RESOURCES
En lo referente al uso de funciones de C, he consultado implementaciones propias de proyectos anteriores, ya que entiendo cómo funcionan, aunque no tengo completamente memorizada la sintaxis.
Respecto a la lógica y los conceptos de los algoritmos de ordenación, he revisado diversas fuentes en Internet para comprender cómo funcionan y conocer los distintos tipos, con el fin de poder estructurar el proyecto desde el inicio del desarrollo.
Por último, el uso de inteligencia artificial se ha limitado a una herramienta de apoyo conceptual, solicitándole ideas sin generar código, tanto para iniciar nuevas ideas desde cero como para revisar fragmentos de código existentes y detectar posibles errores en la lógica.