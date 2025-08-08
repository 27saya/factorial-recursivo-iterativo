# factorial-recursivo-iterativo

1. Proposito de la tarea: El proposito de esta tarea fue evaluar y comparar la eficicncia de dos formas diferentes de calcular el factorial de un mismo número usando el metodo recursivo (facto_r) y el metodo iterativo (facto_i). Nos centramos en el tiempo de ejecucion y el uso de la memoria para ver cual de los dos es mas eficiente segun n (el numero a calcular).
   
2. ¿Como se implementaron las funciones?: Para el facto_r, la funcion se llama a si misma reduciendo el valor de n cada vez mas hasta llegar al caso n<=1, donde retorna 1, mientras que para el facto_i, se utiliza un bucle for para multiplicar los números desde 2 hasta n, acumulando el resultado en una variable con el mismo nombre.

3. Metodos para medir el tiempo de ejecución y memoria:
   - Tiempo de ejecución: Utilicé time.perf_counter() para registrar el tiempo antes y despues de ejecutar cada función, asi obteniendo la duración.
   - Uso de memoria: Utilicé la librería memory_profiler y la función memory_usage() para registrar la memoria usada antes yb despues de usar cada función.

4. Resumen de hallazgos: El metodo iterativo fue consistentemente mas rapido que el recursivo, notandose incluso mas en valores mas grandes de n. El metodo recursivo consumió mas memoria.
En cuanto a las graficas, vemos que en la de tiempo, el metodo iterativo crece mas lentamente a medida que n va aumentando, mientras que en la grafica de memoria, el recursivo presenta un consumo mayor e irregular, nada similar al iterativo, donde vemos que es mas estable.
