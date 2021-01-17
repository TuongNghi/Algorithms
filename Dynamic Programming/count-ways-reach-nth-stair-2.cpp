// C++ program to count number of ways
// to reach nth stair when a person
// can climb either 1 or 2 stairs at a time
#include <bits/stdc++.h>
using namespace std;

// A recursive function used by countWays
int countWaysUtil(int n, int m)
{
	if (n <= 1)
	{
		return n;
	}

	int res = 0;
	for(int i = 1; i <= m && i <= n; i++)
	{
	res += countWaysUtil(n - i, m);
	}
	return res;
}

// Returns number of ways to reach s'th stair
int countWays(int s, int m)
{
	return countWaysUtil(s + 1, m);
}

// Driver code
int main()
{
	int s = 4, m = 2;
	cout << "Nuber of ways = " << countWays(s, m);

    cout << endl;
    system("pause");
	return 0;
}
