#include<string>
#include<iostream>
using namespace std;

struct Cartas
{
	int carta;
	string signo;
	string JQK;
};

void GenerarMaso(struct Cartas pVectorCartas[]) {
	int contador=1,contador2=1,contador3=1;
	//guarda corazones
	for (int i = 0; i < 13; i++)
	{
		if (i == 0)
		{
			pVectorCartas[i].carta = 11;
			pVectorCartas[i].JQK = "A";
			pVectorCartas[i].signo = "\3";
			i = 0;
		}
		if (i < 10) {
			pVectorCartas[i].carta = i+1;
			pVectorCartas[i].signo = "\3";
		}
		if (i == 10)
		{
			pVectorCartas[i].carta = 10;
			pVectorCartas[i].JQK = "J";
			pVectorCartas[i].signo = "\3";
		}
		if (i == 11)
		{
			pVectorCartas[i].carta = 10;
			pVectorCartas[i].JQK = "Q";
			pVectorCartas[i].signo = "\3";
		}
		if (i == 12)
		{
			pVectorCartas[i].carta = 10;
			pVectorCartas[i].JQK = "K";
			pVectorCartas[i].signo = "\3";
		}
		
	}
	//guarda diamantes
	for (int i = 13; i < 26; i++)
	{
		if (i == 13)
		{
			pVectorCartas[i].carta = 11;
			pVectorCartas[i].JQK = "A";
			pVectorCartas[i].signo = "\4";
			i = 13;
		}
		if (i < 23) {
			pVectorCartas[i].carta = contador;
			pVectorCartas[i].signo = "\4";
			contador++;
		}
		if (i == 23)
		{
			pVectorCartas[i].carta = 10;
			pVectorCartas[i].JQK = "J";
			pVectorCartas[i].signo = "\4";
		}
		if (i == 24)
		{
			pVectorCartas[i].carta = 10;
			pVectorCartas[i].JQK = "Q";
			pVectorCartas[i].signo = "\4";
		}
		if (i == 25)
		{
			pVectorCartas[i].carta = 10;
			pVectorCartas[i].JQK = "K";
			pVectorCartas[i].signo = "\4";
		}

	}
	//guarda treboles
	for (int i = 26; i < 39; i++)
	{
		if (i == 26)
		{
			pVectorCartas[i].carta = 11;
			pVectorCartas[i].JQK = "A";
			pVectorCartas[i].signo = "\5";
			i = 26;
		}
		if (i < 36) {
			pVectorCartas[i].carta = contador2;
			pVectorCartas[i].signo = "\5";
			contador2++;
		}
		if (i == 36)
		{
			pVectorCartas[i].carta = 10;
			pVectorCartas[i].JQK = "J";
			pVectorCartas[i].signo = "\5";
		}
		if (i == 37)
		{
			pVectorCartas[i].carta = 10;
			pVectorCartas[i].JQK = "Q";
			pVectorCartas[i].signo = "\5";
		}
		if (i == 38)
		{
			pVectorCartas[i].carta = 10;
			pVectorCartas[i].JQK = "K";
			pVectorCartas[i].signo = "\5";
		}

	}
	//Guarda picas 
	for (int i = 39; i < 52; i++)
	{
		if (i == 39)
		{
			pVectorCartas[i].carta = 11;
			pVectorCartas[i].JQK = "A";
			pVectorCartas[i].signo = "\6";
			i = 39;
		}
		if (i < 49) {
			pVectorCartas[i].carta = contador3;
			pVectorCartas[i].signo = "\6";
			contador3++;
		}
		if (i == 49)
		{
			pVectorCartas[i].carta = 10;
			pVectorCartas[i].JQK = "J";
			pVectorCartas[i].signo = "\6";
		}
		if (i == 50)
		{
			pVectorCartas[i].carta = 10;
			pVectorCartas[i].JQK = "Q";
			pVectorCartas[i].signo = "\6";
		}
		if (i == 51)
		{
			pVectorCartas[i].carta = 10;
			pVectorCartas[i].JQK = "K";
			pVectorCartas[i].signo = "\6";
		}

	}
}

void mostrarCartas(struct Cartas pVectorCartas[]) {
	//muestra corazones
	for (int i = 0; i < 13; i++)
	{
		if (i == 0)
		cout << "[ " << pVectorCartas[i].JQK << pVectorCartas[i].signo << " ] ";
		else if (i<10)
		{
			cout << "[ " << pVectorCartas[i].carta << pVectorCartas[i].signo << " ] ";
		}
		else {
			cout << "[ " << pVectorCartas[i].JQK << pVectorCartas[i].signo << " ] ";
		}
		if (i == 12)
		{
			cout << "\n";
		}	
	}
	//muestra diamantes 
	for (int i = 13; i < 26; i++)
	{
		if (i == 13)
			cout << "[ " << pVectorCartas[i].JQK << pVectorCartas[i].signo << " ] ";
		else if (i < 23)
		{
			cout << "[ " << pVectorCartas[i].carta << pVectorCartas[i].signo << " ] ";
		}
		else  {
			cout << "[ " << pVectorCartas[i].JQK << pVectorCartas[i].signo << " ] ";
		}
		if (i == 25)
		{
			cout << "\n";
		}
	}
	//muestra treboles
	for (int i = 26; i < 39; i++)
	{
		if (i == 26)
			cout << "[ " << pVectorCartas[i].JQK << pVectorCartas[i].signo << " ] ";
		else if (i <36 )
		{
			cout << "[ " << pVectorCartas[i].carta << pVectorCartas[i].signo << " ] ";
		}
		else {
			cout << "[ " << pVectorCartas[i].JQK << pVectorCartas[i].signo << " ] ";
		}
		if (i == 38)
		{
			cout << "\n";
		}
	}
	//Muestra picas 
	for (int i = 39; i < 52; i++)
	{
		if (i == 39)
			cout << "[ " << pVectorCartas[i].JQK << pVectorCartas[i].signo << " ] ";
		else if (i < 49)
		{
			cout << "[ " << pVectorCartas[i].carta << pVectorCartas[i].signo << " ] ";
		}
		else {
			cout << "[ " << pVectorCartas[i].JQK << pVectorCartas[i].signo << " ] ";
		}
	}
	cout << "\n";
}
int numAzar() {
	int numeroAzar;
	numeroAzar = rand()%52;
	return numeroAzar;
}
int darCartaaJugador(int numeroAzar, struct Cartas	pVectorCartas[]) {
	if (pVectorCartas[numeroAzar].carta == 0)
	{
		numAzar();
	}
	else {
		int carta = pVectorCartas[numeroAzar].carta;
		string signo = pVectorCartas[numeroAzar].signo;	
		string JQK = pVectorCartas[numeroAzar].JQK;
		cout << "[ "<< carta;
		cout << JQK;
		cout << signo << " ]";
		pVectorCartas[numeroAzar].carta = 0;
		return carta;
	}

}
