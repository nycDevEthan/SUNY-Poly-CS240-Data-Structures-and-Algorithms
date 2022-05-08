// This implementation file provides function definitions for the
// following functions: Hash, Store, Display, and Search.
// These functions are from the Hash class.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// December 2015

#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

Hash::Hash()
// Constructs an array of 23 total elements and fills it
// with the characters "?!" to signify that the positions in
// the array are not holding any strings.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// December 2015
{
        for (int i = 0; i < arrayLen; i++)
        {
                myArray[i] = "?!";
        }

        return;
}

void Hash::Store(string userWord)
// Utilizes the hashing function (distributed to the CS 240 class by
// Ron Sarner) to store up to 15 words within the 23 element array
// constructed by the function called Hash.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// December 2015
{
        first_letter = userWord[0];
        last_letter = userWord[(userWord.length() - 1)];

        bool posEmpty;

        posEmpty = true;

// Hashing function written by Ron Sarner and distributed to the CS 240
// class.  Stores the value returned by the function into an integer variable.
// Adapted by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// December 2015

        pos = ((first_letter) +  (last_letter)) % arrayLen;     // Hashing function calculation value stored
                                                                // in integer variable pos

        while (posEmpty)
        {
                if (myArray[pos] == "?!")   // "?!" means
                {
                        myArray[pos] = userWord;

                        posEmpty = false;
                }
                else
                {
                        pos++;
                }

                if (pos >= arrayLen)
                {
                        pos = 0;
                }

        }

    return;
}

void Hash::Display()
// Displays the contents of the array after it has been filled with
// user entered strings.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// December 2015
{
        cout << "\nContents of list of user entered words:\n";

        for (int i = 0; i < arrayLen; i++)
        {
                cout << (i + 1) << ".  " << myArray[i] << endl;
        }

        return;
}

void Hash::Search(string srchWord)
// Searches the array for the existence of previously entered
// user words or words that are not present in the array.  This
// search is performed by utilizing the hashing function (written by
// Ron Sarner and distributed to the CS 240 class) to determine if
// a string being searched for is located in the same position it would
// have been stored in.  If the string is not in this position, the
// search continues until the end of the array is reached, loops back
// around to the beginning of the array or until the characters "?!"
// are encountered.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// December 2015
{
        first_letter = srchWord[0];
        last_letter = srchWord[(srchWord.length() - 1)];

        bool wordFound;

// Hashing function written by Ron Sarner and distributed to the CS 240
// class.  Stores the value returned by the function into an integer variable.
// Adapted by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// December 2015

        pos = ((first_letter) + (last_letter)) % arrayLen;  // Hashing function calculation value stored
                                                            // in integer variable pos

        while (myArray[pos] != "?!" && !wordFound)
        {

                if (myArray[pos] == srchWord)
                {
                        cout << "\n" << srchWord << " was found at position # " << (pos + 1) << " in the list.\n";
                        cout << "NOTE: Type /// to exit the program.\n";
                        wordFound = true;
                }
                else
                {
                    pos++;

                    if (pos >= arrayLen)
                    {
                        pos = 0;
                    }
                }
        }

        if (!wordFound)
        {
            cout << "\n" << srchWord << " was not found...\n";
            cout << "Try again or type /// to exit the program." << endl;
        }

        return;
}



