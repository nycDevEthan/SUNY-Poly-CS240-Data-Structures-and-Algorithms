// User enters a word to check if it is a palindrome by storing the
// word in a stack and a queue simultaneously.
// pg. 443, problem #14
// ADTs, Data Structures, and Problem Solving with C++ (2e) by Larry Nyhoff.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// November 2015

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(void)
{
        stack <char> wordStack;     // Stack of type char to store the user's word
        queue <char> wordQueue;     // Queue of type char to store the user's word
        string wordUser;            // Stores the user's word as a string
        int i;                      // Counter variable

        cout << "\n***Warning - Case sensitive and no spaces allowed***\n\n";

        cout << "Enter a word to see if it is a palindrome: ";
        cin >> wordUser;

// The stack and queue are filled simultaneously with the user entered word.
// The elements of the stack and queue are then compared for likeness in a
// character by character manner.  Characters that are identical in both the
// queue and stack are then removed.  If all characters are identical, then
// the stack and queue should be empty.  This identifies a palindrome.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// November 2015


        for (i = 0; i < wordUser.size(); i++)               // Stores the string in the stack and queue
        {                                                   // character by character
                wordStack.push(wordUser.at(i));
                wordQueue.push(wordUser.at(i));
        }

        for (i = 0; i < wordUser.size(); i++)
        {
                if (wordStack.top() == wordQueue.front())   // Checks for similarity of elements
                {
                        wordStack.pop();                    // Removes element from the stack
                        wordQueue.pop();                    // Removes element from the queue
                }
        }

        if (wordStack.empty() && wordQueue.empty())         // If all elements removed, stack and queue are empty
        {
                cout << "\n" << wordUser << " is a palindrome!";
        }
        else
        {
                cout << "\n" << wordUser << " is not a palindrome...";
        }

        return 0;
}
