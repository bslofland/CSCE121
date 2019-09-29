//
//  magicsquare.cpp
//  
//
//  Created by Brendan Lofland on 9/23/19.
//

#include <iostream>
using namespace std;
int main()
{
    const int MAX = 100;
    int matrix [MAX][MAX], n , firstsum, sum;
    bool magic = true;
    
    cout<< "Enter n: ";
    cin >> n;
    for(int row = 0; row <n; row++){
        for(int col = 0; col <n; col++){
            cout << "Enter element in position " << row << "," << col << ": ";
            cin >> matrix[row][col];
        }
    }
    firstsum = 0;
    for(int i=0; i < n; i++){
        firstsum = firstsum + matrix[i][i];
    }
    for(int row = 0; row< n && magic == true; row++){
        sum = 0;
        for (int col = 0; col<n; col++){
            sum = sum + matrix[row][col];
            
        }
        if (sum != firstsum)
            magic = false;
    }
    // check the colums
    for(int col = 0; col< n && magic == true; col++){
        sum = 0;
        for (int row = 0; row< n; row++)
            sum += matrix[row][col];
        if(sum != firstsum)
            magic = false;
    }
    // secondary diagonal
    if(magic == true){
        sum = 0;
        for(int i = 0; i < n; i++){
            sum = sum + matrix[i][n-(i+1)];
        }
        if (sum != firstsum){
            magic = false;
        
        }
    }
    if(magic == true){
        cout << "It is a magic square" << endl;
    }
    else{
        cout << "it is not a magic square" << endl;
    }
    return(0);
}

