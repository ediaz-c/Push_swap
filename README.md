# Push_swap
<h2 align="center"><a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/clfb0vfvr000608l3yax664zq/project/3079265" alt="ediaz--c's 42 push_swap Score" /></a></h2>

Este proyeto permite ordenar números utilizando dos stacks, denominados **a** y **b**, siguiendo una serie de reglas específicas. El objetivo es ordenar los números en el stack a en orden ascendente.
## Movimientos disponibles
|Movimiento|Nombre|Descripición|
|:----:|:--------:|:---------|
|sa|swap a|Intercambia los dos primeros elementos encima del stack a. No hace nada si hay uno o menos elementos.|
|sb|swap b|Intercambia los dos primeros elementos encima del stack b. No hace nada si hay uno o menos elementos.|
|ss|swap a y swap b|swap a y swap b a la vez|
|pa|push a|Toma el primer elemento del stack b y lo pone encima del stack a. No hace nada si b está vacío.|
|pb|push b|Toma el primer elemento del stack a y lo pone encima del stack b. No hace nada si a está vacío|
|ra|rotate a|Desplaza hacia arriba todos los elementos del stack a una posición, de forma que el primer elemento se convierte en el último.|
|rb|rotate b|Desplaza hacia arriba todos los elementos del stack b una posición, de forma que el primer elemento se convierte en el último.|
|rr|rotate a y rotate b|Desplaza al mismo tiempo todos los elementos del stack a y del stack b una posición hacia arriba, de forma que el primer elemento se convierte en el último.|
|rra|reverse rotate a|Desplaza hacia abajo todos los elementos del stack a una posición, de forma que el último elemento se convierte en el primero|
|rrb|reverse rotate b|Desplaza hacia abajo todos los elementos del stack b una posición, de forma que el último elemento se convierte en el primero|
|rrr|reverse rotate a y reverse rotate b|Desplaza al mismo tiempo todos los elementos del stack a y del stack b una posición hacia abajo, de forma que el último elemento se convierte en el primero.|
## Uso
    $ git clone https://github.com/ediaz-c/push_swap.git push_swap
    $ cd push_swap
    $ make
    $ ./push_swap {numeros enteros}
### Ejemplo
    $ ./push_swap 8 3 4 5
      sa
      pb
      ra
      pa
### Checker
El <code>checker_OS</code> es un archivo de ayuda para comprobar que el stack se ha ordenado o no. En caso de que se haya ordenado correcctamente mostrará <code>OK</code>, y en caso contrario <code>KO</code>

    $ ./push_swap 8 3 4 5 | ./checker_OS 8 3 4 5
      OK
      
    $ ARG="4 8 -2 0 -48"; ./push_swap $ARG | ./checker_OS $ARG
      OK
