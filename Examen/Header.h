#pragma once
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <fstream>

using namespace std;



void SetColor(int ForgC);

void SetColor(int textColor, int backgroundColor);

void gotoxy(int xpos, int ypos);

void show_battlefield();

void show_battlefield_comp_comp();

void spacing_of_ships_manual(int &a,int &b,int size, int (&mas)[10][10]);

void spacing_of_ships_random_player(int(&mas)[10][10]);

void spacing_of_ships_random_comp(int(&mas)[10][10]);

void spacing_of_ships_random_comp_comp(int(&mas)[10][10]);

void spacing_of_ships_saved_player(int(&mas)[10][10], int& state);

void spacing_of_ships_saved_comp(int(&mas)[10][10], int& state);

void spacing_of_ships_saved_comp2(int(&mas)[10][10], int& state);

bool check_spacing_of_ships(int& a, int& b, int size, int(&mas)[10][10], int&keys);

void random_shoot(int(&mas_play)[10][10], int(&mas_comp)[10][10], int& state_play, int& state_comp);

void random_shoot_comp_comp(int(&mas_play)[10][10], int(&mas_comp)[10][10], int& state_play, int& state_comp);

void intelectual_shoot(int(&mas_play)[10][10], int(&mas_comp)[10][10], int& state_play, int& state_comp);

void intelectual_shoot_comp_comp(int(&mas_play)[10][10], int(&mas_comp)[10][10], int& state_play, int& state_comp);



//------------------Show menu


void show_menu(int key = -1);

void show_menu2(int key = -1);

void show_menu3(int key = -1);

void show_menu4(int key = -1);

void show_menu5(int key = -1);






