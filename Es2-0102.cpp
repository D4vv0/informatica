//Esercitazione in classe 01/02/2019
#include <iostream>
using namespace std;

void stampa_base(char c);
int main()
{
	char scelta;
	cout << "Inserisci una lettera A,C,T,G: ";
	cin >> scelta;
	stampa_base(scelta);
	return 0;
}
void stampa_base(char c)
{
	switch(c)
	{
		case 'A':
			cout << "\nAdenina\n";
		break;

		case 'C':
			cout << "\nCitosina\n";
		break;

		case 'T':
			cout << "\nTimina\n";
		break;

		case 'G':
			cout << "\nGuanina\n";
		break;

		default:
			cout << "\n*ERRORE*\n";
		break;
	}
}
