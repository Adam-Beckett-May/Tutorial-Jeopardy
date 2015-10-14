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
#include "questions.h"

// Initializes the array of questions for the game
void initialize_game(void)
{
    // initialize each question struct and assign it to the questions array
    strcpy(questions[0].category, categories[0]);
  	strcpy(questions[0].question, "The process to make code free of bugs.");
  	strcpy(questions[0].answer, "What is debugging?");
  	questions[0].value = 200;
  	questions[0].answered = false;
  	strcpy(questions[1].category, categories[0]);
  	strcpy(questions[1].question, "The building blocks of C and other programming languages.");
  	strcpy(questions[1].answer, "What is a function?");
  	questions[1].value = 400;
  	questions[1].answered = false;
  	strcpy(questions[2].category, categories[0]);
  	strcpy(questions[2].question, "Variables that point to data in memory");
  	strcpy(questions[2].answer,  "What is a pointer?");
  	questions[2].value = 800;
  	questions[2].answered = false;
  	strcpy(questions[3].category, categories[0]);
  	strcpy(questions[3].question, "A modifier that keeps variables in memory and does not affect scope.");
  	strcpy(questions[3].answer, "What is static?");
  	questions[3].value = 1600;
  	questions[3].answered = false;
  	strcpy(questions[4].category,  categories[1]);
  	strcpy(questions[4].question, "A divide-and-conquer sorting algorithm.");
  	strcpy(questions[4].answer, "What is merge sort?");
  	questions[4].value = 200;
  	questions[4].answered = false;
  	strcpy(questions[5].category, categories[1]);
  	strcpy(questions[5].question, "Something that is used to check the correctness of algorithms.");
  	strcpy(questions[5].answer, "What is a loop invariant?");
  	questions[5].value = 400;
  	questions[5].answered = false;
  	strcpy(questions[6].category, categories[1]);
  	strcpy(questions[6].question,  "An exponential series.");
  	strcpy(questions[6].answer, "What is geometric series?");
  	questions[6].value = 800;
  	questions[6].answered = false;
  	strcpy(questions[7].category, categories[1]);
  	strcpy(questions[7].question, "Notation that represents the sandwiched growth of a function.");
  	strcpy(questions[7].answer, "What is big theta?");
  	questions[7].value = 1600;
  	questions[7].answered = false;
  	strcpy(questions[8].category, categories[2]);
  	strcpy(questions[8].question, "A database language which you have been learning about recently.");
  	strcpy(questions[8].answer, "What is SQL?");
  	questions[8].value = 200;
  	questions[8].answered = false;
  	strcpy(questions[9].category, categories[2]);
  	strcpy(questions[9].question, "It restricts the values in a database state.");
  	strcpy(questions[9].answer, "What is a constraint?");
  	questions[9].value = 400;
  	questions[9].answered = false;
  	strcpy(questions[10].category, categories[2]);
  	strcpy(questions[10].question, "It allows data to be read and written into a database.");
  	strcpy(questions[10].answer,  "What is a transaction?");
  	questions[10].value = 800;
  	questions[10].answered = false;
  	strcpy(questions[11].category, categories[2]);
  	strcpy(questions[11].question, "By this schema at one level does not require that at higher levels to be changed.");
  	strcpy(questions[11].answer, "What is data independence?");
  	questions[11].value = 1600;
  	questions[11].answered = false;
}

// Displays each of the remaining categories and question dollar values that have not been answered
void display_categories(void)
{
    // print categories and dollar values for each unanswered question in questions array
    printf("PROGRAMMING:   ");
	  for (int i = 0; i < 4; i++)
    {
		if (questions[i].answered == false)
      {
			printf("%i  ",questions[i].value);
		  }
 	  }
	printf("\nALGORITHMS:   ");
	for (int i = 4; i < 8; i++)
  {
		if (questions[i].answered == false)
    {
			printf("%i   ",questions[i].value);
		}
	}
	printf("\nDATABASES:   ");
	for (int i = 8; i < 12; i++)
  {
		if (questions[i].answered == false)
    {
			printf("%i   ",questions[i].value);
		}
	}
}

// Displays the question for the category and dollar value
//test
void display_question(char *category, int value)
{
  for (int i=0; i < 12; i++)
  {
    if ((strcmp(question[i].category, category)==0 && question[i].value == value)
      printf("%s\n",question[i].question);
  }
}

// Returns true if the answer is correct for the question for that category and dollar value
bool valid_answer(char *category, int value, char *answer)
{
    // Look into string comparison functions
    for (int i=0; i < 12; i++)
    {
		    if (strcmp(question[i].category, category)==0 && question[i].value == value)
			     if (question[i].answer == answer)
				       return true;
	  }
    return false;
}

// Returns true if the question has already been answered
bool already_answered(char *category, int value)
{
    // lookup the question and see if it's already been marked as answered
    for (int i=0; i < 12; i++)
    {
		  if ((strcmp(question[i].category, category)==0 && question[i].value == value)
			   if (question[i].answered == true)
			      return true
	  }
    return false;
}
