#include "goals.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void readGoalsData(struct Goal **goals, int *numGoals) {

    FILE *file = fopen("/home/berkayozcan/workspaces/soccerworldcup_data_system/soccerworldcup_data_system/datasets/goals.csv", "r");
    
    if (!file) {
        perror("Error opening goals");
        exit(EXIT_FAILURE);
    }

    *goals = malloc(sizeof(struct Goal)); // Allocate memory for the first Goal
    
    //Read first line to avoid conflicts in formatting.
    char line[1000];
    fscanf(file, "%999[^\n]%*c", line);
    

    int result=0;

    while (fscanf(file, "%d,%49[^,],%d,%49[^,],%49[^,],%d\n",
           &(*goals)[*numGoals].year, 
           (*goals)[*numGoals].hostCountry,
           &(*goals)[*numGoals].matchID, 
           (*goals)[*numGoals].team,
           (*goals)[*numGoals].player, 
           &(*goals)[*numGoals].minute) == 6) 
    {
        if (result == EOF) {
            if (feof(file)) {
            // End of file reached
            break;
        } else {
            // An error occurred during fscanf
            perror("Error reading from file");
            exit(EXIT_FAILURE);
            }
        }
                             
//      printf("%d %s %d %s %s %d\n", 
//            (*goals)[*numGoals].year, 
//            (*goals)[*numGoals].hostCountry,
//            (*goals)[*numGoals].matchID, 
//            (*goals)[*numGoals].team,
//            (*goals)[*numGoals].player, 
//            (*goals)[*numGoals].minute);         
               
        (*numGoals)++;
        *goals = realloc(*goals, (*numGoals + 1) * sizeof(struct Goal));
        
        if (!*goals) {
            perror("Error reallocating memory");
            exit(EXIT_FAILURE);
        }

        
    }

    fclose(file);
}


void findGoalsByName(struct Goal *goals, int size, char* name){
    int playerFound = 0;
    for (int i = 0; i < size; i++) {
        // Check if the current squad member matches the criteria
        if (strcmp(goals[i].player, name) == 0) {
            playerFound = 1;
            printf("%s Year:%d Team:%s Min:%d\n", 
            goals[i].player, 
            goals[i].year,
            goals[i].team, 
            goals[i].minute);  
        }
    }
    if (!playerFound)
        printf("\nPlayer not found!");

}

void printGoal(struct Goal goal){
     printf("%d %s %d %s %s %d\n", 
            goal.year, 
            goal.hostCountry,
            goal.matchID, 
            goal.team,
            goal.player, 
            goal.minute);  
}
        