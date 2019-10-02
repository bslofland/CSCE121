

#include <iostream>
using namespace std;

// function for factorial
long factorial (int k)
{
    long long int result = 1;
    for (int i = 1; i <= k; i++){
        result = result * i;
    }
    return (result);
}


int main()
{
    // set up variables
    int n;
    int num = 0;
    int max = 0;
    bool tf = false;
    
    // get the factorial
    cout << "Enter n >= 0: " << endl;
    cin >> n;
    
    if(n<0){
        cout << "Invalid input";
    }
    else{
        
        // figure out if number is a factorial
        for (int i = 0; i <= 26; i++){
            if (n == factorial(i)){
                num = i;
                tf = true;
            }
        }
        // if not a facotial then exit and say invalid input
        if (tf == false || n == 0){
            cout << "Not a factorial";
        }
        else if (n==1){
            cout << "The number is 0! and 1! No prime factors";
        }
        else if(n == 2){
            cout << "The number is 2! The largest prime factor is 2";
        }
        else{
            // find out the highest prime factor
            for (char i = 0; i<= num; i+=1){
                for(char j = 2; j<=i; ++j){
                    if (i % j !=0){
                        max = j;
                        
                    }
                }
            }
            
            //print out answer
            cout << "The number is "<<num<<"! The largest prime factor is "<< max << endl;
        }
    }
    return (0);
}
