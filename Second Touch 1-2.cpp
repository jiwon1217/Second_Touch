#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char S[101];
	int alp[26];

	cin.getline(S, 101);

	int lth = strlen(S);

	for (int i = 0; i < lth; i++)
	{
		alp[S[i] - 97]++;
	}
	for (int j = 0; j < 26; j++)
	{
		cout << alp[j] << " ";
	}
	return 0;
}