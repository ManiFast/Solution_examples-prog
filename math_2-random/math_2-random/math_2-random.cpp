#include <iostream>
#include <ctime>
//#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int a, b, math, sum, ans, 
		score = 0, cheat = 2005;
	//char menu = !;

	//cout << "/////////////////////////////////\n/\n/S\tT\tA\tS/\n/////////////////////////////////";

	up1:
	a = rand() % 101;
	b = rand() % 101;
	math = rand() % 2 + 1; // 2
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

	default:
		cout << "Error !" << endl;
		break;
	}

	up:
	cin >> ans;
	if (ans == sum)
	{
		score++; // +1
		cout << "Правильно\tlvl " << score << endl << endl;
		goto up1;
	}
	else if (ans == cheat)
	{
		score += 100;
		goto up1;
	}
	else if (ans != sum)
	{
		score = 0;
		cout << "Нефартануло\tlvl " << score << endl << endl;
		goto up;
	}
	else
	{
		goto up1;
	}

	return 0;
}