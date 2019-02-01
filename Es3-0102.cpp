//Esercitazione in classe 01/02/2019
#include <iostream>
#include <cmath>
using namespace std;

void area_quadrato();
void area_triangolo();
void area_cerchio();
int main()
{
	char c;
	cout << "Inserisci la scelta: q (quadrato) t (triangolo) c (cerchio): ";
	cin >> c;
	switch (c)
	{
		case 'q':
			area_quadrato();
		break;
		
		case 't':
			area_triangolo();
		break;
		
		case 'c':
			area_cerchio();
		break;
		
		default:
			cout << "\n*ERRORE*\n";
		break;
	}
	cout << endl;
	system("PAUSE");
	return 0;
}
void area_quadrato()
{
	float lato=0,area=0;
	cout << "\nInserici il lato del quadrato: ";
	cin >> lato;
	area = lato * lato;
	cout << "\nL'area assume valore " << area << ".";
}
void area_triangolo()
{
	float base=0,altezza=0,area=0;
	cout << "\nInserici la base del triangolo: ";
	cin >> base;
	cout << "\nInserici l'altezza del triangolo: ";
	cin >> altezza;
	area = base * altezza;
	cout << "\nL'area assume valore¨ " << area << ".";
}
void area_cerchio()
{
	const float P=3.1415;
	float raggio=0,area=0;
	cout << "\nInserici il raggio della circonferenza: ";
	cin >> raggio;
	area = P * pow(raggio,2.0);
	cout << "\nL'area assume valore " << area << ".";
}
