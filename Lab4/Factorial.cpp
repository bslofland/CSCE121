//
//  Factorial.cpp
//  
//
//  Created by Brendan Lofland on 9/17/19.
//

#include <iostream>
using namespace std;

long factorial (int k)
{
    long int result = 1;
    for (int i = 1; i <= k; i++)
        result = result * i;
    return (result);
}

int main()
{
    int n;
    
    cout << "Enter n: ";
    cin >> n;
    
    for (int i = 0; i <= n; i++)
        cout << "factorial(" << i << ") = " << factorial(i) << endl;
    
    return (0);
}
