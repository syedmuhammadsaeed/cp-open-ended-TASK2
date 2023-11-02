#include <iostream>
using namespace std;

int main()
{
	int i, n;

	cout << "If you want to check prime number in serier then enter 9\nIf you want to check a specific number then enter 0:";
	cin >> n;
	bool is_prime = true;
	if (n == 0)
	{
		int r1, r2;
		cout << "\nEnter a range between you want to check a prime number(use space between range):";
		cin >> r1 >> r2;
		cout << "\nPrime Numbers are:";
		int count;
		for (; r1 <= r2; r1++)
		{
			count= 0;
			for (i = 2; i <= r1 / 2; i++)
			{

				if (r1 % i == 0)
				{
					count++;
				}
			}
			if (count == 0)
				cout << r1 << " ";
		}
	}
	else if (n== 1)
	{
		int i, n;
		cout << "Enter a positive integer: ";
		cin >> n;
		for (i = 2; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				is_prime = false;
				break;
			}
		}
		if (is_prime)
			cout << n << " is a prime number";
		else
			cout << n << " is not a prime number";

	}
	return (0);
}
