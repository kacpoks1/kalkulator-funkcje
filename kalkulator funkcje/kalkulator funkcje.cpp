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
	int table[table_size];
	char i;
	int zmienna;
	char op;
	float k;
	float o;

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
			for (int j = 0; j < i; j++)
			{
				k = table[j];
				o = table[++j];
				wynik = dodawanie(k, o);
			}
			cout << "wynik operacji " << op << ": "<< wynik << endl;
			break;
		}
		break;
		}
	}
}