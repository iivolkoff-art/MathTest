#include <iostream>
#include <ctime>

using namespace std;

int prog()
{
	srand(time(NULL));

	int a[10], b[10], c[10];
	int ans[10];
	int mark = 0;

	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 10;
		b[i] = rand() % 10;
	}

	for (int i = 0; i < 10;  i++)
	{
		cout << a[i] << " * " << b[i] << " = ?" << endl;
	}

	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ") ";
		cin >> ans[i];

		c[i] = a[i] * b[i];

		if (ans[i] == c[i])
		{
			mark++;
		}
	}

	cout << endl;
	cout << "Test passed!" << endl << "Your mark: " << mark << endl;
	cout << "Would you like to take the test again? (1 - Yes, 2 - NO)" << endl;

	int x;
	cin >> x;

	cout << endl << endl;

	if (x == 1)
	{
		prog();
	}
	else
	{
		cout << "Test completed";
		return 0;
	}
}
