//
// Created by Brendan Lofland on 10/2/19.
//

#include "functions.h"
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


#define HW5_FUNCTIONS_H

int readPrefs(char fileName[], int ngames, int prefs[])
{
    ifstream fin;
    fin.open(fileName);
    if(!fin){
        return(-1);
    }

    return(0);
}

int readPlan(char fileName[], int ngames, int plan[])
{

    return(0);
}

int computeFunLevel(int start, int duration, int gamePref[], int ngames, int plan[])
{

    return (0);
}

int findBestVacation(int duration, int gamePrefs[], int ngames, int plan[])
{

    return (0);
}


int readGameTitles (char fileName[], int ngames,
                    char  gameTitles[MAX_NB_GAMES][MAX_TITLE_SIZE])
{
    ifstream fin;
    fin.open(fileName);
    if (!fin) { // error in opening the file
	return -1;
    }

    for (int i = 0; i < ngames; i++) {
	strcpy(gameTitles[i], "Unknown Title");
    }

    int gameid;
    char title[MAX_TITLE_SIZE];
    while (!fin.eof()) { // while not at the end of the file
	fin >> gameid;
	if (fin.good()) { // no error reading integer game
	    // read title as the rest of the line
	    if (gameid >= 0 && gameid < MAX_NB_GAMES) {
		// valid game
		// consume space; input is guaranteed to have only space before title
		char space;
		fin >> noskipws >> space;
		fin.getline(gameTitles[gameid], MAX_TITLE_SIZE);
	    } else {
		// ignoring invalid gameid, just consume title
		fin.getline(title, MAX_TITLE_SIZE);
	    }
	} else {
	    // read the rest of the line and ignore it
	    fin.clear();
	    fin.getline(title, MAX_TITLE_SIZE);
	}
    }

    return 0;
}

void printGamesPlayedInVacation(int start, int duration, int plan[],
                                char gameTitles[MAX_NB_GAMES][MAX_TITLE_SIZE],
                                int ngames)
{
    bool title_included[MAX_NB_GAMES];
    for (int i = 0; i < ngames; i++) {
	title_included[i] = false;
    }
    int gameid;
    for (int i = start; i < start + duration && i <= 365; i++) {
	gameid = plan[i];
	if (!title_included[gameid]) {
	    std::cout << gameTitles[gameid] << std::endl;
	    title_included[gameid] = true;
	    }
	}

}