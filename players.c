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
#include "players.h"

// Returns true if the player name matches one of the existing players
bool player_exists(player *players, int num_players, char *name)
{
  // Loop for number of players
for (int i = 0, i < 4, i++)
  // If match return true
  if players.name[i] == name
  {
    return true;
  // If none match return false
  }
  else
  {
    return false;
  }
}

// Go through the list of players and update the score for the
// player given their name
void update_score(player *players, int num_players, char *name, int score)
{
  // Loop for number of players
for (int i = 0, i < 4 , i++)
{
// Set score to current player
players(i).score = score;
}
}
