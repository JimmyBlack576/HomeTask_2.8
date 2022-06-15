#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int a, sum = 0;
	cin >> a;
	for (int i = a; i > 0; i /= 10)
	{
		sum += i % 10;
	}

	if (sum * sum * sum == a * a) cout << "Равно А * А " << endl;
	else cout << "Не равно А * А" << endl;
}

