#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //for linux
// #include "windows.h" // for windows

#include "deck.h"
#include "game.h"

/*
void newScreen(){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
}
*/
void newScreen(){
    system("clear");
}
void printStep(int *movement){
    
    printf("\nLast step was %c%d --> %c%d\n", backtranslateAdress(numTocol(movement[0])), numToline(movement[0]), backtranslateAdress(numTocol(movement[1])), numToline(movement[1]));
}
int getPLayer(int a){
    return a % 2;
}
void printPlayer(int a){
    if(a == 1){
        printf("WHITE\n");
    }
    else{
        printf("BLACK\n");
    }
}
/*
void waitSec(int a){
    
    int i;
    printf("Wait for %d", a);
    for(i = a; i > 0; i--){
        sleep(1);
        printf("%d", i);
    }
    printf("\n");
}
*/
void getStep(int *movement){
    
    int x1, y1;
    int x2, y2;
    char *z = new char[2];
    
    
    printf("From: ");
    scanf("\n%c", &z[0]);
    scanf("%d", &x1);
    y1 = translateAdress(z[0]);
    
    movement[0] = pairToint(x1, y1);
    
    
    printf("To: ");
    scanf("\n%c", &z[1]);
    scanf("%d", &x2);
    y2 = translateAdress(z[1]);
    
    movement[1] = pairToint(x2, y2);
    
}



bool checkMovement(int *movement){
    return true;
}


void makeStep(deck desk){
	
    int *movement = new int[2];
    
    getStep(movement);
        
    
    if(checkMovement(movement)){
        desk.update(movement);
    }
    
    newScreen(); 
    desk.printDeck();
    printStep(movement);
    
    sleep(2);
    
    newScreen();
    desk.symmetryDeck();
    desk.printDeck();
    printStep(movement);
    
    
}


void game(){
	
    newScreen();
	deck desk;

	bool finish = false;
	int step;
	desk.printDeck();
	for(step = 1; step < 4; step++){
		
        printPlayer(getPLayer(step));
		makeStep(desk);
        
	}

}

