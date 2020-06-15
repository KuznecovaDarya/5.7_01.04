#include <iostream>
using namespace std;

#include <cstdlib>
#include <ctime>

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int mas[10][10];
	int res[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			int randomNumber = rand();
			mas[i][j] = (randomNumber % 100) + 1;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << "\t\n";
	}

	cout << "\nNew:\n";
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			res[i][j] = mas[9 - i][j];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << res[i][j] << "\t";
		}
		cout << "\t\n";
	}
}