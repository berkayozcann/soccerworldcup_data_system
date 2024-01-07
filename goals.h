#ifndef GOALS
#define GOALS

    struct Goal {
        
        int year;
        char hostCountry[50];
        int matchID;
        char team[50];
        char player[50];
        int minute;
        
    };
    
    void readGoalsData(struct Goal **goals, int *numGoals);
    void findGoalsByName(struct Goal *goals, int size, char* name);
    void printGoal (struct Goal goal);
    
#endif
