#include "match.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>




void readMatchesData(struct Match **matches, int *numMatches) {
    
    FILE *file = fopen("/home/berkayozcan/workspaces/soccerworldcup_data_system/soccerworldcup_data_system/datasets/matches.csv", "r");
    
    if (!file) {
        perror("Error opening matches.csv");
        exit(EXIT_FAILURE);
    }

    *matches = malloc(sizeof(struct Match));
    
    //Read first line to avoid conflicts in formatting.
    char line[1000];
    fscanf(file, "%999[^\n]%*c", line);
    
    int result=0;



  while (fscanf(file, "%d,%49[^,],%d,%49[^,],%49[^,],%49[^,],%49[^,],%49[^,],%d,%d\n",
           &(*matches)[*numMatches].year,
           (*matches)[*numMatches].hostCountry,
           &(*matches)[*numMatches].matchID,
           (*matches)[*numMatches].type,
           (*matches)[*numMatches].date,
           (*matches)[*numMatches].location,
           (*matches)[*numMatches].team1,
           (*matches)[*numMatches].team2,
           &(*matches)[*numMatches].score1,
            &(*matches)[*numMatches].score2) == 10) 
    {
        if (result == EOF) {
            if (feof(file)) {
            // End of file reached
            break;
        }else {
            // An error occurred during fscanf
            perror("Error reading from file");
            exit(EXIT_FAILURE);
            }
        }                                  
        
        

//        printf("%d %s %d %s %d-%02d-%02d %s %s %s %d %d\n",
//               (*matches)[*numMatches].year,
//               (*matches)[*numMatches].hostCountry,
//               (*matches)[*numMatches].matchID,
//               (*matches)[*numMatches].type,
//               (*matches)[*numMatches].date.tm_year + 1900,
//               (*matches)[*numMatches].date.tm_mon + 1,
//               (*matches)[*numMatches].date.tm_mday,
//               (*matches)[*numMatches].location,
//               (*matches)[*numMatches].team1,
//               (*matches)[*numMatches].team2,
//               (*matches)[*numMatches].score1,
//               (*matches)[*numMatches].score2);

        (*numMatches)++;
        *matches = realloc(*matches, (*numMatches + 1) * sizeof(struct Match));
        
        if (!*matches) {
            perror("Error reallocating memory");
            exit(EXIT_FAILURE);
        }

        
    }

    fclose(file);
}

void printMatch(struct Match match){
    if (match.year == 0)
        printf("Match Not Found");
    else{
        printf("%d %s %d %s %s %s %s %s %d %d\n",
                match.year,
                match.hostCountry,
                match.matchID,
                match.type,
                match.date,
                match.location,
                match.team1,
                match.team2,
                match.score1,
                match.score2);
    }
}



struct Match findMatchById(struct Match *matches, int size, int matchID) {
    struct Match notFoundMatch = {0}; // Assuming matchID cannot be 0 for a valid match

    for (int i = 0; i < size; ++i) {
        if (matches[i].matchID == matchID) {
            return matches[i]; // Match found, return the Match structure
        }
    }

    // Match not found, return a default Match structure (you can modify this behavior)
    return notFoundMatch;
}


int findGoalsByYear(struct Match *matches, int size, int year) {
    int totalGoals = 0;

    for (int i = 0; i < size; ++i) {
        if (matches[i].year == year) {
            totalGoals += matches[i].score1 + matches[i].score2;
        }
    }

    return totalGoals;
}

void printMatchesByYearAndCountry(struct Match *matches, int size, int year, char* country){
     for (int i = 0; i < size; ++i) {
        if (matches[i].year == year && (strcmp(matches[i].team1, country) == 0 || strcmp(matches[i].team2, country) == 0 )) {
            printMatch(matches[i]);
        }
    }
}

void findMatchIDsByCriteria(struct Match *matches, int size) {
    int year;
    char team1[50], team2[50];

    // Get user input for the criteria
    printf("Enter the year : ");
    scanf("%d", &year);
    
    printf("Reminding! The order of the teams is important.\n");

    printf("Enter team1 : ");
    scanf("%s", team1);

    printf("Enter team2 : ");
    scanf("%s", team2);

    // Search for matching match IDs
    printf("\nMatching Match ID...\n");
    for (int i = 0; i < size; i++) {
        if (matches[i].year == year && strcmp(matches[i].team1, team1) == 0 && strcmp(matches[i].team2, team2) == 0) {
            printf("Match ID: %d\n", matches[i].matchID);
        }
    }
}


