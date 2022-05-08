// Queries the user for fifteen words and stores them in an array utilizing the hashing
// function written by Ron Sarner and distributed to the CS 240 class.
// Only 15 of the 23 array positions are filled with user entered words (strings) and the contents
// of the array are then displayed on screen to the user.  The user is then repeatedly queried for
// a target word and the word is hashed.  The program searches for the inclusion of the word within
// the array of stored words and it is displayed to the user whether or not the word was found.
// A sentinel condition is established to allow the user to exit the program when they are done searching.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// December 2015

#include <iostream>
#include <string>
#include <cstdlib>
#include "hash.h"

using namespace std;

int main(void)
{

        Hash myArray;   // 23 element array constructed

        int max = 15;   // Maximum number of words that can be stored in the array
        int i = 0;      // Counter variable

        string userWord;    // Used for user entered words when storing them in the array
        string srchWord;    // Used for user entered words when searching for them in the array

        cout << "Store up to " << max << " words in a list.  *NOTE* - Words must be lowercase.\n\n";

        do
        {

                cout << (i + 1) << ". Enter a word to store in list: ";
                cin >> userWord;

                myArray.Store(userWord);

                i++;

        } while (i < max);

        myArray.Display();

        cout << "\nNOTE: Type /// to exit the program.\n";

        while (srchWord != "///")
        {
            cout << "\nEnter a word to search list for: ";
            cin >> srchWord;

            if (srchWord == "///")  // Sentinel condition to exit the program
            {
                exit(1);
            }

            myArray.Search(srchWord);
        }

        return 0;
}
