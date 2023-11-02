#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "You check prime number in serier then enter 0" << endl;
	cout << "You check a specific number then enter 1:";
	cin >> num;
	bool is_prime = true;
	if (num == 0)
	{

		int r1, r2;
		cout << "Enter a range\n";
		cout << "1st number:";
		cin >> r1;
		cout << "2nd number:";
		cin >> r2;
		cout << "\nPrime Numbers are:";
		int cou;
		for (; r1 <= r2; r1++)
		{
			cou = 0;
			for (int i = 1; i < r1; i++)
			{

				if (r1 % i == 0)
				{
					cou++;
				}
			}
			if (cou == 1)
				cout << r1 << " ";
		}
	}
	else if (num == 1)
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
}
