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


	for (float h = 0; h < i; h++)
	{
		switch (op)
		{
			case '+':
			{
				float wynik = 0;
				for (int j = 0; j < h; j++)
				{
					k = table[j];
					o = table[++j];
					table[0] = dodawanie(k, o);
					wynik = dodawanie(table[0], o);
					cout << "wynik operacji " << op << ": " << wynik << endl;

				}
	
			}

		}
	
	}
}