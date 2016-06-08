//**************************************************************************************************************
// FILE:        Main.cpp
//
// DESCRIPTION: Contains main() function.
//
// AUTHORS:     Zoe Cayetano            (zcayetan@asu.edu)
//
// COURSE:      CSE100 Principles of Programming with C++, Spring 2016
//
// LAB INFO:    Lab 12   Date/Time: 12pm Th   TA: Suya
//**************************************************************************************************************
#include <iostream>
#include <iomanip>
#include "MyMath.hpp"

using namespace std;

// function prototypes
void computeAthRoot();
void computeNthFib();
double getDouble(string);
int getInt(string);
int menu();

int main()
{
    cout << fixed << setprecision(16);
    
    int choice = menu();
    
    while (choice != 3) {
        if (choice == 1) {
            computeAthRoot();
        } else if (choice == 2) {
            computeNthFib();
        }
        
        choice = menu();
    }
    
    cout << endl << "Bye." << endl;
    
    return 0;
}

void computeAthRoot()
{
    cout << endl;
    cout << "Your choice is to compute the a-th root of a number." << endl;
    
    double n = getDouble("Enter n (>= 0): ");
    int a = getInt("Enter a (>= 2): ");
    double root = athRoot(n, a, 0.0000000000000001);
    
    cout << "The " << a << "-th root of " << n << " is " << root << endl << endl;;
}

void computeNthFib()
{
    cout << endl;
    cout << "Your choice is to compute the n-th Fibonacci number." << endl;
    
    int n = getInt("Enter n (>= 0): ");
    int fibN = fib(n);
    
    cout << "The " << n << "-th Fibonacci number is " << fibN << endl << endl;
    cout << endl;
}

double getDouble(string pPrompt)
{
    double n;
    
    cout << pPrompt;
    cin >> n;
    return n;
}

int getInt(string pPrompt)
{
    int n;
    
    cout << pPrompt;
    cin >> n;
    return n;
}

int menu()
{
    cout << "What would you like to do?" << endl;
    cout << "1. Compute the a-th root of a number." << endl;
    cout << "2. Compute the n-th Fibonacci number." << endl;
    cout << "3. Quit the program." << endl;
    
    int choice = getInt("Choice? ");
    return choice;
}