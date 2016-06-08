//**************************************************************************************************************
// FILE:        MyMath.cpp
//
// DESCRIPTION: Contains MyMath source code.
//
// AUTHORS:     Zoe Cayetano            (zcayetan@asu.edu)
//
// COURSE:      CSE100 Principles of Programming with C++, Spring 2016
//**************************************************************************************************************

#include "MyMath.hpp"
#include <cmath>
#include <stdio.h>

double athRoot(double n, int a, double epsilon)
{
    double x1;
    x1 = n/2;
    
    double x2;
    x2 = (x1 - ((pow(x1, a) - n)) / (a * pow(x1, (a-1))));
    
    
    while (fabs(x2 - x1) >= epsilon)
    {
        x1 = x2;
        x2 = (x1 - ((pow(x1, a) - n)) / (a * pow(x1, (a-1))));
    }
    
    return x2;
}

int fib(int n)
{
    int fibN = n;
    int fibNless1, fibNless2;
    
    if (n > 1) {
        fibNless1 = 1;
        fibNless2 = 0;
        
        for (int i = 2; i <= n; i++) {
            fibN = fibNless2 + fibNless1;
            fibNless2 = fibNless1;
            fibNless1 = fibN;
        }
    }
    
    return fibN;
}
