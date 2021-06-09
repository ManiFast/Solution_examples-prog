#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int a, b, math, sum, ans;

	for (int i = 1; 0 == 0; i++)
	{
		cout << i << "] ";

		//up1:
		a = rand() % 101;
		b = rand() % 101;
		if (b == a)
		{
			b += 1;
		}
		math = rand() % 3 + 1; // 2/3
		switch (math)
		{
		case 1:
			cout << a << " + " << b;
			sum = a + b;
			cout << "\t(" << sum << ")" << endl;
			break;

		case 2:
			cout << a << " - " << b;
			sum = a - b;
			cout << "\t(" << sum << ")" << endl;
			break;

		case 3:
			cout << a << " * " << b;
			sum = a * b;
			cout << "\t(" << sum << ")" << endl;
			break;

		default:
			cout << "Error !" << endl;
			break;
		}

	up:
		ans = sum;
		cout << sum << endl;

		if (ans == sum)
		{
			cout << "Правильно" << endl << endl;
			//goto up1;
		}
		else if (ans != sum)
		{
			cout << "Нефартануло" << endl << endl;
			goto up;
		}
		else
		{
			//goto up1;
		}
	}

	return 0;
}