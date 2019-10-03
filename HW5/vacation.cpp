
#include "functions.h"
#include <iostream>
#include <fstream>
#include <cstring>
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

    ifstream fin;
    fin.open("C:/users/brendanl/CSCE121/HW5/titles.txt");
    if(!fin){
        cout << "Invalid input. -titles";
        return (1);
    }
    fin.close();

    ifstream fn;
    fn.open(prefs);
    if(fn){
        cout << "Invalid input. -prefs";
        return (0);
    }
    fn.close();

    ifstream f;
    f.open(plan);
    if(f){
        cout << "Invalid input. -plan";
        return (0);
    }
    f.close();





    return(0);
}