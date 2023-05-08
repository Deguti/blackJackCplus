#include <iostream>
#include "FuncionesBlackJack.h"

int main()
{
	srand(time(NULL));
	//Definicio de variables las inicializo todas ya que mi programa no permite correr sin que lo haga.
	string nombrejugador1, nombrejugador2, nombrejugador3, quiereoNo;
	char jugarOtravez = 'n';
	int GeneraAzar = 0, acumJugador1 = 0, acumJugador2 = 0, acumJugador3 = 0,
		jugador1, jugador2, jugador3, i = 0, descalifica1 = 0, ronda = 1, mayor = 0;
	int TodosPasan=0, noCartas1 =0, noCartas2=0, noCartas3=0;
	bool sePaso1 = false, sePaso2 = false,sePaso3 = false, veintiuno1 = false, veintiuno2 = false, veintiuno3 = false,todospasaron =false;
	//**************************************************

	//Vector de tipo struct
	Cartas VectorCartas[52];
	//****************************************

	GenerarMaso(VectorCartas); // funcion que genera el maso de forma ordenada
	do {
		acumJugador1 = 0;
		acumJugador2 = 0;
		acumJugador3 = 0;
		cout << "********* JUEGO DEL BLACK JACk O 21 CON TRES JUGADORES *********\n";
		cout << "\n\nEste es el maso con el que se jugara\n\n";
		mostrarCartas(VectorCartas); cout << "\n";// funcion para mostrar el maso
		system("pause");
		system("cls");
		cout << "\n\nDigite el nombre de cada jugador\n\n";
		cin >> nombrejugador1;
		cout << "Las Cartas de " << nombrejugador1 << " son: ";
		//Prmiera ronda de dos cartas***************************
		for (int j = 0; j < 2; j++)
		{
			GeneraAzar = numAzar();
			jugador1 = darCartaaJugador(GeneraAzar, VectorCartas);
			acumJugador1 =acumJugador1+ jugador1;
		}
		cout << "\n";
		cout << "\nDigite el nombre del jugador 2 \n";
		cin >> nombrejugador2;
		cout << "Las Cartas de " << nombrejugador2 << " son: ";
		for (int j = 0; j < 2; j++)
		{
			GeneraAzar = numAzar();
			jugador2 = darCartaaJugador(GeneraAzar, VectorCartas);
			acumJugador2 =acumJugador2+ jugador2;
		}
		cout << "\n";
		cout << "\nDigite el nombre del jugador 3 \n";
		cin >> nombrejugador3;
		cout << "Las Cartas de " << nombrejugador3 << " son: ";
		for (int j = 0; j < 2; j++)
		{
			GeneraAzar = numAzar();
			jugador3 = darCartaaJugador(GeneraAzar, VectorCartas);
			acumJugador3 =acumJugador3+ jugador3;
		}
		cout << "\n\n";
		system("pause");
		//*******************************************

		do {
			//JUGADOR 1
			system("pause");
			system("cls");
			if (sePaso1 == true)
			{
				cout << "\nEl jugador " << nombrejugador1 << "esta en espera\n";
			}
			else {
				cout << "\n\nJugada de " << nombrejugador1 << endl;
				cout << "\nEn este momento tienes: " << acumJugador1 << "\n";
				cout << "\nDesea otra carta (s/n)\n";
				cin >> quiereoNo;
				if (quiereoNo == "n") {
					cout << "\nEl jugador " << nombrejugador1 << " va a pemanecer pero sin tomar mas cartas. \n";
					noCartas1 = 1;
				}
				else {
					GeneraAzar = numAzar();
					jugador1 = darCartaaJugador(GeneraAzar, VectorCartas);
					cout << "\n";
					acumJugador1 =acumJugador1 + jugador1;
					cout << "La suma de las cartas de " << nombrejugador1 << " es de: " << acumJugador1 << "\n";
					if (acumJugador1 == 21)
					{
						veintiuno1 = true;
						cout << "\nEl jugador " << nombrejugador1 << " tiene un acumulado de 21\n";
					}
					if (acumJugador1 > 21)
					{
						cout << "\nEl jugador " << nombrejugador1 << " se ah pasado de 21. \n";
						sePaso1 = true;
						noCartas1 = 1;
					}
				}
			}
			//JUGADOR 2
			system("pause");
			system("cls");
			if (sePaso2 == true)
			{
				cout << "\nEl jugador " << nombrejugador2 << "esta en espera\n";
			}
			else {
				cout << "\n\nJugada de " << nombrejugador2 << endl;
				cout << "\nEn este momento tienes: " << acumJugador2 << "\n";
				cout << "\nDesea otra carta (s/n)\n";
				cin >> quiereoNo;
				if (quiereoNo == "n")
				{
					cout << "\nEl jugador " << nombrejugador2 << " va a pemanecer pero sin tomar mas cartas. \n";
					noCartas2 = 1;
				}
				else {
					GeneraAzar = numAzar();
					jugador2 = darCartaaJugador(GeneraAzar, VectorCartas);
					cout << "\n";
					acumJugador2 = acumJugador2 + jugador2;
					cout << "La suma de las cartas de " << nombrejugador2 << " es de: " << acumJugador2 << "\n";
					if (acumJugador2 == 21)
					{
						veintiuno2 = true;
						cout << "\nEl jugador " << nombrejugador2 << " tiene un acumulado de 21\n";
					}
					if (acumJugador2 > 21)
					{
						cout << "\nEl jugador " << nombrejugador2 << " se ah pasado de 21.\n";
						sePaso2 = true;
						noCartas2 = 1;
					}
				}
			}
			//JUGADOR 3
			system("pause");
			system("cls");
			if (sePaso3 == true)
			{
				cout << "\nEl jugador " << nombrejugador3 << "esta en espera\n";
			}
			else {
				cout << "\n\nJugada de " << nombrejugador3 << endl;
				cout << "\nEn este momento tienes: " << acumJugador3 << "\n";
				cout << "\nDesea otra carta (s/n)\n";
				cin >> quiereoNo;
				if (quiereoNo == "n")
				{
					cout << "\nEl jugador " << nombrejugador3 << " va a pemanecer pero sin tomar mas cartas. \n";
					noCartas3 = 1;
				}
				else {
					GeneraAzar = numAzar();
					jugador3 = darCartaaJugador(GeneraAzar, VectorCartas);
					cout << "\n";
					acumJugador3 =acumJugador3 + jugador3;
					cout << "\nLa suma de las cartas de " << nombrejugador3 << " es de: " << acumJugador3 << "\n";
					if (acumJugador3 == 21)
					{
						veintiuno3 = true;
						cout << "\nEl jugador " << nombrejugador3 << " tiene un acumulado de 21\n";
					}
					if (acumJugador3 > 21)
					{
						cout << "\nEl jugador " << nombrejugador3 << " se ah pasado de 21\n";
						sePaso3 = true;
						noCartas3 = 1;
					}
				}
			}
			TodosPasan = noCartas1 + noCartas2 + noCartas3;
			if (sePaso1 == true && sePaso2 == true && sePaso3 == true) {
				todospasaron = true;
			}
			else if (TodosPasan >= 3) {
				todospasaron = true;
			}
			else if (veintiuno1 == true || veintiuno2 == true || veintiuno3 == true) {
				todospasaron = true;
			}
		} while (todospasaron == false);
		system("pause");
		//gana con 21
		if (veintiuno1 == true)
		{
			cout << "\n" << nombrejugador1 << " es el ganador  del black jack\n";
		}
		else if (veintiuno2 == true)
		{
			cout << "\n" << nombrejugador2 << " es el ganador  del black jack\n";
		}
		else if (veintiuno3 == true)
		{
			cout << "\n" << nombrejugador3 << " es el ganador  del black jack\n";
		}
		//gana acumulado mayor
		if (acumJugador1 < 21) {
			if (acumJugador1 > mayor) {

				mayor = acumJugador1;
			}
		}
		if (acumJugador2 < 21) {
			if (acumJugador2 > mayor)
			{
				mayor = acumJugador2;
			}
		}
		if (acumJugador3 < 21) {
			if (acumJugador3 > mayor) {
				mayor = acumJugador3;
			}
		}
		if (mayor == acumJugador1) {
			cout << "\n" << nombrejugador1 << " a ganado con: " << acumJugador1 << "\n";
		}
		else if (acumJugador2 == mayor) {
			cout << "\n" << nombrejugador2 << " a ganado con: " << acumJugador2 << "\n";
		}
		else if (acumJugador3 == mayor) {
			cout << "\n" << nombrejugador3 << " a ganado con: " << acumJugador3 << "\n";
		}
		if (acumJugador1 < 21 && acumJugador1 == acumJugador2) {
			cout << "\nLos juagdores " << nombrejugador1 << " y " << nombrejugador2 << " han empatado.";
		}
		else if (acumJugador1 < 21 && acumJugador1 == acumJugador3) {
			cout << "\nLos juagdores " << nombrejugador1 << " y " << nombrejugador3 << " han empatado.";
		}
		else if (acumJugador2 < 21 && acumJugador2 == acumJugador1) {
			cout << "\nLos juagdores " << nombrejugador1 << " y " << nombrejugador2 << " han empatado.";
		}
		else if (acumJugador2 < 21 && acumJugador2 == acumJugador3) {
			cout << "\nLos juagdores " << nombrejugador1 << " y " << nombrejugador3 << " han empatado.";
		}
		else if (acumJugador3 < 21)
		if (acumJugador1 > 21 && acumJugador2 > 21 && acumJugador3 > 21) {
			cout << "\nTodos los jugadores se han pasado ninguno ah ganado el Black Jack\n";
		}
		cout << "\nDesea Jugar de nuevo (s/n)\n";
		cin >> jugarOtravez;
	} while (jugarOtravez == 's');

	return 0;

}
