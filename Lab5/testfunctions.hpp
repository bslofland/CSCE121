//
//  functions.hpp
//  
//
//  Created by Brendan Lofland on 9/24/19.
//

#ifndef functions_hpp
#define functions_hpp


#include <iostream>
#include <cmath>
using namespace std;

void readForceValuesFromStdIn(double* leftTeam, double* rightTeam, unsigned const int noParticipants)
{
    double temp1, temp2;
    for(int i = 0; i < noParticipants; i++){
        cin >> temp1;
        cin >> temp2;
        leftTeam[i] = temp1;
        rightTeam[i] = temp2;
        
        if (leftTeam[i] < 0 || rightTeam[i] < 0){
            cout <<"Sorry that input is invalid"<< endl;
            exit(1);
        }
    }
}

bool validForces(const double *forces, unsigned const int noParticipants)
{
    for (int i = 0; i < noParticipants; ++i)
        if(forces[i] < 0){
            return false;
        }
    return true;
}

double calculateForce(const double* leftTeam, const double* rightTeam, unsigned const int noParticipants) {
    double netForce = 0;
    for(int i = 0; i < noParticipants; i++){
        netForce = netForce - leftTeam[i];
        netForce = netForce + rightTeam[i];
        
        if(netForce < -5 || netForce > 5){
            break;
        }
    }
    return(netForce);
}

void printWinnerToStdOut(const char* leftTeamName, const char* rightTeamName, const double netForce){
    if(netForce < -5){
        cout << leftTeamName << " wins\n";
    }
    else if (netForce > 5){
        cout << rightTeamName << " wins\n";
    }
    else{
        cout << "Tie.\n";
    }
}


#endif /* functions_hpp */
