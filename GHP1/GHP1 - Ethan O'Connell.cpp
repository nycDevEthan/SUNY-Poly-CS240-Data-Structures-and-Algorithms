// Program solution to Programming Problem 1 on page 42.
// ADTs, Data Structures, and Problem Solving 2e, Larry Nyhoff.
// Program queries the user to search a n x n matrix for target value.
// References to binarySearch() function on page 37 and
// programming problem 2 on page 42 were made to help write solution.
// Written by Ethan O'Connell in Code::Blocks
// September 2015
// Language: C++  (g++ target)

#include <iostream>

using namespace std;

const int SIZE = 3; // Sets constant size for rows and columns

int matSearch( int mat[SIZE][SIZE], int row, int col, int item, bool found);

int main(void)
{
        int mat[SIZE][SIZE] = {2, 47, 92, 11, 24, 39, 14, 7, 100}; // Array values are hard wired in
        int row = 0;
        int col = 0;
        int item;
        bool found;

        cout << "Enter a numeric whole value to search for: ";
        cin >> item;

        matSearch(mat, row, col, item, found);

        return 0;
}

int matSearch(int mat[SIZE][SIZE], int row, int col, int item, bool found)
{
        while (row < SIZE && !found) // Loop runs until row reaches maximum size or target value is found
        {
                if (mat[row][col] == item) // Checks user entered value with current position in n x n matrix
                {
                        found = true;  // If target value is found, the loop ends
                }
                else if (col < (SIZE - 1)) // If target value is not found, continues to check next column
                {
                    col++;
                }
                else
                {
                        found = false;  // If target value is not found
                        row++;          // continues to search next row
                        col -= 2;       // and starts at first column again.
                }
        }

        if (found)  // Checks whether target value was found or not based on outcome of while loop
        {
                cout << "\n" << item << " found!\n"; // Item was found in matrix
        }
        else
        {
                cout << "\n" << item << " not found...\n"; // Item was not found in matrix
        }

        return (found); // Returns whether item was found in matrix or not
}
