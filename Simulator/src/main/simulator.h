#ifndef _SIMULATOR_
#define _SIMULATOR_

#include <stdio.h>
#include <stdlib.h>
#include "board.h"

int read_rules(FILE *in, int rules[],
               int *neighbourhood);//w specyfikacji ta funkcja byla w module main. Tu zwraca 0 przy powodzeniu lub 1 przy niepowodzeniu;
board_t simulate_generation(board_t previous_generation, int rules[], int neighbourhood);

int count_neighbour_alive(int x, int y, int neighbourhood,
                          board_t b); // zmiana w stos do specyfikacji: przyjmuje dodatkowo plansze b
char what_happens_with_cell(char current_state, int neighbours_alive,
                            int rules[]); // zmiana w stosunku do specyfikacji: i dostaje dodatkowo current_state oraz zwraca stan komorki w nastepnej generacji (0 lub 1)





#endif
