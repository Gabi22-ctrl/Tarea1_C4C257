#include <stdio.h>
int diagonal_mas_larga(int n, int matrix[n][n]){
    int diagonal = 0;
    int maximo = 0;
    for ( int k = n -1; k >= 0; k--){ //de la esquina inferior derecha a la diagonal central
        for (int i = k, j = n-1; i < n; i++, j--){
            if (matrix[i][j] == 1){
                diagonal++;
                if (diagonal > maximo){
                    maximo = diagonal;

                }
            }
            else {
                diagonal = 0;
            }

        }
    }
    //de la central a la esquina superior izquierda
    for (int k = n-2; k>=0; k--){ //la variable k permite el paso entre diagonales mediante el control de la posicion inicial j
        for (int i = 0, j = k; j >= 0; i++, j--){
            if (matrix[i][j] == 1){
                diagonal++;
                if (diagonal > maximo){ //si la cantidad de 1s encontrada es mayor al maximo actual
                    maximo = diagonal; //cambia el maximo actual con el valor de la diagonal
                    //printf("maximo = %i\n",maximo);
                }
            }
            else {
                diagonal = 0; //si se encuentra algo que no es 1, reinicia el contador
            }
        }
    }
    return maximo;
}

int main() {
    FILE *archivo; //defino un puntero
    int filas = 0, columnas = 0;
    char ch; // para leer cada caracter de la matriz
    int current_cols = 1; //cuenta las columnas de cada fila 
    int max_cols = 0; //guarda el maximo de columas por fila
    int rows = 1;

    // Abrimos el archivo en modo lectura
    archivo = fopen("T1_C4C257.txt", "r"); //defino la direccion del puntero y le doy solo permiso de lectura

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    else{
        while ((ch = fgetc(archivo)) != EOF) {
            if (ch == '\n') {
                rows++;
                if (current_cols > max_cols) {
                    max_cols = current_cols;  // actualizamos el número máximo de columnas
                }
                current_cols = 0;
            } else if (ch == ' ' || ch == '\t') {
                current_cols++;
            }
        
        }

    }
    rewind(archivo); //devuelvo el puntero al inicio del archivo
    int matriz[rows][max_cols];
    for (filas = 0; filas < (rows); filas++){
        for (columnas = 0; columnas < max_cols; columnas ++){
            fscanf(archivo, "%d", &matriz[filas][columnas]);
        }

    }
    // Cerrar el archivo
    fclose(archivo);
    if (rows != max_cols){ //verifico que sea cuadrada
        printf("Error; la matriz no es cuadrada");
        return 1;
    }
    
    for (filas = 0; filas < (rows); filas++) {
        for (columnas = 0; columnas < max_cols; columnas++) {
            if (matriz[filas][columnas] != 1 && matriz[filas][columnas] != 0){
                printf("La matriz no es binaria\n"); //recorro la matriz para verificar que sea binaria
                return 1;
            }
            
        }
        printf("\n");
    }
    printf("La matriz utilizada corresponde a\n");
    for (filas = 0; filas < (rows); filas++) { //imprime la matriz
        for (columnas = 0; columnas < max_cols; columnas++) {
            printf("%d",matriz[filas][columnas]);
            }
            printf("\n");
        
            
        }
        printf("\n");
        int encontrada = diagonal_mas_larga(rows,matriz); //llamo a la funcion que encuentra la diagonal mas larga
        printf("\nDiagonal mas larga : %i\n", encontrada); //imprimo el resultado
    
    
    
        return 0;
    }