//
// Created by cavaz on 12/01/2018.
//

#ifndef GOP_UTILS_H
#define GOP_UTILS_H

#include "player/Player.h"

char *my_itoa(int num, char *str);
void cls();
void clearCin();
void pause();
void show_players_position(char* c,const int pos,Player* players[],const int numPlayers);
int next1to6(int i);
void my_replace(char* s,const char sc,const char new_char);


#endif //GOP_UTILS_H
