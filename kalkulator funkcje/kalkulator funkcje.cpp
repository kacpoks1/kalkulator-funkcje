#include <iostream>
#include <string>

using namespace std;

float odejmowanie(float k, float o)
{
	return k - o;
}

float dodawanie(float k, float o)
{
	return k + o;
}

float mnozenie(float k, float o)
{
	return k * o;
}
float dzielenie(float k, float o)
{
	return k / o;
}



int main()
{
	const int table_size = 20;
	int table[table_size];
	char i;
	int zmienna;
	char op;

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


	for (i = 0; i < table_size; i++)
	{
		switch (op)
		{
		case '+':
		{
			float wynik = 0;
			for (float j = 0; j < i; j++)
			{
				cout << dodawanie(j,);
			}
			cout << "wynik operacji " << op << ": " << wynik << endl;
			break;
		}
		}
	}
}