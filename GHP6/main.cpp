#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(void)
{
        int Chic[] = { 1, 2, 3, 4, 5};
        int Detr[] = { 3, 4, 5, 6, 7};

        list <int> Chicago (Chic, Chic + 5);
        list <int> Detroit (Detr, Detr + 5);
        list <int> intersect;

        int i;

        cout << "\nChicago warehouse:\n";

// Use of iterators to display on pg. 488

        for (list <int>::const_iterator it = Chicago.begin(); it != Chicago.end(); ++it)
        {
                cout << *it << ' ';
        }

        cout << "\n\nDetroit warehouse:\n";

        for (list <int>::const_iterator it = Detroit.begin(); it != Detroit.end(); ++i)
        {
                cout << *it << ' ';
        }

        set_intersection (Chicago.begin(), Chicago.end(), Detroit.begin(), Detroit.end(), back_inserter(intersect));

        cout << "\nCollection of product numbers common to both warehouses:\n";

        for (list <int>::iterator it = intersect.begin(); it != intersect.end(); ++it)
        {
                cout << *it << ' ';
        }

        return 0;
}
