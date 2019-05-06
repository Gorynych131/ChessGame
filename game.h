#ifndef DECK_H
#define DECK_H

#include "deck.h"
class deck;

void newScreen();
void printStep(int *movement);
int getPLayer(int a);
void printPlayer(int a);
//void waitSec(int a);

int getStep();

void game();
bool checkMovement(int *movement);
void makeStep(deck desk);

#endif
