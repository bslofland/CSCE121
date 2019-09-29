//
//  differentdigits.cpp
//  
//
//  Created by Brendan Lofland on 9/9/19.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, counter, i;
    counter = 0;
    // read in a and b
    cout << "Enter numbers a <= b: ";
    cin >> a >> b;
 
    if (a < 1 || b < 1 || a > b){                 // Check to make sure numbers meet the criteria
        cout << "Invalid input" << endl;
    }
    else {
        if (a < 11 && b < 11){
            for (i = a; i <= b; i += 1)
                counter +=1;
        }
        if (a < 100 && b < 100 && a > 10 && b > 10){
            for (i = a; i <= b; i += 1 ){
                if (not(i / 11 == 0)) {
                    counter += 1;
                }
            }
        
        }
    
    
        cout << "There are " << counter << " valid numbers between " << a << " and " << b << endl;

    }
}
