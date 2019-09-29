//
//  lw2_problem1.cpp
//  
//
//  Created by Brendan Lofland on 9/2/19.
//

#include <iostream>
using namespace std;

int main()
{
    // set list variable
    int num, mini;
    num = 0;
    
    // read first number
    
    cin >> num;
    
    if (num != 0){
        mini = num;
        
        while (num != 0){
            if (num < mini){
                mini = num;
            }
            
            cin >> num;
            
        }
        cout << "min: " << mini << endl;
    }
    else{
        cout << "empty";
    }
    return(0);
}
