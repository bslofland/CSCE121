//
//  driver.cpp
//  
//
//  Created by Brendan Lofland on 9/24/19.
//

#include "testfunctions.hpp"
#include <iostream>
using namespace std;

int main()
{
    int noParticipants;
    char leftTeamName[6];
    char rightTeamName[6];

    
    // Remove this
    cin >> noParticipants;
    
    
    cin >> leftTeamName;
    cin.clear();
    cin >> rightTeamName;
    
    
    auto *leftTeam = new double[noParticipants+1];
//    double leftTeam[noParticipants+1];
    auto *rightTeam = new double[noParticipants+1];
//    double rightTeam[noParticipants+1];
//    double forceCheck[noParticipants*2];
    auto *forceCheck = new double[noParticipants*2];
    double x;
    
    readForceValuesFromStdIn(leftTeam, rightTeam, noParticipants);
    
    validForces(forceCheck, noParticipants*2);
    
    x = calculateForce(leftTeam, rightTeam, noParticipants);
    
    printWinnerToStdOut(leftTeamName, rightTeamName, x);
    return(0);
}
