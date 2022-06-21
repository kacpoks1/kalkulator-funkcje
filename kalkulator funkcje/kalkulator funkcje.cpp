#include <iostream>
#include <string>

using namespace std;

float odejmowanie(float k, float o)
{
	float x = 0;
	x = k - o;
	return x;
}

float dodawanie(float k, float o)
{
	float x = 0;
	x = k + o;
	return x;
}

float mnozenie(float k, float o)
{
	float x = 0;
	x = k * o;
	return x;
}

float dzielenie(float k, float o)
{
	float x = 0;
	x = k / o;
	return x;
}



int main()
{
	const int table_size = 20;
	float table[table_size];
	char i;
	int zmienna;
	char op;
	float k;
	float o;
	float a;

	for (i = 0; i < table_size; i++)
	{
		cout << "Podaj " << i + 1 << " liczbe, aby przerwac podaj 0  " << endl;

		cin >> zmienna;

		if (zmienna == 0)
		{
			break;
		}
		else
		{
			table[i] = zmienna;
		}
	}

	cout << "podaj operacje" << endl;
	cin >> op;


	switch (op)
	{
		case '+':
		{
			float wynik = 0;
			wynik = table[0];
			for (int h = 1; h < i; ++h)
			{
				wynik = dodawanie(wynik, table[h]);
			}
			cout << "wynik " << wynik << endl;
	
		}
		break;

		case '-':
		{
			float wynik = 0;
			wynik = table[0];
			for (int h = 1; h < i; ++h)
			{
				wynik = odejmowanie(wynik, table[h]);
			}
			cout << "wynik " << wynik << endl;

		}
		break;

		case '*':
		{
			float wynik = 0;
			wynik = table[0];
			for (int h = 1; h < i; ++h)
			{
				wynik = mnozenie(wynik, table[h]);
			}
			cout << "wynik " << wynik << endl;

		}
		break;

		case '/':
		{
			float wynik = 0;
			wynik = table[0];
			for (int h = 1; h < i; ++h)
			{
				wynik = dzielenie(wynik, table[h]);
			}
			cout << "wynik " << wynik << endl;

		}
		break;
	}
	
	
}