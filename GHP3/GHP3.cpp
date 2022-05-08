// Queries the user for the name of a file and a search string.
// It then counts and reports the number of occurrences of the
// string in the file.
// Adaptation of code from handout of Figure 5-1 distributed
// in class and written by Ron Sarner.
// String functions used from section 5.2 ADTs, Data Structures,
// and Problem Solving with C++ (2e) by Larry Nyhoff.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// October 2015

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

using namespace std;

void fileSearch(int j, int sFnd, int sCtr, string word, string s);

int main(void)
{
        int i, j;
        int sFnd = 0;  // Stores value of position of string
        int sCtr = 0;  // Counts occurrences of string
        string word;   // User entered string to search for
        string inputFileName;  // Stores name of file
        string s;     //  Stores contents of file
        ifstream fileIn;
        char ch;

        cout << "\nEnter name of file of characters: ";
        cin >> inputFileName;

        fileIn.open(inputFileName.data());

        assert(fileIn.is_open());

        i = 0;

        while (!(fileIn.eof()))
        {
                ch = fileIn.get();
                s.insert (i, 1, ch);    // inserts character at position i
                i++;
        }

        cout << "\nPlease enter a string to search for: ";
        cin >> word;

        fileSearch(j, sFnd, sCtr, word, s);

        return 0;
}

void fileSearch(int j, int sFnd, int sCtr, string word, string s)
// Searches through the contents of a file stored in a string
// for a user entered string and counts the number of occurrences
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// October 2015
{
        for (j = 0; j < s.size(); j++)
        {
                while (s.find(word, sFnd) <= s.size())  // Value returned by s.find() is compared with
                {                                       // size of string, so loop runs until these compare
                        sFnd = s.find(word, sFnd);      // Stores position where string found into sFnd variable

                        if (sFnd >= 0)          // Checks sFnd to see if it is not below zero
                        {
                                sFnd++;         // Increments sFnd to account for how the positions
                        }                       // of characters are stored in strings

                        sCtr++;                 // Increments counter for number of string occurrences
                }
        }

        if (sCtr > 0)
        {
                cout << "\nThe string " << word << " appears " << sCtr << " time(s) in the file!" << endl;
        }
        else
        {
                cout << "\nThe string " << word << " is not in this file." << endl;
        }

        return;
}

