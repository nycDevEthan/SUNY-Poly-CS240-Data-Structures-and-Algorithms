// Program reads product numbers stored in one warehouse and stores them in a
// sequential container.  This process is repeated for a second warehouse and
// stores them in another sequential container.  Program then finds and displays
// the intersection of these two sequences of numbers.  Results display product
// numbers common to both sequences.
// ADTs, Data Structures, and Problem Solving with C++ (2e) by Larry Nyhoff
// and the website www.cplusplus.com were used as references for solving this problem.
// Page 583, Problem #33
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// December 2015

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(void)
{
        // Arrays created to store product numbers for both Chicago and Detroit warehouses
        int chicagoArr[] = { 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010,
                             1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020,
                             1021, 1022, 1023, 1024, 1025 };

        int detroitArr[] = { 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025,
                             1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035,
                             1036, 1037, 1038, 1039, 1040 };

// Function reads product numbers stored in one warehouse and stores them in a
// sequential container.  This process is repeated for a second warehouse and
// stores them in another sequential container.  The product numbers for both
// warehouses are displayed to check for accuracy.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// December 2015


        // Creates list to store Chicago product numbers
        list <int> chicagoList (chicagoArr, chicagoArr + 25);

        // Creates list to store Detroit product numbers
        list <int> detroitList (detroitArr, detroitArr + 25);

        // Creates list to store product numbers common in both sequences
        list <int> intrsctList;

        cout << "\nChicago warehouse product numbers:\n\n";
        // Displays product numbers stored in Chicago list
        for (list <int>::const_iterator it = chicagoList.begin(); it != chicagoList.end(); ++it)
        {
                cout << *it << '\n';
        }

        cout << "\n\nDetroit warehouse product numbers:\n\n";
        // Displays product numbers stored in Detroit list
        for (list <int>::const_iterator it = detroitList.begin(); it != detroitList.end(); ++it)
        {
                cout << *it << '\n';
        }

// Function finds and displays the intersection of two sequences of numbers
// which are stored in two separate containers.  Results display product numbers
// common to both sequences.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
// December 2015

        set_intersection (chicagoList.begin(), chicagoList.end(), detroitList.begin(),
                          detroitList.end(), back_inserter(intrsctList));

        cout << "\n\nCollection of product numbers common to both warehouses:\n\n";
        // Displays product numbers common to both Chicago and Detroit lists
        for (list <int>::const_iterator it = intrsctList.begin(); it != intrsctList.end(); ++it)
        {
                cout << *it << '\n';
        }

        return 0;
}



