/*
 * Tutorial 4 Jeopardy Project for SOFE 3950U / CSCI 3020U: Operating Systems
 *
 * Copyright (C) 2015, <Adam Beckett May (100487239), Daniel Ola (100523811), Robert Kocovski (100536625), Andrew Lau (100522457)>
 * All rights reserved.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "questions.h"
#include "players.h"
#include "jeopardy.h"

// Put macros or constants here using #define
#define BUFFER_LEN 256
#define NUM_PLAYERS 4

// Put global environment variables here

// Processes the answer from the user containing what is or who is and tokenizes it to retrieve the answer.
void tokenize(char *input, char **tokens);

// Displays the game results for each player, their name and final score, ranked from first to last place
void show_results(player *players, int num_players);
{
 	for (int i = 0; i < 4; i++) {
		printf("%s  %d", players[i].name, players[i].score);
}

int main(int argc, char *argv[])
{
    // An array of 4 players, may need to be a pointer if you want it set dynamically
    player players[NUM_PLAYERS];

    // Input buffer and and commands
    char buffer[BUFFER_LEN] = { 0 };

    // Display the game introduction and initialize the questions
    initialize_game();

    // Prompt for players names
    for (int i=0; i < NUM_PLAYERS; i++)
    {
		printf("Enter name of player %d", i+1);
		scanf("%s", &player[i].name);
		}
    // initialize each of the players in the array
    for (int i=0; i < NUM_PLAYERS; i++) {
    		printf("Enter name of player %d", i+1);
    		scanf("%s", &player[i].name);
    		}
    // Perform an infinite loop getting command input from users until game ends
    while (fgets(buffer, BUFFER_LEN, stdin) != NULL)
    {
        // Call functions from the questions and players source files
        display_categories();
        	display_questions(category, value);
        // Execute the game until all questions are answered

        // Display the final results and exit
        show_results(players, NUM_PLAYERS);
    }
    return EXIT_SUCCESS;
}
