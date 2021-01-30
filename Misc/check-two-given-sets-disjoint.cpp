// A Simple C++ program to check if two sets are disjoint
#include <bits/stdc++.h>
using namespace std;

// Returns true if set1[] and set2[] are disjoint, else false
bool areDisjoint(int set1[], int set2[], int m, int n)
{
    // Take every element of set1[] and search it in set2
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (set1[i] == set2[j])
                return false;

    // If no element of set1 is present in set2
    return true;
}

// Driver program to test above function
int main()
{
    int set1[] = {12, 34, 11, 9, 3};
    int set2[] = {7, 2, 1, 5};
    int m = sizeof(set1) / sizeof(set1[0]);
    int n = sizeof(set2) / sizeof(set2[0]);
    areDisjoint(set1, set2, m, n) ? cout << "Yes" : cout << " No";

    cout << endl;
    system("pause");
    return 0;
}
