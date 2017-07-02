#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char str[1001];
	cin >> str;
	int lth = strlen(str);

	for (int i = 0; i < lth; i++)
	{
		if (str[i] > 67)
		{
			str[i] = str[i] - 3;
		}
		else
		{
			str[i] = str[i] + 23;
		}
		cout << str[i];
	}
	return 0;
}