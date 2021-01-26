// C++ program to check
// if given number is
// power of 4 or not
#include<bits/stdc++.h>

using namespace std;

bool isPowerOfFour(unsigned int n)
{
	return n !=0 && ((n&(n-1)) == 0) && !(n & 0xAAAAAAAA);
}

/*Driver code*/
int main()
{
	int test_no = 64;
	if(isPowerOfFour(test_no))
		cout << test_no << " is a power of 4" ;
	else
		cout << test_no << " is not a power of 4";

    cout << endl;
    system("pause");
    return 0;
}
