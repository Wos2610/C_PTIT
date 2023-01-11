// C++ program to find last non-zero digit in n!
#include<bits/stdc++.h>
using namespace std;

// Initialize values of last non-zero digit of
// numbers from 0 to 9
int dig[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};

int lastNon0Digit(int n)
{
	if (n < 10)
		return dig[n];

	// Check whether tens (or second last) digit
	// is odd or even
	// If n = 375, So n/10 = 37 and (n/10)%10 = 7
	// Applying formula for even and odd cases.
	if (((n/10)%10)%2 == 0)
		return (6*lastNon0Digit(n/5)*dig[n%10]) % 10;
	else
		return (4*lastNon0Digit(n/5)*dig[n%10]) % 10;
}

// Driver code
int main()
{
	int n = 1000000;
	cout << lastNon0Digit(n);
	return 0;
}

