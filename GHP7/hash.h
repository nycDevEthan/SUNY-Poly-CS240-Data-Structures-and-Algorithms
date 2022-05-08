
/*---------------------------------------------------------------------
  Written by Ethan O'Connell
  Language: C++
  Compiler: GNU GCC (Code::Blocks 13.12)
  December 2015


    This header file defines a Hash class.
    Basic Operations:
        Hash:  Constructs an array of 23 total elements.
        Store: Places up to 15 user enter strings into the array.
        Display: Displays the strings stored in the array.
        Search:  User enters a string to find within the array,
                 and displays on screen whether the string was found
                 or not.

---------------------------------------------------------------------*/

#include <iostream>
#include <string>

using namespace std;

class Hash
{
        public:
                Hash();

                void Store(string userWord);

                void Display();

                void Search(string srchWord);

        private:
                string myArray[23];     // Array of 23 maximum elements to store 15 user entered strings.
                string userWord;        // Variable used for user entered strings when populating
                                        // array with up to 15 strings.

                string srchWord;        // Variable used for user entered strings when
                                        // searching array for the string.

                char first_letter;      // Stores the first letter of user entered strings
                                        // for hashing function calculations.

                char last_letter;       // Stores the value of the last letter of user entered
                                        // strings for hashing function calculations.

                int arrayLen = 23;      // Stores the number of elements in the array and used for calculations.
                int pos;                // Stores the value returned by the hashing function calculations.
};
