#include <iostream>
using namespace std;

int GCD(int a, int b)
{
	if (b == 0)
		return a;
	
	else
		return GCD(b, a%b);
	
}

int main() {
	int T, A, B, gcd;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;

		gcd = GCD(A, B);

		if (GCD(A, B) == 1)
			cout << A*B << endl;

		else
			cout << gcd*(A / gcd)*(B / gcd) << endl;
	}
	return 0;
}