//
//  coinmaker.cpp
//
//
//  Created by Brendan Lofland on 8/31/19.
//
#include <iostream>
using namespace std;

int main ()
{
    // Get the dollar amount from user.
    int dollar;
    int cent;
    cout << "Enter dollars: ";
    cin >> dollar;
    cout << "Enter cents: ";
    cin >> cent;
    
    // find the total cents
    int money;
    money = dollar * 100 + cent;
    
    // set up variables for each coin
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    
    // start doing some math
    // find out if there are enough quarters to fit into the amount of change
    if (money / 25 >= 1){
        quarters = money / 25;
        // if yes then divide the total money by 25 to find how many quarters are there
        quarters = int(quarters); // change the quarters back into an integer to get rid of the decimal points
        money -= quarters * 25; // change total money to how much is left over so that we can find the other coins
    }
    
    // Next lets find the number of dimes using the same method
    if (money / 10 >= 1){
        dimes = money / 10;
        dimes = int(dimes);
        money -= dimes * 10;
    }
    
    // Next lest find the number of nickels using the same method
    if (money / 5 >= 1){
        nickels = money / 5;
        nickels = int(nickels);
        money -= nickels * 5;
    }
    // Lastly lets find the number of pennies using the same method
    if (money / 1 >= 1){
        pennies = money;
        pennies = int(pennies);
        money -= pennies;
    }
    // Finally we need to print out the answer, if the answer for money is not 0 then the program will just pring Error
    if (money != 0){ // this is just used to tell if the program is wrong
        cout << "This is wrong,\n";
        cout << "Money leftover: " << money;
    }
    else{
        // if the final answer for money is 0 then print out the number of each coin as our answer
        cout << "Pennies: " << pennies <<"\n";
        cout << "Nickels: " << nickels <<"\n";
        cout << "Dimes: " << dimes << "\n";
        cout << "Quarters: " << quarters << "\n";
        cout << "\n";
    }
    
    int total_coin;
    total_coin = pennies + nickels + dimes + quarters;
    cout << "Total coins used: " << total_coin << "\n";
    return 0;
    
    
}



