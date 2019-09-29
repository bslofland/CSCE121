//
//  lw2_problem3.cpp
//  
//
//  Created by Brendan Lofland on 9/2/19.
//

#include <iostream>
using namespace std;

int main()
{
    float num, sum, i;
    sum = 0;
    num =0;
    i = 0;
    
    cout << "please enter first number: ";
    cin >> num;
    
    if (num == 0){
        cout << "empty" << endl;
    }
    else{
        while (num != 0){
            sum += num;
            i += 1;
            cout << "Sum is " << sum << endl;
            cout << "please enter next number: ";
            cin >> num;
        }
        float avg;
        avg = sum / i;
        cout << avg << endl;
    }
    
    return(0);
}
