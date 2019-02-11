//Es1-1102
#include <iostream>
#include <ctime>

using namespace std;

void inserisci (int v[], int);
float calcolamedia (int v[], int);
void contaltezze (int v[], int, float);
int main()
{
	srand(time(NULL));
	int const max = 30;
	int vett[max];
	float media;
	inserisci (vett, max);
	media = calcolamedia (vett, max);
	contaltezze (vett, max, media);
}
void inserisci (int v[], int dim)				//carica i vettori con numeri random da 140 a 200
{
	for (int i = 0; i < dim; i++)
		v[i] = (rand()%61)+140;
}
float calcolamedia (int v[], int dim)			//calcola la media
{
	float s=0,m=0;
	for (int i = 0; i < dim; i++)
		s += v[i];
	m = s/dim;
	cout << "\nLa media e' " << m;
	return m;
}
void contaltezze (int v[], int dim, float m)	//calcolo gli alunni che superano l'altezza media
{
	int conta = 0;
	for (int i = 0; i < dim; i++)
	{
		if (v[i] > m)
			conta++;
	}
	cout << "\nGli alunni che superano la media sono: " << conta << ".\n";
}
