
#include <iostream>
#include "functions.h"
using namespace std;



int main()
{
    string titles, prefs, plan;
//    int ngames = 0, duration = 0;

//    cout << "Enter number of games, duration of vaca: ";
//    cin >> ngames >>  duration;
    int ngames = 10;
    int duration = 8;

    if (ngames < 0 || ngames > 200 || duration < 0 || duration >= 365){
        cout << "Invalid input.";
        return(0);
    }
//    cout << "Please enter titles, prefers, plan file names: ";
//    cin >> titles >> prefs >> plan;
    titles = "titles.txt";
    prefs = "prefs-10.txt";
    plan = "plan-365-99.txt";




    return(0);
}