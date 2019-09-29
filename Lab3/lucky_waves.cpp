//
//  lucky_waves.cpp
//  
//
//  Created by Brendan Lofland on 9/10/19.
//

#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int num, count, i, highscore;
    float num1, num2;
    
    // get the n
    cin >> num;
    
    // start getting numbers
    cin >> num1;
    
    // setup the scoreing system/
    count = 1;
    highscore = 0;
    
    // use the for loop to check for 'n' numbers
    for (i=1; i < num; i+=1) {
        // get the next number so that we can compare
        cin >> num2;
        // check to see if it increases
        if (num1 < num2) {
            // if yes add one to count
            count += 1;
        } else {
            // if not then reset the count
            count = 1;
        }
        if (count >= highscore) {
            // to save the highest count use the high score
            highscore = count;
        }
        // get ready for the next iteration
        num1 = num2;
    }
    // print the highscore to terminal
    cout << highscore << endl;
}
