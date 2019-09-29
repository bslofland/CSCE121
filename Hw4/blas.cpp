//
//  blas.cpp
//  
//
//  Created by Brendan Lofland on 9/18/19.
//

/*
 BLAS Level 1 function definitions
 */
#include <iostream>
#include <cmath>
#include "blas.h"
using namespace std;


int amax(const double* x, const unsigned int len) {
    
    double n;
    int maxnum;
    double findind;
    double a[len];
    double b[len];
    
    if(len == 0){
        cout << -1 << endl;
        return(1);
    }
    for(unsigned int i = 0; i< len; i++){
        for(unsigned j = 0; i< len; i++){
            if(abs(x[i]) == abs(x[j]) && i != j && x[i] != a[i-1]){
                a[i] = x[i];
                b[i] = i;
            }
        }
    }
    double max = a[0];

    for (unsigned int i = 0; i < len; i++){
        n = sqrt(pow(a[i], 2));
        if (n>max){
            max = n;
            maxnum = i;
        }
    }
    cout << b[maxnum] << endl;
    
    return 0;
}


double asum(const double* x, const unsigned int len) {
    
    double sum = 0;
    double n;
    
    for(unsigned int i = 0; i<len; i++){
        n = sqrt(pow(x[i],2));
        sum += n;
    }
    cout << sum << endl;
    
    return 0;
}


void axpy(const double a, const double* x, double* y, const unsigned int len) {
    
    for(unsigned int i=0; i<len; i++){
        y[i] = a*x[i] + y[i];
    }
    
}


void copy(const double* src, double* dest, const unsigned int len) {
    // Fix me, can't call function
    for (unsigned int i=0; i<len; i++){
        dest[i] = src[i];
    }
}





double dot(const double* x, const double* y, const unsigned int len) {
    double n;
    double dot;
    
    // Fixme Segmentation fault : ll
    for (unsigned int i =0; i< len; i++){
        n = x[i]*y[i];
        dot += n;
    }
    
    return 0;
}


double norm2(const double* x, const unsigned int len) {
    double mag;
    double n =0;
    
    for (unsigned int i=0; i< len; i++){
        n += pow(x[i], 2);
    }
    mag = sqrt(n);
    
    return 0;
}

void scale(const double a, double* x, const unsigned int len) {
    double n;
    for (unsigned int i=0; i<len; i++){
        n = x[i] * a;
        x[i]=n;
    }
}

void swap(double* x, double* y, const unsigned int len) {
    double z[len];
    for (unsigned int i = 0; i < len; i++){
        z[i] = x[i];
        x[i] = y[i];
        y[i] = z[i];
    }
}

int main(){
    // amax ; 5 7 , 2 ; 7
    double x[4];
    unsigned int len = 3;
    double y[4];
    double a = 2;

    x[0] = -1;
    x[1] = 2;
    x[2] = 3;
    x[3] = 4;

    y[0] = -1;
    y[1] = 1;
    y[2] = 1;
    y[3] = 1;

//    double* ptr = &x[0];
//    double* ptr2 = &y[0];
    //    cout << len << " x: " << x[0] << x[1] << endl;
    amax(x, len);
    return(0);
}
