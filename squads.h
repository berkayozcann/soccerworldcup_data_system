#ifndef SQUAD_H
#define SQUAD_H

    struct Squad {
    
        int year;
        char hostCountry[70];
        char country[70];
        int jerseyNumber;
        char position[70];
        char name[70];
        char clubName[70];
        char clubCountry[70];
    
    };
    

    void readSquadsData(struct Squad **squads, int *numSquads);

    void printPlayer(struct Squad player);

    void printSquadByYearCountry(struct Squad *squads,  int size, int year, char *country);

    int findNumberOfPlayers(struct Squad *squads, int size, int year, char *country);
    
    void findPlayerByName(struct Squad *squads, int size, char *name);

 #endif
