// CPP Program to find the sum of fourth powers
// of first n odd natural numbers
#include <bits/stdc++.h>
using namespace std;

// calculate the sum of fourth power of first
// n odd natural numbers
long long int oddNumSum(int n)
{
	int j = 0;
	long long int sum = 0;
	for (int i = 1; i <= n; i++) {
		j = (2 * i - 1);
		sum = sum + (j * j * j * j);
	}
	return sum;
}

// Driven Program
int main()
{
	int n = 6;
	cout << oddNumSum(n) << endl;
	return 0;
}
