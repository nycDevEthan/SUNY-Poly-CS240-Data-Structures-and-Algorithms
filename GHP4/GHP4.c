// Requests a number from the user and finds
// the prime factors of the given number.
// Stack.h and Stack.cpp code from pgs 327-331,
// Figures 7.4 and 7.5, was utilized.
// The driver program on on pgs 331-332 was also utilized.
// "ADTs, Data Structures, and Problem Solving with C++ (2e)"
// Author: Larry Nyhoff.
// Written by Ethan O'Connell
// Launguage: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// November 2015

#include "stack.h"
#include <iostream>

using namespace std;

int main(void)
{
        Stack s;        // Creates the stack

        cout << "Stack to hold numbers created.  Empty? " << boolalpha << s.empty() << endl;

        int num;        // User entered number is divided by this variable
        int d = 2;      // Stores user entered number

        cout << "\nEnter a non-negative whole number larger than 1: ";
        cin >> num;


// Function finds the prime factorization of a user entered number.
// The prime factorization of n can be found if d is found and then
// n is replaced by the quotient of n divided by d.  This is repeated
// until n becomes 1.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// November 2015

        while (num > 1)         // Checks that user entered valid number
        {
                if (num % d == 0)       // Remainder of zero, d gets pushed to stack
                {
                        num = num / d;

                        s.push(d);      // d is pushed on stack due to zero remainder

                }
                else
                {
                        d++;            // Increments d if remainder is not zero
                }
        }

        cout << "\nPrime Factors:\n";

        while (!s.empty())      // Displays the contents of the stack, from top to bottom
        {
                cout << s.top() << "  ";
                s.pop();
        }

        cout << "\n\nIs the stack now empty? " << s.empty() << endl;

        return 0;
}

