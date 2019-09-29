//
//  lw2_problem2.cpp
//  
//
//  Created by Brendan Lofland on 9/2/19.
//

#include <iostream>
using namespace std;

int main()
{
    int num, max;
    num = 0;
    
    
    cin >> num;
    
    if (num != 0){
        max = num;
        
        while (num != 0){
            if (num > max){
                max = num;
            }
            cout << "Enter next number(0 finishes the sequence): ";
            cin >> num;
        }
        cout << "max: " << max << endl;
    }
    else{
        cout << "empty";
    }
    return(0);
}
