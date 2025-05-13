# Tarea1_C4C257
TAREA 1:
Este laboratorio permite recorrer una matriz, en la dirección especificada, que se encuentra en un archivo de texto plano con el fin de encontrar la secuencias de 1s consecutiva más larga. En primer lugar, la función diagonal_mas_larga recorre la matriz en dos fases; de la esquina inferior derecha a la diagonal central y luego, de la diagonal central a la esquina superior izquierda.En cada recorrido, se cuenta la cantidad de 1s encontrados de manera en la que si se ecnuentra un 1, incrementa el contador en 1 y si no, lo  reinicia. En segundo lugar, la función main utiliza el puntero FILE*archivo para lograr abrir el archivo con fopen en modo de lectura. Con el fin de contar las filas y las columnas de la matriz, se utiliza fgetc para carácter por carácter el archivo. Al tener la cantidad de columnas, se compara con el número de filas encontrada y se determina si es cuadrada y si no lo es, el programa para. Luego se usa fscanf para leer los números de la matriz y guardarlos en una matriz anteriormente creada. Una vez guardada, se valida que la matriz sea binaria y si no lo es, el programa para. Por último, se llama la primera función creada y se le pasa como argumentos la matriz y el tamaño de esta para que se imprime la secuencias de 1s más larga. 
Este programa compila utilizando el comando gcc -Wall archivo-fuente.c -o ejecutable, donde el comando -wall archiva todas las advertencias del compilador, lo cual ayuda identificar posibles errores o problemas del código.
A continuación se muestran ejemplos de salidas del código. 
![Captura desde 2025-05-12 22-09-42](https://github.com/user-attachments/assets/1e9561da-dc60-46ce-bf47-d2e612e01553)
![Captura desde 2025-05-12 22-17-23](https://github.com/user-attachments/assets/9446e550-2d4b-4aa0-bf97-701baa2bce83)
![Captura desde 2025-05-12 22-19-03](https://github.com/user-attachments/assets/bf8e4cfe-c4e1-4ea4-99fd-4bc82fe83f8d)

![Captura desde 2025-05-12 22-15-28](https://github.com/user-attachments/assets/d081b8dc-63da-4312-937e-18cbd9199d20)
![Captura desde 2025-05-12 22-16-31](https://github.com/user-attachments/assets/be15e368-dbe0-4569-b910-f21ed7b2be20)

