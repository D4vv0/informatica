//Es1-0402
#include <iostream>
#include <cmath>
using namespace std;

void primo(float n1, float n2);
void scrivisoluzioni(float n1, float n2, float n3);
float delta(float nu1, float nu2, float nu3);
int main()
{
	float a=0,b=0,c=0;
	cout << "\nCalcolatore di equazioni del tipo ax^2+bx+c." << endl;
		cout << "\nInserisci a: ";
		cin >> a;
		cout << "\nInserisci b: ";
		cin >> b;
		cout << "\nInserisci c: ";
		cin >> c;
		if (a == 0)
			primo(b,c);
		else
			scrivisoluzioni(a,b,c);
		return 0;
}
void primo(float n1, float n2)
{
	float ris=0;
	if (n1 == 0 and n2 == 0)
		cout << "\nL'equazione risulta indeterminata.";
	else
	{
		if (n1 == 0 and n2 != 0)
			cout << "\nL'equazione risulta indeterminata.";
		else
			cout << "\nLa soluzione risulta " << ris;
	}
}
void scrivisoluzioni(float n1, float n2, float n3)
{
	if (n1 != 0 and n2 == 0 and n3 != 0)
	{
		if (n3 < 0)
		{
			float ris=0, r=0;
			r = -n3 / n1;
			ris = sqrt(r);
			cout << "\nLe soluzioni risultano: 1) " << ris;
			if (r != 0)
			{
				float ris2 = -ris;
				cout << "\t 2) " << ris2;
			}
		}
		else
			cout << "\nL'equazione non ha soluzioni reali.";
	}
	else
	{
		float D=delta(n1,n2,n3);
		if (D == 0)
		{
			float ris = (-n2 + D) / (2 * n1);
			cout << "\nL'unica soluzione risulta pari a " << ris;
		}
		else
		{
			float ris1 = 0;
			float ris2 = 0;
			ris1 = (-n2 + D) / (2 * n1);
			ris2 = (-n2 - D) / (2 * n1);
			cout << "\nLe soluzioni risultano: 1) " << ris1 << "\t 2) " << ris2;
		}
	}	
}
float delta(float nu1, float nu2, float nu3)
{
	float D=0,d=0;
	d = pow(nu2,2) - (4 * nu1 * nu3);
	D = sqrt(d);
	return D;
}