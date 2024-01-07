#ifndef MATCH_H
#define MATCH_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

    struct Match {
    
        int year;
        char hostCountry[50];
        int matchID;
        char type[50];
        char date[50];
        char location[50];
        char team1[50];
        char team2[50];
        int score1;
        int score2;
    };

    void readMatchesData(struct Match **matches, int *numMatches);
    
    struct Match findMatchById(struct Match *matches, int size, int matchID);

    void printMatch (struct Match match);

    int findGoalsByYear(struct Match *matches, int size, int year);

    void printMatchesByYearAndCountry(struct Match *matches, int size, int year, char* country);
    
    void findMatchIDsByCriteria(struct Match *matches, int size);
    
    
    

#endif