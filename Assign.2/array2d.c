#include <stdio.h>

int main(int argc, char *argv[]) {
    
    char simbol[][3] = {{'X','O', 'X'}, {'O','X', 'O'}, {'X','O', 'X'}};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
        printf(" %c ",  simbol[i][j]);
            }
        printf("\n");
    }



    return 0;
}