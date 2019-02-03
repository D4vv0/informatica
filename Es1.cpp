//Esercitazione in classe 01/02/2019
#include <iostream>
using namespace std;

int min(int num1, int num2);
int main()
{
	int n1=0,n2=0,mnm=0;
	do {
		cout << "\nInserisci il primo numero intero POSITIVO: ";
		cin >> n1;
		cout << "\nInserisci il secondo numero intero POSITIVO: ";
		cin >> n2;
	} while (n1<0 && n2<0);
	mnm=min(n1,n2);
	cout << "\nIl numero con valore minore: " << mnm << endl;
	return 0;
}
int min(int num1, int num2)
{
	if (num1<num2)
		return num1;
	else
		return num2;
}
