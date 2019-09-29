//
//  blastest.cpp
//  
//
//  Created by Brendan Lofland on 9/25/19.
//

#include "blastest.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

//int main(){
//    char n[7];
//    string s;
//    double x[15];
//    int i = 0;
//
//    ifstream inFS;
//    inFS.open("test.txt");
//
//    if (!inFS.is_open()){
//        cout<< "file could not open" << endl;
//        return 1;
//    }
//
//    while(inFS){
//            if
//
//    if(!inFS.eof()){
//        cout<< "Error reading myfile.txt"<< endl;
//        return 1;
//    }
//    inFS.close();
//    return 0;
//}

int main(){
    string str, function, nums, answer, n;
    ifstream file("test.txt");
    
    getline(file, str, ';');
//    cout << str << endl;
    function = str;
    
    getline(file, str, ';');
    cout << str << " string length: "<< str.size() <<endl;
    nums = str;
    
    getline(file, str, ';');
//    cout << str << endl;
    answer = str;
    
    n = (nums.at(nums.size()-2));
    cout << n << endl;
    
    // use this to make len a int
    stringstream geek(n);
    int len = 0;
    geek >> len;
    cout << len << endl;
    
    return 0;
}
