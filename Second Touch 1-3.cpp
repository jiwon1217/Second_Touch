#include <iostream>
using namespace std;

int main() {
	int input, sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> input;

		if (input < 40)
		{
			sum = sum + 40;
		}
		else
		{
			sum = sum + input;
		}
	}
	cout << sum / 5 << endl;

	return 0;
}