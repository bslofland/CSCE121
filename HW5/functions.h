//
// Created by Brendan Lofland on 10/2/19.
//

#ifndef HW5_FUNCTIONS_H
#define HW5_FUNCTIONS_H

int readPrefs(char fileName[], int ngames, int prefs[]);

int readPlan(char fileName[], int ngames, int plan[]);

int computeFunLevel(int start, int duration, int gamePref[], int ngames, int plan[]);

int findBestVacation(int duration, int gamePrefs[], int ngames, int plan[]);

const int MAX_NB_GAMES = 200;
const int MAX_TITLE_SIZE = 128;

int readGameTitles (char fileName[], int ngames,
                    char  gameTitles[MAX_NB_GAMES][MAX_TITLE_SIZE]);

void printGamesPlayedInVacation(int start, int duration, int plan[],
                                char gameTitles[MAX_NB_GAMES][MAX_TITLE_SIZE],
                                int ngames);

#endif //HW5_FUNCTIONS_H
