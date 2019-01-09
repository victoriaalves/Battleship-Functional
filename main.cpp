#include "game.h"
#include <time.h>

int main(){
    srand(time(NULL));   // change the random seed
    bool print = false;
    int  gameModifier;

    game newGame;
    input gameInput;
    gameInput.setGamePrinter(&newGame.printer); // we must pass the printer to the gameInput
    
    newGame.printer.showGameRules();
    gameModifier = gameInput.getBeginInput();

    newGame.begin(gameModifier);

    newGame.printer.showGame(newGame.getUserPlayer(), newGame.getPcPlayer()); // deus isso vai ser dificil:
        // basicamente, a impressão tava separada de game, então tinha que passar como parametro user e pc toda vez
        // mas agora a impressão ta dentro do jogo então talvez a gente possa tirar isso e colocar o getUserPlayer dentro da impressão mesmo(pontodeinterrogação)
        // pfvr vejam isso. Eu acho melhor desacoplar a impressão, mas talvez não faça sentido pq a impressão _é_ do jogo então idk
    while (!newGame.getIsGameOver()){
        newGame.playerTurn();
        if (print){
            newGame.printer.showGame(newGame.getUserPlayer(), newGame.getPcPlayer());
            print = false;
        }
        else
            print = true;
    }
    newGame.printer.showGameOver();
    exit(0);
}

// que main top em gente