// Two m x n matrices (arr1 and arr2) are filled by user entered
// values for the ith row and jth column of each matrix.
// Then, the sum of these values (arr1[i][j] + arr2[i][j]) is the entry in
// ith row and jth column of a third m x n matrix (sumArr[i][j]).
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// September 2015

#include <iostream>

using namespace std;

const int SIZE = 3; // Declares size of arrays

void fillArray(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE]);       // Function prototypes
void showArray(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE]);
void addArray(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE], int sumArr[SIZE][SIZE]);
void showSum(int sumArr[SIZE][SIZE]);

int main(void)
{
        int arr1[SIZE][SIZE]; // Declares three two dimensional arrays
        int arr2[SIZE][SIZE];
        int sumArr[SIZE][SIZE];

        cout << "\nEnter the values for the first array: \n";

        fillArray(arr1, arr2);
        showArray(arr1, arr2);
        addArray(arr1, arr2, sumArr);
        showSum(sumArr);

        return 0;
}

// Allows the user to fill two m x n matrices with values
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// September 2015

void fillArray (int arr1[SIZE][SIZE], int arr2[SIZE][SIZE])
{
        int i, j;    // Loop counter variables

        for (i = 0; i < SIZE; i++)  // User enters values for first array
        {

                for (j = 0; j < SIZE; j++)
                {
                        cin >> arr1[i][j];
                }
        }

        cout << "\nEnter the values for the second array: \n";

        for (i = 0; i < SIZE; i++)  // User enters values for the second array
        {
                for (j = 0; j < SIZE; j++)
                {
                        cin >> arr2[i][j];
                }
        }

        return;
}

// Displays the m x n matrices and their values as entered by the user
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// September 2015

void showArray(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE])
{
        int i, j;    // Loop counter variables

        cout << "\n\nThe values stored in the first array are: \n";

        for (i = 0; i < SIZE; i++)  // Displays the values entered by the user
        {                           // for the first array
                for (j = 0; j < SIZE; j++)
                {
                        cout << arr1[i][j] << " ";
                }

                cout << "\n";
        }

        cout << "\n\nThe values stored in the second array are: \n";

        for (i = 0; i < SIZE; i++)  // Displays the values entered by the user
        {                           // for the second array
                for (j = 0; j < SIZE; j++)
                {
                        cout << arr2[i][j] << " ";
                }

                cout << "\n";
        }

        return;
}

// Adds the values of the two m x n matrices filled by the user
// and stores the sum into a third n x n matrix
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// September 2015

void addArray(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE], int sumArr[SIZE][SIZE])
{
        int i, j;    // Loop counter variables

        for (i = 0; i < SIZE; i++)  // Adds the values entered by the user into a third array
        {                           // to hold the sum of the ith row and jth column of each
                for (j = 0; j < SIZE; j++)
                {
                        sumArr[i][j] = arr1[i][j] + arr2[i][j];
                }
        }

        return;
}

// Displays the sum of the values of the two user filled m x n matrices
// stored in the third m x n matrix
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// September 2015

void showSum(int sumArr[SIZE][SIZE])
{
        int i, j;    // Loop counter variables

        cout << "\n\nThe sum of the values in the two arrays are: \n";

        for (i = 0; i < SIZE; i++)  // Displays the contents of the third array holding the
        {                           // sums of the ith row and jth column of the user filled arrays
                for (j = 0; j < SIZE; j++)
                {
                        cout << sumArr[i][j] << " ";
                }

                cout << "\n";
        }

        return;
}
