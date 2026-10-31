#include <stdio.h>
#include <stdbool.h>

char Position[9] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
int PosCheck[9] = {0};
int WinConditions[8][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 7}};

void ShowBoard();
void PutInBoard(char Picked, char token, int *round_ptr);
int CheckWinCondition();


int main(){
    bool isRunning = true;
    int status;
    printf("Tic-Tac-Toe\n");
    ShowBoard();
    
    int round = 1;
    while(isRunning){
        
        int turn = (round % 2 == 0) ? 2 : 1;
        char Picked;
        char token = (turn == 1) ? 'X':'O';


        printf("Player %d's turn ( %c ): ", turn, token);
        scanf(" %c", &Picked);
        PutInBoard(Picked, token, &round);

        ShowBoard();

        status = CheckWinCondition();
        if(status == 1){
            printf("Player %d WINS!", turn);
            isRunning = false;
        }else if( status == 2){
            printf("Its a TIE");
            isRunning = false;
        }else{
        round++;
        }
    }
    return 0;
}

void ShowBoard(){
    printf("\n");
    printf("[%c][%c][%c]\n", Position[0], Position[1], Position[2]);
    printf("[%c][%c][%c]\n", Position[3], Position[4], Position[5]);
    printf("[%c][%c][%c]\n", Position[6], Position[7], Position[8]);
    printf("\n");
}
void PutInBoard(char Picked, char token, int *round_ptr){
    switch(Picked){
        case 'a':
        if(PosCheck[0] == true){
            printf("Already filled!\n");
            (*round_ptr)--;
        }else{
            Position[0] = token;
            PosCheck[0]++;
        }
        break;
        case 'b':
        if(PosCheck[1] == true){
            printf("Already filled!\n");
            (*round_ptr)--;
        }else{
            Position[1] = token;
            PosCheck[1]++;
        }
        break;
        case 'c':
        if(PosCheck[2] == true){
            printf("Already filled!\n");
            (*round_ptr)--;
        }else{
            Position[2] = token;
            PosCheck[2]++;
        }
        break;
        case 'd':
        if(PosCheck[3] == true){
            printf("Already filled!\n");
            (*round_ptr)--;
        }else{
            Position[3] = token;
            PosCheck[3]++;
        }
        break;
        case 'e':
        if(PosCheck[4] == true){
            printf("Already filled!\n");
            (*round_ptr)--;
        }else{
            Position[4] = token;
            PosCheck[4]++;
        }
        break;
        case 'f':
        if(PosCheck[5] == true){
            printf("Already filled!\n");
            (*round_ptr)--;
        }else{
            Position[5] = token;
            PosCheck[5]++;
        }
        break;
        case 'g':
        if(PosCheck[6] == true){
            printf("Already filled!\n");
            (*round_ptr)--;
        }else{
            Position[6] = token;
            PosCheck[6]++;
        }
        break;
        case 'h':
        if(PosCheck[7] == true){
            printf("Already filled!\n");
            (*round_ptr)--;
        }else{
            Position[7] = token;
            PosCheck[7]++;
        }
        break;
        case 'i':
        if(PosCheck[8] == true){
            printf("Already filled!\n");
            (*round_ptr)--;
        }else{
            Position[8] = token;
            PosCheck[8]++;
        }
        break;
    }
}
int CheckWinCondition(){
    for(int i = 0; i < 8; i++){
        int a = WinConditions[i][0];
        int b = WinConditions[i][1];
        int c = WinConditions[i][2];
        if(Position[a] == Position[b] && Position[b] == Position[c]){
            return 1;
        }
    }

    int filledSlot = 0;
    for(int i = 0; i < 9; i++){
        if(PosCheck[i] == 1){
        filledSlot++;
        }
    }

    if(filledSlot == 9){
        return 2;
    }

    return 0;
}