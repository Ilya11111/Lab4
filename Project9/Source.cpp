#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	int x, y, n, f;
	x = 1, y = 1, f = 2;
	cin >> n;
	if (n < 0)
		cout << "Неверное выражение";
	else if (n == 0)
		cout << 0;
	else if (n > 0 && n < 3)
		cout << 1;
	else {
		for (int i = 3; i <= n; i++)
		{
			f = x + y;
			int t = y; y = f, x = t;

		} cout << f;
	}
}