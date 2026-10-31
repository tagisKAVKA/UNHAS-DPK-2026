#include <stdio.h>

int main(int argc, char * argv[]){
    if( argc < 2){
        printf("Argumen program kurang");
        printf("\nCoba tambahkan argumen seperti %s %s %s", argv[0], "Baso", "Besse");
        return -1;
    }
    printf("\nHalo %s", argv[1]);
    printf("\nHalo %s", argv[2]);
    return 0;
}   

//REPISOTORY DPK 2026
//ISINYA PROGRAM TUGAS.