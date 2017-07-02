#include <iostream>
using namespace std;

int main() {
	char str[8][8];
	int count = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> str[i][j];

			if (str[i][j] == 'F')
			{

				if (i % 2 == 1 && j % 2 == 1)
					count++;

				else if (i % 2 == 0 && j % 2 == 0)
					count++;
			}
		}
	}
	cout << count;
	return 0;
}