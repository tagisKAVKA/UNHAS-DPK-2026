#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//TUGAS:  
//Buat Perkalian matrix 4x4 x 4x1
// a b c d   x1
// e f g h   x2
// i j k l   x3
// m n o p   x4

int main(){

    srand(time(NULL));
    int matrixA[4][4];
    int matrixB[4];
    int result[4];

    for(int i = 0; i < 4; i++){
        matrixB[i] = rand() % 100 + 1;
        for(int j = 0; j < 4; j++){
            matrixA[i][j] = rand() % 100 + 1;
        }
    }
    
printf("|      A       |  B  |HASIL|\n");
printf("| w | x | y | z|     |     |\n\n");
int temp = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%3d ", matrixA[i][j]);
        temp += matrixA[i][j] * matrixB[i];
        }
    
        printf(" %2d ", matrixB[i]);
            
    result[i] = temp;
    printf("  %3d \n", result[i]);
    temp = 0;
    }

    return 0;
}