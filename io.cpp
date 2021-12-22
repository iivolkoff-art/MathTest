#include <iostream>
#include <ctime>

using namespace std;

int prog()
{
	setlocale(LC_ALL, "RUS");

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
	cout << "Тест пройден!" << endl << "Ваша оценка: " << mark << endl;
	cout << "Желаете пройти тест заново? (1 - Yes, 2 - NO)" << endl;

	int x;
	cin >> x;

	cout << endl << endl;

	if (x == 1)
	{
		prog();
	}
	else
	{
		cout << "Тест завершен";
		return 0;
	}
}
