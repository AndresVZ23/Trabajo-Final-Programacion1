#include "pch.h"
#include <iostream>
#include <ctype.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>
using namespace std;
using namespace System;
#define fila 72
#define columna 54

string matriz[7][7] = { {"a","0","0","b","0","0","c"},
		{"0","d","0","e","0","f","0"},
		{"0","0","g","h","i","0","0"},
		{"j","k","l","0","m","n","p"},
		{"0","0","q","r","s","0","0"},
		{"0","t","0","u","0","v","0"},
		{"w","0","0","y","0","0","z"} };
int cont1f = 0;
int cont2f = 0;
void eliminarf(string matriz[7][7], int turno, string* jugador1, string* jugador2) {
	char fichae2;
	if ((matriz[0][0] == matriz[0][3] && matriz[0][0] == matriz[0][6]) || (matriz[1][1] == matriz[1][3] && matriz[1][1] == matriz[1][5]) || (matriz[2][2] == matriz[2][3] && matriz[2][2] == matriz[2][4]) || (matriz[3][0] == matriz[3][1] && matriz[3][0] == matriz[3][2]) || (matriz[3][4] == matriz[3][5] && matriz[3][4] == matriz[3][6]) || (matriz[4][2] == matriz[4][3] && matriz[4][2] == matriz[4][4]) || (matriz[5][1] == matriz[5][3] && matriz[5][1] == matriz[5][5]) || (matriz[6][0] == matriz[6][3] && matriz[6][0] == matriz[6][6]) || (matriz[0][0] == matriz[3][0] && matriz[0][0] == matriz[6][0]) || (matriz[1][1] == matriz[3][1] && matriz[1][1] == matriz[5][1]) || (matriz[2][2] == matriz[3][2] && matriz[2][2] == matriz[4][2]) || (matriz[0][3] == matriz[1][3] && matriz[0][3] == matriz[2][3]) || (matriz[4][3] == matriz[5][3] && matriz[4][3] == matriz[6][3]) || (matriz[2][4] == matriz[3][4] && matriz[2][4] == matriz[4][4]) || (matriz[1][5] == matriz[3][5] && matriz[1][5] == matriz[5][5]) || (matriz[0][6] == matriz[3][6] && matriz[0][6] == matriz[6][6])) {
		Console::SetCursorPosition(60, 47);
		cout << "Felicidades! Lograste generar un molino, indica cual ficha de tu rival quieres eliminar: ";
		cin >> fichae2;
		if (fichae2 == 'a') {
			matriz[0][0] = "a";
			Console::SetCursorPosition(4, 16);
			cout << "a";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'b') {
			matriz[0][3] = "b";
			Console::SetCursorPosition(23, 16);
			cout << "b";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'c') {
			matriz[0][6] = "c";
			Console::SetCursorPosition(43, 16);
			cout << "c";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'd') {
			matriz[1][1] = "d";
			Console::SetCursorPosition(9, 19);
			cout << "d";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'e') {
			matriz[1][3] = "e";
			Console::SetCursorPosition(23, 19);
			cout << "e";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'f') {
			matriz[1][5] = "f";
			Console::SetCursorPosition(38, 19);
			cout << "f";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'g') {
			matriz[2][2] = "g";
			Console::SetCursorPosition(14, 22);
			cout << "g";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'h') {
			matriz[2][3] = "h";
			Console::SetCursorPosition(23, 22);
			cout << "h";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'i') {
			matriz[2][4] = "i";
			Console::SetCursorPosition(33, 22);
			cout << "i";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'j') {
			matriz[3][0] = "j";
			Console::SetCursorPosition(4, 26);
			cout << "j";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'k') {
			matriz[3][1] = "k";
			Console::SetCursorPosition(9, 26);
			cout << "k";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'l') {
			matriz[3][2] = "l";
			Console::SetCursorPosition(14, 26);
			cout << "l";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'm') {
			matriz[3][4] = "m";
			Console::SetCursorPosition(33, 26);
			cout << "m";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'n') {
			matriz[3][5] = "n";
			Console::SetCursorPosition(38, 26);
			cout << "n";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'p') {
			matriz[3][6] = "p";
			Console::SetCursorPosition(43, 26);
			cout << "p";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'q') {
			matriz[4][2] = "q";
			Console::SetCursorPosition(14, 30);
			cout << "q";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'r') {
			matriz[4][3] = "r";
			Console::SetCursorPosition(23, 30);
			cout << "r";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 's') {
			matriz[4][4] = "s";
			Console::SetCursorPosition(33, 30);
			cout << "s";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 't') {
			matriz[5][1] = "t";
			Console::SetCursorPosition(9, 33);
			cout << "t";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'u') {
			matriz[5][3] = "u";
			Console::SetCursorPosition(23, 33);
			cout << "u";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'v') {
			matriz[5][5] = "v";
			Console::SetCursorPosition(38, 33);
			cout << "v";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'w') {
			matriz[6][0] = "w";
			Console::SetCursorPosition(4, 36);
			cout << "w";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'y') {
			matriz[6][3] = "y";
			Console::SetCursorPosition(23, 36);
			cout << "y";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
		else if (fichae2 == 'z') {
			matriz[6][6] = "z";
			Console::SetCursorPosition(43, 36);
			cout << "z";
			if (turno == 1) {
				cont2f--;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (turno == 2) {
				cont1f--;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
		}
	}
}

int funcion_iniciar() {
	int turno;
	int i, j;
	string letraeliminar;
	string* jugador1 = new string;
	string* jugador2 = new string;
	string* ficha1 = new string;
	*ficha1 = "X";
	string* ficha2 = new string;
	*ficha2 = "O";
	char* color1 = new char;
	char* color2 = new char;
	char* posicion = new char;
	char* posicion2 = new char;
	cout << "==================" << endl;
	cout << " INICIO DEL JUEGO " << endl;
	cout << "==================" << endl;
	cout << "Ingresar el nombre del jugador 1: ";
	cin >> *jugador1;
	cout << "Ingresar el nombre del jugador 2: ";
	cin >> *jugador2;
	cout << "\n";
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 2);
	cout << "Ficha de " << *jugador1 << " : " << *ficha1;
	cout << "\nFicha de " << *jugador2 << " : " << *ficha2;
	cout << endl;
	cout << *jugador1 << " elige el color de tus fichas (A: Amarillo, B: Blanco, R:Rojo, Z: Azul): ";
	cin >> *color1;
	cout << *jugador2 << " elige el color de tus fichas (A: Amarillo, B: Blanco, R:Rojo, Z: Azul): ";
	cin >> *color2;
	switch (*color1)
	{
	case 'A': case'a':
	{
		SetConsoleTextAttribute(hConsole, 6);
		cout << "    " << *ficha1;
	}
	break;
	case 'B': case 'b':
	{
		SetConsoleTextAttribute(hConsole, 7);
		cout << "    " << *ficha1;
	}
	break;
	case 'R': case 'r':
	{
		SetConsoleTextAttribute(hConsole, 4);
		cout << "    " << *ficha1;
	}
	break;
	case 'Z': case 'z':
	{
		SetConsoleTextAttribute(hConsole, 1);
		cout << "    " << *ficha1;
	}
	}
	cout << endl;
	switch (*color2)
	{
	case 'A': case'a':
	{
		SetConsoleTextAttribute(hConsole, 6);
		cout << "    " << *ficha2;
	}
	break;
	case 'B': case 'b':
	{
		SetConsoleTextAttribute(hConsole, 7);
		cout << "    " << *ficha2;
	}
	break;
	case 'R': case 'r':
	{
		SetConsoleTextAttribute(hConsole, 4);
		cout << "    " << *ficha2;
	}
	break;
	case 'Z': case 'z':
	{
		SetConsoleTextAttribute(hConsole, 1);
		cout << "    " << *ficha2;
	}
	}
	SetConsoleTextAttribute(hConsole, 2);
	for (i = 0; i < 38; i++)
	{
		Console::SetCursorPosition(4 + i, 16);
		cout << "_";
		Console::SetCursorPosition(3, 16);
		cout << "[a]";
		Console::SetCursorPosition(22, 16);
		cout << "[b]";
		Console::SetCursorPosition(42, 16);
		cout << "[c]";
	}
	for (i = 0; i < 27; i++)
	{
		Console::SetCursorPosition(10 + i, 19);
		cout << "_";
		Console::SetCursorPosition(8, 19);
		cout << "[d]";
		Console::SetCursorPosition(22, 19);
		cout << "[e]";
		Console::SetCursorPosition(37, 19);
		cout << "[f]";
	}
	for (i = 0; i < 26; i++)
	{
		Console::SetCursorPosition(11 + i, 32);
		cout << "_";
		Console::SetCursorPosition(37, 33);
		cout << "[v]";
		Console::SetCursorPosition(22, 32);
		cout << " ";
		Console::SetCursorPosition(23, 32);
		cout << " ";
		Console::SetCursorPosition(24, 32);
		cout << " ";
		Console::SetCursorPosition(22, 33);
		cout << "[u]";
	}
	for (i = 0; i < 18; i++)
	{
		Console::SetCursorPosition(15 + i, 22);
		cout << "_";
		Console::SetCursorPosition(13, 22);
		cout << "[g]";
		Console::SetCursorPosition(22, 22);
		cout << "[h]";
		Console::SetCursorPosition(32, 22);
		cout << "[i]";
	}
	for (i = 0; i < 16; i++)
	{
		Console::SetCursorPosition(16 + i, 29);
		cout << "_";
		Console::SetCursorPosition(22, 29);
		cout << " ";
		Console::SetCursorPosition(23, 29);
		cout << " ";
		Console::SetCursorPosition(24, 29);
		cout << " ";
		Console::SetCursorPosition(32, 30);
		cout << "[s]";
		Console::SetCursorPosition(22, 30);
		cout << "[r]";
	}
	for (j = 0; j < 19; j++)
	{
		Console::SetCursorPosition(4, 17 + j);
		cout << "|";
		Console::SetCursorPosition(3, 26);
		cout << "[j]";
		Console::SetCursorPosition(3, 36);
		cout << "[w]";

		cout << endl;
	}
	for (j = 0; j < 19; j++)
	{
		Console::SetCursorPosition(43, 17 + j);
		cout << "|";
		Console::SetCursorPosition(42, 26);
		cout << "[p]";

		cout << endl;
	}
	for (j = 0; j < 13; j++)
	{
		Console::SetCursorPosition(9, 20 + j);
		cout << "|";
		Console::SetCursorPosition(8, 33);
		cout << "[t]";
		Console::SetCursorPosition(8, 26);
		cout << "[k]";
		cout << endl;
	}
	for (j = 0; j < 13; j++)
	{
		Console::SetCursorPosition(38, 20 + j);
		cout << "|";
		Console::SetCursorPosition(37, 26);
		cout << "[n]";
		cout << endl;
	}
	for (j = 0; j < 7; j++)
	{
		Console::SetCursorPosition(14, 23 + j);
		cout << "|";
		Console::SetCursorPosition(13, 30);
		cout << "[q]";
		Console::SetCursorPosition(13, 26);
		cout << "[l]";
		cout << endl;
	}
	for (j = 0; j < 7; j++)
	{
		Console::SetCursorPosition(33, 23 + j);
		cout << "|";
		Console::SetCursorPosition(32, 26);
		cout << "[m]";
		cout << endl;
	}
	for (i = 0; i < 36; i++)
	{
		Console::SetCursorPosition(6 + i, 35);
		cout << "_";
		Console::SetCursorPosition(22, 35);
		cout << " ";
		Console::SetCursorPosition(23, 35);
		cout << " ";
		Console::SetCursorPosition(24, 35);
		cout << " ";
		Console::SetCursorPosition(22, 36);
		cout << "[y]";
		Console::SetCursorPosition(42, 36);
		cout << "[z]";
	}
	cout << endl;
	int cont1m = 0;
	int cont2m = 0;
	cout << endl;

	for (i = 0; i < 9; i++) {

		do {
			Console::SetCursorPosition(25, 39);
			cout << "PRIMERA FASE DEL JUEGO";
			Console::SetCursorPosition(3, 40);
			cout << *jugador1 << " indique donde quiere colocar su ficha: ";
			cin >> *posicion;
			if (*posicion == 'a')
			{
				matriz[0][0] = *ficha1;
				Console::SetCursorPosition(4, 16);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'b')
			{
				matriz[0][3] = *ficha1;
				Console::SetCursorPosition(23, 16);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'c')
			{
				matriz[0][6] = *ficha1;
				Console::SetCursorPosition(43, 16);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'd')
			{
				matriz[1][1] = *ficha1;
				Console::SetCursorPosition(9, 19);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'e')
			{
				matriz[1][3] = *ficha1;
				Console::SetCursorPosition(23, 19);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'f')
			{
				matriz[1][5] = *ficha1;
				Console::SetCursorPosition(38, 19);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'g')
			{
				matriz[2][2] = *ficha1;
				Console::SetCursorPosition(14, 22);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'h')
			{
				matriz[2][3] = *ficha1;
				Console::SetCursorPosition(23, 22);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'i')
			{
				matriz[2][4] = *ficha1;
				Console::SetCursorPosition(33, 22);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'j')
			{
				matriz[3][0] = *ficha1;
				Console::SetCursorPosition(4, 26);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'k')
			{
				matriz[3][1] = *ficha1;
				Console::SetCursorPosition(9, 26);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'l')
			{
				matriz[3][2] = *ficha1;
				Console::SetCursorPosition(14, 26);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'm')
			{
				matriz[3][4] = *ficha1;
				Console::SetCursorPosition(33, 26);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'n')
			{
				matriz[3][5] = *ficha1;
				Console::SetCursorPosition(38, 26);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'p')
			{
				matriz[3][6] = *ficha1;
				Console::SetCursorPosition(43, 26);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'q')
			{
				matriz[4][2] = *ficha1;
				Console::SetCursorPosition(14, 30);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'r')
			{
				matriz[4][3] = *ficha1;
				Console::SetCursorPosition(23, 30);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 's')
			{
				matriz[4][4] = *ficha1;
				Console::SetCursorPosition(33, 30);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 't')
			{
				matriz[5][1] = *ficha1;
				Console::SetCursorPosition(9, 33);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'u')
			{
				matriz[5][3] = *ficha1;
				Console::SetCursorPosition(23, 33);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'v')
			{
				matriz[5][5] = *ficha1;
				Console::SetCursorPosition(38, 33);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'w')
			{
				matriz[6][0] = *ficha1;
				Console::SetCursorPosition(4, 36);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'y')
			{
				matriz[6][3] = *ficha1;
				Console::SetCursorPosition(23, 36);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			else if (*posicion == 'z')
			{
				matriz[6][6] = *ficha1;
				Console::SetCursorPosition(43, 36);
				cout << *ficha1;
				cont1f++;
				Console::SetCursorPosition(30, 11);
				cout << "fichas " << *jugador1 << ": " << cont1f;
			}
			Console::SetCursorPosition(3, 42);
			cout << *jugador2 << " indique donde quiere colocar su ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'a' && *posicion2 != *posicion)
			{
				matriz[0][0] = *ficha2;
				Console::SetCursorPosition(4, 16);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'b' && *posicion2 != *posicion)
			{
				matriz[0][3] = *ficha2;
				Console::SetCursorPosition(23, 16);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'c' && *posicion2 != *posicion)
			{
				matriz[0][6] = *ficha2;
				Console::SetCursorPosition(43, 16);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'd' && *posicion2 != *posicion)
			{
				matriz[1][1] = *ficha2;
				Console::SetCursorPosition(9, 19);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'e' && *posicion2 != *posicion)
			{
				matriz[1][3] = *ficha2;
				Console::SetCursorPosition(23, 19);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'f' && *posicion2 != *posicion)
			{
				matriz[1][5] = *ficha2;
				Console::SetCursorPosition(38, 19);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'g' && *posicion2 != *posicion)
			{
				matriz[2][2] = *ficha2;
				Console::SetCursorPosition(14, 22);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'h' && *posicion2 != *posicion)
			{
				matriz[2][3] = *ficha2;
				Console::SetCursorPosition(23, 22);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'i' && *posicion2 != *posicion)
			{
				matriz[2][4] = *ficha2;
				Console::SetCursorPosition(33, 22);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'j' && *posicion2 != *posicion)
			{
				matriz[3][0] = *ficha2;
				Console::SetCursorPosition(4, 26);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'k' && *posicion2 != *posicion)
			{
				matriz[3][1] = *ficha2;
				Console::SetCursorPosition(9, 26);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'l' && *posicion2 != *posicion)
			{
				matriz[3][2] = *ficha2;
				Console::SetCursorPosition(14, 26);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'm' && *posicion2 != *posicion)
			{
				matriz[3][4] = *ficha2;
				Console::SetCursorPosition(33, 26);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'n' && *posicion2 != *posicion)
			{
				matriz[3][5] = *ficha2;
				Console::SetCursorPosition(38, 26);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'p' && *posicion2 != *posicion)
			{
				matriz[3][6] = *ficha2;
				Console::SetCursorPosition(43, 26);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'q' && *posicion2 != *posicion)
			{
				matriz[4][2] = *ficha2;
				Console::SetCursorPosition(14, 30);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'r' && *posicion2 != *posicion)
			{
				matriz[4][3] = *ficha2;
				Console::SetCursorPosition(23, 30);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 's' && *posicion2 != *posicion)
			{
				matriz[4][4] = *ficha2;
				Console::SetCursorPosition(33, 30);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 't' && *posicion2 != *posicion)
			{
				matriz[5][1] = *ficha2;
				Console::SetCursorPosition(9, 33);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'u' && *posicion2 != *posicion)
			{
				matriz[5][3] = *ficha2;
				Console::SetCursorPosition(23, 33);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'v' && *posicion2 != *posicion)
			{
				matriz[5][5] = *ficha2;
				Console::SetCursorPosition(38, 33);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'w' && *posicion2 != *posicion)
			{
				matriz[6][0] = *ficha2;
				Console::SetCursorPosition(4, 36);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'y' && *posicion2 != *posicion)
			{
				matriz[6][3] = *ficha2;
				Console::SetCursorPosition(23, 36);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
			else if (*posicion2 == 'z' && *posicion2 != *posicion)
			{
				matriz[6][6] = *ficha2;
				Console::SetCursorPosition(43, 36);
				cout << *ficha2;
				cont2f++;
				Console::SetCursorPosition(30, 12);
				cout << "fichas " << *jugador2 << ": " << cont2f;
			}
		} while (*posicion == *posicion2);

	}
	for (i = 0; i < 500; i++) {

		Console::SetCursorPosition(25, 43);
		cout << "SEGUNDA FASE DEL JUEGO";
		Console::SetCursorPosition(3, 44);
		turno = 1;
		cout << *jugador1 << " indique la ficha que quiere mover: ";
		cin >> *posicion;
		if (*posicion == 'a') {
			Console::SetCursorPosition(4, 16);
			cout << "a";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'b') {
				matriz[0][0] = "a";
				matriz[0][3] = *ficha1;
				Console::SetCursorPosition(23, 16);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'j') {
				matriz[0][0] = "a";
				matriz[3][0] = *ficha1;
				Console::SetCursorPosition(4, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'b') {
			Console::SetCursorPosition(23, 16);
			cout << "b";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'a') {
				matriz[0][3] = "b";
				matriz[0][0] = *ficha1;
				Console::SetCursorPosition(4, 16);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'c') {
				matriz[0][3] = "b";
				matriz[0][6] = *ficha1;
				Console::SetCursorPosition(43, 16);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'e') {
				matriz[0][3] = "b";
				matriz[1][3] = *ficha1;
				Console::SetCursorPosition(23, 19);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'c') {
			Console::SetCursorPosition(43, 16);
			cout << "c";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'b') {
				matriz[0][6] = "c";
				matriz[0][3] = *ficha1;
				Console::SetCursorPosition(23, 16);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'p') {
				matriz[0][6] = "c";
				matriz[3][6] = *ficha1;
				Console::SetCursorPosition(43, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'j') {
			Console::SetCursorPosition(4, 26);
			cout << "j";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'a') {
				matriz[3][0] = "j";
				matriz[0][0] = *ficha1;
				Console::SetCursorPosition(4, 16);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'w') {
				matriz[3][0] = "j";
				matriz[6][0] = *ficha1;
				Console::SetCursorPosition(4, 36);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'k') {
				matriz[3][0] = "j";
				matriz[3][1] = *ficha1;
				Console::SetCursorPosition(9, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'p') {
			Console::SetCursorPosition(43, 26);
			cout << "p";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'c') {
				matriz[3][6] = "p";
				matriz[0][6] = *ficha1;
				Console::SetCursorPosition(43, 16);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'z') {
				matriz[3][6] = "p";
				matriz[6][6] = *ficha1;
				Console::SetCursorPosition(43, 36);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'n') {
				matriz[3][6] = "p";
				matriz[3][5] = *ficha1;
				Console::SetCursorPosition(38, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'w') {
			Console::SetCursorPosition(4, 36);
			cout << "w";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'j') {
				matriz[6][0] = "w";
				matriz[3][0] = *ficha1;
				Console::SetCursorPosition(4, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'y') {
				matriz[6][0] = "w";
				matriz[6][3] = *ficha1;
				Console::SetCursorPosition(23, 36);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'z') {
			Console::SetCursorPosition(43, 36);
			cout << "z";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'y') {
				matriz[6][6] = "z";
				matriz[6][3] = *ficha1;
				Console::SetCursorPosition(23, 36);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'p') {
				matriz[6][6] = "z";
				matriz[3][6] = *ficha1;
				Console::SetCursorPosition(43, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'y') {
			Console::SetCursorPosition(23, 36);
			cout << "y";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'u') {
				matriz[6][3] = "y";
				matriz[5][3] = *ficha1;
				Console::SetCursorPosition(23, 33);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'w') {
				matriz[6][3] = "y";
				matriz[6][0] = *ficha1;
				Console::SetCursorPosition(4, 36);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'z') {
				matriz[6][3] = "y";
				matriz[6][6] = *ficha1;
				Console::SetCursorPosition(43, 36);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'd') {
			Console::SetCursorPosition(9, 19);
			cout << "d";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'e') {
				matriz[1][1] = "d";
				matriz[1][3] = *ficha1;
				Console::SetCursorPosition(23, 19);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'k') {
				matriz[1][1] = "d";
				matriz[3][1] = *ficha1;
				Console::SetCursorPosition(9, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'k') {
			Console::SetCursorPosition(9, 26);
			cout << "k";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'd') {
				matriz[3][1] = "k";
				matriz[1][1] = *ficha1;
				Console::SetCursorPosition(9, 19);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 't') {
				matriz[3][1] = "k";
				matriz[5][1] = *ficha1;
				Console::SetCursorPosition(9, 33);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'j') {
				matriz[3][1] = "k";
				matriz[3][0] = *ficha1;
				Console::SetCursorPosition(4, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'l') {
				matriz[3][1] = "k";
				matriz[3][2] = *ficha1;
				Console::SetCursorPosition(14, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 't') {
			Console::SetCursorPosition(9, 33);
			cout << "t";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'k') {
				matriz[5][1] = "t";
				matriz[3][1] = *ficha1;
				Console::SetCursorPosition(9, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'u') {
				matriz[5][1] = "t";
				matriz[5][3] = *ficha1;
				Console::SetCursorPosition(23, 33);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'f') {
			Console::SetCursorPosition(38, 19);
			cout << "f";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'e') {
				matriz[1][5] = "f";
				matriz[1][3] = *ficha1;
				Console::SetCursorPosition(23, 19);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'n') {
				matriz[1][5] = "f";
				matriz[3][5] = *ficha1;
				Console::SetCursorPosition(38, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'n') {
			Console::SetCursorPosition(38, 26);
			cout << "n";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'f') {
				matriz[3][5] = "n";
				matriz[1][5] = *ficha1;
				Console::SetCursorPosition(38, 19);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'v') {
				matriz[3][5] = "n";
				matriz[5][5] = *ficha1;
				Console::SetCursorPosition(38, 33);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'p') {
				matriz[3][5] = "n";
				matriz[3][6] = *ficha1;
				Console::SetCursorPosition(43, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'm') {
				matriz[3][5] = "n";
				matriz[3][4] = *ficha1;
				Console::SetCursorPosition(33, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'v') {
			Console::SetCursorPosition(38, 33);
			cout << "v";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'n') {
				matriz[5][5] = "v";
				matriz[3][5] = *ficha1;
				Console::SetCursorPosition(38, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'u') {
				matriz[5][5] = "v";
				matriz[5][3] = *ficha1;
				Console::SetCursorPosition(23, 33);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'u') {
			Console::SetCursorPosition(23, 33);
			cout << "u";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'y') {
				matriz[5][3] = "u";
				matriz[6][3] = *ficha1;
				Console::SetCursorPosition(23, 36);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'r') {
				matriz[5][3] = "u";
				matriz[4][3] = *ficha1;
				Console::SetCursorPosition(23, 30);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'v') {
				matriz[5][3] = "u";
				matriz[5][5] = *ficha1;
				Console::SetCursorPosition(38, 33);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 't') {
				matriz[5][3] = "u";
				matriz[5][1] = *ficha1;
				Console::SetCursorPosition(9, 33);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'e') {
			Console::SetCursorPosition(23, 19);
			cout << "e";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'b') {
				matriz[1][3] = "e";
				matriz[0][3] = *ficha1;
				Console::SetCursorPosition(23, 16);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'h') {
				matriz[1][3] = "e";
				matriz[2][3] = *ficha1;
				Console::SetCursorPosition(23, 22);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'f') {
				matriz[1][3] = "e";
				matriz[1][5] = *ficha1;
				Console::SetCursorPosition(38, 19);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'd') {
				matriz[1][3] = "e";
				matriz[1][1] = *ficha1;
				Console::SetCursorPosition(9, 19);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'g') {
			Console::SetCursorPosition(14, 22);
			cout << "g";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'h') {
				matriz[2][2] = "g";
				matriz[2][3] = *ficha1;
				Console::SetCursorPosition(23, 22);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'l') {
				matriz[2][2] = "g";
				matriz[3][2] = *ficha1;
				Console::SetCursorPosition(14, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'l') {
			Console::SetCursorPosition(14, 26);
			cout << "l";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'g') {
				matriz[3][2] = "l";
				matriz[2][2] = *ficha1;
				Console::SetCursorPosition(14, 22);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'q') {
				matriz[3][2] = "l";
				matriz[4][2] = *ficha1;
				Console::SetCursorPosition(14, 30);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'k') {
				matriz[3][2] = "l";
				matriz[3][1] = *ficha1;
				Console::SetCursorPosition(9, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'q') {
			Console::SetCursorPosition(14, 30);
			cout << "q";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'l') {
				matriz[4][2] = "q";
				matriz[3][2] = *ficha1;
				Console::SetCursorPosition(14, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'r') {
				matriz[4][2] = "q";
				matriz[4][3] = *ficha1;
				Console::SetCursorPosition(23, 30);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'i') {
			Console::SetCursorPosition(33, 22);
			cout << "i";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'h') {
				matriz[2][4] = "i";
				matriz[2][3] = *ficha1;
				Console::SetCursorPosition(23, 22);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'm') {
				matriz[2][4] = "i";
				matriz[3][4] = *ficha1;
				Console::SetCursorPosition(33, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'm') {
			Console::SetCursorPosition(33, 26);
			cout << "m";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'i') {
				matriz[3][4] = "m";
				matriz[2][4] = *ficha1;
				Console::SetCursorPosition(33, 22);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 's') {
				matriz[3][4] = "m";
				matriz[4][4] = *ficha1;
				Console::SetCursorPosition(33, 30);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'n') {
				matriz[3][4] = "m";
				matriz[3][5] = *ficha1;
				Console::SetCursorPosition(38, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 's') {
			Console::SetCursorPosition(33, 30);
			cout << "s";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'm') {
				matriz[4][4] = "s";
				matriz[3][4] = *ficha1;
				Console::SetCursorPosition(33, 26);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'r') {
				matriz[4][4] = "s";
				matriz[4][3] = *ficha1;
				Console::SetCursorPosition(23, 30);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'r') {
			Console::SetCursorPosition(23, 30);
			cout << "r";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 's') {
				matriz[4][3] = "r";
				matriz[4][4] = *ficha1;
				Console::SetCursorPosition(33, 30);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'q') {
				matriz[4][3] = "r";
				matriz[4][2] = *ficha1;
				Console::SetCursorPosition(14, 30);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'u') {
				matriz[4][3] = "r";
				matriz[5][3] = *ficha1;
				Console::SetCursorPosition(23, 33);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion == 'h') {
			Console::SetCursorPosition(23, 22);
			cout << "h";
			Console::SetCursorPosition(3, 45);
			cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion;
			if (*posicion == 'e') {
				matriz[2][3] = "h";
				matriz[1][3] = *ficha1;
				Console::SetCursorPosition(23, 19);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'i') {
				matriz[2][3] = "h";
				matriz[2][4] = *ficha1;
				Console::SetCursorPosition(33, 22);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else if (*posicion == 'g') {
				matriz[2][3] = "h";
				matriz[2][2] = *ficha1;
				Console::SetCursorPosition(14, 22);
				cout << *ficha1;
				cont1m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 11);
				cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		if (cont2f < 3 && cont1f>cont2f) {
			Console::SetCursorPosition(25, 54);
			cout << "FELICIDADES " << *jugador1 << ", GANASTE EL JUEGO :)";
			SetConsoleTextAttribute(hConsole, 4);
			return 0;
		}
		Console::SetCursorPosition(3, 48);
		turno = 2;
		cout << *jugador2 << " indique la ficha que quiere mover: ";
		cin >> *posicion2;
		if (*posicion2 == 'a') {
			Console::SetCursorPosition(4, 16);
			cout << "a";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'b') {
				matriz[0][0] = "a";
				matriz[0][3] = *ficha2;
				Console::SetCursorPosition(23, 16);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'j') {
				matriz[0][0] = "a";
				matriz[3][0] = *ficha2;
				Console::SetCursorPosition(4, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'b') {
			Console::SetCursorPosition(23, 16);
			cout << "b";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'a') {
				matriz[0][3] = "b";
				matriz[0][0] = *ficha2;
				Console::SetCursorPosition(4, 16);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'c') {
				matriz[0][3] = "b";
				matriz[0][6] = *ficha2;
				Console::SetCursorPosition(43, 16);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'e') {
				matriz[0][3] = "b";
				matriz[1][3] = *ficha2;
				Console::SetCursorPosition(23, 19);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'c') {
			Console::SetCursorPosition(43, 16);
			cout << "c";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'b') {
				matriz[0][6] = "c";
				matriz[0][3] = *ficha2;
				Console::SetCursorPosition(23, 16);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'p') {
				matriz[0][6] = "c";
				matriz[3][6] = *ficha1;
				Console::SetCursorPosition(43, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'j') {
			Console::SetCursorPosition(4, 26);
			cout << "j";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'a') {
				matriz[3][0] = "j";
				matriz[0][0] = *ficha2;
				Console::SetCursorPosition(4, 16);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'w') {
				matriz[3][0] = "j";
				matriz[6][0] = *ficha2;
				Console::SetCursorPosition(4, 36);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'k') {
				matriz[3][0] = "j";
				matriz[3][1] = *ficha2;
				Console::SetCursorPosition(9, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'p') {
			Console::SetCursorPosition(43, 26);
			cout << "p";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'c') {
				matriz[3][6] = "p";
				matriz[0][6] = *ficha2;
				Console::SetCursorPosition(43, 16);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'z') {
				matriz[3][6] = "p";
				matriz[6][6] = *ficha2;
				Console::SetCursorPosition(43, 36);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'n') {
				matriz[3][6] = "p";
				matriz[3][5] = *ficha2;
				Console::SetCursorPosition(38, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'w') {
			Console::SetCursorPosition(4, 36);
			cout << "w";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'j') {
				matriz[6][0] = "w";
				matriz[3][0] = *ficha2;
				Console::SetCursorPosition(4, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'y') {
				matriz[6][0] = "w";
				matriz[6][3] = *ficha2;
				Console::SetCursorPosition(23, 36);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'z') {
			Console::SetCursorPosition(43, 36);
			cout << "z";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'y') {
				matriz[6][6] = "z";
				matriz[6][3] = *ficha2;
				Console::SetCursorPosition(23, 36);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'p') {
				matriz[6][6] = "z";
				matriz[3][6] = *ficha2;
				Console::SetCursorPosition(43, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'y') {
			Console::SetCursorPosition(23, 36);
			cout << "y";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'u') {
				matriz[6][3] = "y";
				matriz[5][3] = *ficha2;
				Console::SetCursorPosition(23, 33);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'w') {
				matriz[6][3] = "y";
				matriz[6][0] = *ficha2;
				Console::SetCursorPosition(4, 36);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'z') {
				matriz[6][3] = "y";
				matriz[6][6] = *ficha2;
				Console::SetCursorPosition(43, 36);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'd') {
			Console::SetCursorPosition(9, 19);
			cout << "d";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'e') {
				matriz[1][1] = "d";
				matriz[1][3] = *ficha2;
				Console::SetCursorPosition(23, 19);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'k') {
				matriz[1][1] = "d";
				matriz[3][1] = *ficha2;
				Console::SetCursorPosition(9, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'k') {
			Console::SetCursorPosition(9, 26);
			cout << "k";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'd') {
				matriz[3][1] = "k";
				matriz[1][1] = *ficha2;
				Console::SetCursorPosition(9, 19);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 't') {
				matriz[3][1] = "k";
				matriz[5][1] = *ficha2;
				Console::SetCursorPosition(9, 33);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'j') {
				matriz[3][1] = "k";
				matriz[3][0] = *ficha2;
				Console::SetCursorPosition(4, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'l') {
				matriz[3][1] = "k";
				matriz[3][2] = *ficha2;
				Console::SetCursorPosition(14, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 't') {
			Console::SetCursorPosition(9, 33);
			cout << "t";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'k') {
				matriz[5][1] = "t";
				matriz[3][1] = *ficha2;
				Console::SetCursorPosition(9, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'u') {
				matriz[5][1] = "t";
				matriz[5][3] = *ficha2;
				Console::SetCursorPosition(23, 33);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'f') {
			Console::SetCursorPosition(38, 19);
			cout << "f";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'e') {
				matriz[1][5] = "f";
				matriz[1][3] = *ficha2;
				Console::SetCursorPosition(23, 19);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'n') {
				matriz[1][5] = "f";
				matriz[3][5] = *ficha2;
				Console::SetCursorPosition(38, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'n') {
			Console::SetCursorPosition(38, 26);
			cout << "n";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'f') {
				matriz[3][5] = "n";
				matriz[1][5] = *ficha2;
				Console::SetCursorPosition(38, 19);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'v') {
				matriz[3][5] = "n";
				matriz[5][5] = *ficha2;
				Console::SetCursorPosition(38, 33);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'p') {
				matriz[3][5] = "n";
				matriz[3][6] = *ficha2;
				Console::SetCursorPosition(43, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'm') {
				matriz[3][5] = "n";
				matriz[3][4] = *ficha2;
				Console::SetCursorPosition(33, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'v') {
			Console::SetCursorPosition(38, 33);
			cout << "v";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'n') {
				matriz[5][5] = "v";
				matriz[3][5] = *ficha2;
				Console::SetCursorPosition(38, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'u') {
				matriz[5][5] = "v";
				matriz[5][3] = *ficha2;
				Console::SetCursorPosition(23, 33);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'u') {
			Console::SetCursorPosition(23, 33);
			cout << "u";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'y') {
				matriz[5][3] = "u";
				matriz[6][3] = *ficha2;
				Console::SetCursorPosition(23, 36);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'r') {
				matriz[5][3] = "u";
				matriz[4][3] = *ficha2;
				Console::SetCursorPosition(23, 30);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'v') {
				matriz[5][3] = "u";
				matriz[5][5] = *ficha2;
				Console::SetCursorPosition(38, 33);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 't') {
				matriz[5][3] = "u";
				matriz[5][1] = *ficha2;
				Console::SetCursorPosition(9, 33);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'e') {
			Console::SetCursorPosition(23, 19);
			cout << "e";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'b') {
				matriz[1][3] = "e";
				matriz[0][3] = *ficha2;
				Console::SetCursorPosition(23, 16);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'h') {
				matriz[1][3] = "e";
				matriz[2][3] = *ficha2;
				Console::SetCursorPosition(23, 22);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'f') {
				matriz[1][3] = "e";
				matriz[1][5] = *ficha2;
				Console::SetCursorPosition(38, 19);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'd') {
				matriz[1][3] = "e";
				matriz[1][1] = *ficha2;
				Console::SetCursorPosition(9, 19);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'g') {
			Console::SetCursorPosition(14, 22);
			cout << "g";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'h') {
				matriz[2][2] = "g";
				matriz[2][3] = *ficha2;
				Console::SetCursorPosition(23, 22);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'l') {
				matriz[2][2] = "g";
				matriz[3][2] = *ficha2;
				Console::SetCursorPosition(14, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'l') {
			Console::SetCursorPosition(14, 26);
			cout << "l";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'g') {
				matriz[3][2] = "l";
				matriz[2][2] = *ficha2;
				Console::SetCursorPosition(14, 22);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'q') {
				matriz[3][2] = "l";
				matriz[4][2] = *ficha2;
				Console::SetCursorPosition(14, 30);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'k') {
				matriz[3][2] = "l";
				matriz[3][1] = *ficha2;
				Console::SetCursorPosition(9, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'q') {
			Console::SetCursorPosition(14, 30);
			cout << "q";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'l') {
				matriz[4][2] = "q";
				matriz[3][2] = *ficha2;
				Console::SetCursorPosition(14, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'r') {
				matriz[4][2] = "q";
				matriz[4][3] = *ficha2;
				Console::SetCursorPosition(23, 30);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'i') {
			Console::SetCursorPosition(33, 22);
			cout << "i";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'h') {
				matriz[2][4] = "i";
				matriz[2][3] = *ficha2;
				Console::SetCursorPosition(23, 22);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'm') {
				matriz[2][4] = "i";
				matriz[3][4] = *ficha2;
				Console::SetCursorPosition(33, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'm') {
			Console::SetCursorPosition(33, 26);
			cout << "m";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'i') {
				matriz[3][4] = "m";
				matriz[2][4] = *ficha2;
				Console::SetCursorPosition(33, 22);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 's') {
				matriz[3][4] = "m";
				matriz[4][4] = *ficha2;
				Console::SetCursorPosition(33, 30);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'n') {
				matriz[3][4] = "m";
				matriz[3][5] = *ficha2;
				Console::SetCursorPosition(38, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 's') {
			Console::SetCursorPosition(33, 30);
			cout << "s";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'm') {
				matriz[4][4] = "s";
				matriz[3][4] = *ficha2;
				Console::SetCursorPosition(33, 26);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'r') {
				matriz[4][4] = "s";
				matriz[4][3] = *ficha2;
				Console::SetCursorPosition(23, 30);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'r') {
			Console::SetCursorPosition(23, 30);
			cout << "r";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 's') {
				matriz[4][3] = "r";
				matriz[4][4] = *ficha2;
				Console::SetCursorPosition(33, 30);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'q') {
				matriz[4][3] = "r";
				matriz[4][2] = *ficha2;
				Console::SetCursorPosition(14, 30);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'u') {
				matriz[4][3] = "r";
				matriz[5][3] = *ficha2;
				Console::SetCursorPosition(23, 33);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		else if (*posicion2 == 'h') {
			Console::SetCursorPosition(23, 22);
			cout << "h";
			Console::SetCursorPosition(3, 49);
			cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
			cin >> *posicion2;
			if (*posicion2 == 'e') {
				matriz[2][3] = "h";
				matriz[1][3] = *ficha2;
				Console::SetCursorPosition(23, 19);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'i') {
				matriz[2][3] = "h";
				matriz[2][4] = *ficha2;
				Console::SetCursorPosition(33, 22);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else if (*posicion2 == 'g') {
				matriz[2][3] = "h";
				matriz[2][2] = *ficha2;
				Console::SetCursorPosition(14, 22);
				cout << *ficha2;
				cont2m++;
				eliminarf(matriz, turno, jugador1, jugador2);
				Console::SetCursorPosition(52, 12);
				cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
			}
			else {
				cout << "La ficha no puede moverse a esa posicion.";
			}
		}
		if (cont1f < 3 && cont2f>cont1f) {
			Console::SetCursorPosition(25, 54);
			cout << "FELICIDADES " << *jugador2 << ", GANASTE EL JUEGO :)";
			SetConsoleTextAttribute(hConsole, 4);
			return 0;
		}
		/*do {
			Console::SetCursorPosition(25, 52);
			cout << "LA TERCERA FASE HA COMENZADO";
			Console::SetCursorPosition(3, 53);
			cout << *jugador1 << " indique la ficha que quiere mover: ";
			cin >> *posicion;
			if (*posicion == 'a') {
				Console::SetCursorPosition(4, 16);
				cout << "a";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'b') {
				Console::SetCursorPosition(23, 16);
				cout << "b";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'c') {
				Console::SetCursorPosition(43, 16);
				cout << "c";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'd') {
				Console::SetCursorPosition(9, 19);
				cout << "d";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'e') {
				Console::SetCursorPosition(23, 19);
				cout << "e";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'f') {
				Console::SetCursorPosition(38, 19);
				cout << "f";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'g') {
				Console::SetCursorPosition(14, 22);
				cout << "g";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'h') {
				Console::SetCursorPosition(23, 22);
				cout << "h";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'i') {
				Console::SetCursorPosition(33, 22);
				cout << "i";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'j') {
				Console::SetCursorPosition(4, 26);
				cout << "j";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'k') {
				Console::SetCursorPosition(9, 26);
				cout << "k";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'l') {
				Console::SetCursorPosition(14, 26);
				cout << "l";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'm') {
				Console::SetCursorPosition(33, 26);
				cout << "m";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'n') {
				Console::SetCursorPosition(38, 26);
				cout << "n";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'p') {
				Console::SetCursorPosition(43, 26);
				cout << "p";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'q') {
				Console::SetCursorPosition(14, 30);
				cout << "q";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'r') {
				Console::SetCursorPosition(23, 30);
				cout << "r";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 's') {
				Console::SetCursorPosition(33, 30);
				cout << "s";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 't') {
				Console::SetCursorPosition(9, 33);
				cout << "t";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'u') {
				Console::SetCursorPosition(23, 33);
				cout << "u";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'v') {
				Console::SetCursorPosition(38, 33);
				cout << "v";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'w') {
				Console::SetCursorPosition(4, 36);
				cout << "w";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'y') {
				Console::SetCursorPosition(23, 36);
				cout << "y";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			else if (*posicion == 'z') {
				Console::SetCursorPosition(43, 36);
				cout << "z";
				Console::SetCursorPosition(3, 54);
				cout << *jugador1 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
				else if (*posicion == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha1;
					cont1m++;
					Console::SetCursorPosition(52, 11);
					cout << "Movimientos realizados por " << *jugador1 << ": " << cont1m;
				}
			}
			Console::SetCursorPosition(3, 55);
			cout << *jugador2 << " indique la ficha que quiere mover: ";
			cin >> *posicion2;
			if (*posicion2 == 'a') {
				Console::SetCursorPosition(4, 16);
				cout << "a";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'b') {
				Console::SetCursorPosition(23, 16);
				cout << "b";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'c') {
				Console::SetCursorPosition(43, 16);
				cout << "c";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'd') {
				Console::SetCursorPosition(9, 19);
				cout << "d";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'e') {
				Console::SetCursorPosition(23, 19);
				cout << "e";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'f') {
				Console::SetCursorPosition(38, 19);
				cout << "f";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'g') {
				Console::SetCursorPosition(14, 22);
				cout << "g";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'h') {
				Console::SetCursorPosition(23, 22);
				cout << "h";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'i') {
				Console::SetCursorPosition(33, 22);
				cout << "i";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'j') {
				Console::SetCursorPosition(4, 26);
				cout << "j";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'k') {
				Console::SetCursorPosition(9, 26);
				cout << "k";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'l') {
				Console::SetCursorPosition(14, 26);
				cout << "l";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'm') {
				Console::SetCursorPosition(33, 26);
				cout << "m";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'n') {
				Console::SetCursorPosition(38, 26);
				cout << "n";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'p') {
				Console::SetCursorPosition(43, 26);
				cout << "p";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'q') {
				Console::SetCursorPosition(14, 30);
				cout << "q";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'r') {
				Console::SetCursorPosition(23, 30);
				cout << "r";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 's') {
				Console::SetCursorPosition(33, 30);
				cout << "s";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 't') {
				Console::SetCursorPosition(9, 33);
				cout << "t";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'u') {
				Console::SetCursorPosition(23, 33);
				cout << "u";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'v') {
				Console::SetCursorPosition(38, 33);
				cout << "v";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'w') {
				Console::SetCursorPosition(4, 36);
				cout << "w";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'y') {
				Console::SetCursorPosition(23, 36);
				cout << "y";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
			else if (*posicion2 == 'z') {
				Console::SetCursorPosition(43, 36);
				cout << "z";
				Console::SetCursorPosition(3, 56);
				cout << *jugador2 << " indique la posicion en la que desea poner la ficha: ";
				cin >> *posicion2;
				if (*posicion == 'a')
				{
					Console::SetCursorPosition(4, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'b')
				{
					Console::SetCursorPosition(23, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'c')
				{
					Console::SetCursorPosition(43, 16);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'd')
				{
					Console::SetCursorPosition(9, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'e')
				{
					Console::SetCursorPosition(23, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'f')
				{
					Console::SetCursorPosition(38, 19);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'g')
				{
					Console::SetCursorPosition(14, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'h')
				{
					Console::SetCursorPosition(23, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'i')
				{
					Console::SetCursorPosition(33, 22);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'j')
				{
					Console::SetCursorPosition(4, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'k')
				{
					Console::SetCursorPosition(9, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'l')
				{
					Console::SetCursorPosition(14, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'm')
				{
					Console::SetCursorPosition(33, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'n')
				{
					Console::SetCursorPosition(38, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'p')
				{
					Console::SetCursorPosition(43, 26);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'q')
				{
					Console::SetCursorPosition(14, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'r')
				{
					Console::SetCursorPosition(23, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 's')
				{
					Console::SetCursorPosition(33, 30);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 't')
				{
					Console::SetCursorPosition(9, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'u')
				{
					Console::SetCursorPosition(23, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'v')
				{
					Console::SetCursorPosition(38, 33);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'w')
				{
					Console::SetCursorPosition(4, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'y')
				{
					Console::SetCursorPosition(23, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
				else if (*posicion2 == 'z')
				{
					Console::SetCursorPosition(43, 36);
					cout << *ficha2;
					cont2m++;
					Console::SetCursorPosition(52, 12);
					cout << "Movimientos realizados por " << *jugador2 << ": " << cont2m;
				}
			}
		} while (cont1f == 3 || cont2f == 3);
		*/
	}
}
void instrucciones() {
	cout << "\n===============";
	cout << "\n INSTRUCCIONES ";
	cout << "\n===============";
	cout << "\n- Cada jugador tiene 9 fichas.";
	cout << "\n- El juego comienza con el tablero vacio.";
	cout << "\n- En la primera fase, cada jugador coloca sus 9 fichas sobre cualquier punto \n  libre en el tablero, en esta fase no se pueden mover las fichas que ya fueron colocadas.";
	cout << "\n- En la segunda fase, los jugadores pueden mover sus fichas a un punto adyacente \n  libre del tablero.";
	cout << "\n- Para ganar, el contrincante debe acabar con solo 2 fichas sobre el tablero \n  o que no pueda realizar ningun movimiento por tenerlas todas bloqueadas.";
	cout << "\n- Cuando un jugador logra hacer un molinillo con sus fichas propias, puede \n  capturar cualquier ficha de su rival.";
	cout << "\n- Quien inicia el primer movimiento es aleatorio.";
}
void integrantes() {
	cout << "\n=======================================";
	cout << "\n               INTEGRANTES             ";
	cout << "\n=======================================";
	cout << "\n ABEL ANDRES VALLE ZUTA    - U202210297";
	cout << "\n AARON ELIAS ACUNA ALARCON - U202211552";
}
void logo1() {
	int logo[8][54] = { {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,2,2,2,0,0,2,2,2,2,2,2,2,2,0,0,2,2,0,0,0,0,2,2,0,0,2,2,0,0,0,2,2,0,0,0,0,0},
{0,0,0,0,0,0,2,2,2,2,2,2,0,0,2,2,2,2,2,2,0,0,2,2,2,0,0,0,0,0,0,0,2,2,2,2,0,0,2,2,0,0,2,2,0,0,0,2,2,0,0,0,0,0},
{0,0,0,0,0,0,2,2,2,0,0,2,2,2,2,0,0,2,2,2,0,0,2,2,2,2,2,2,2,2,0,0,2,2,0,2,2,0,2,2,0,0,2,2,0,0,0,2,2,0,0,0,0,0},
{0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,2,2,2,0,0,2,2,2,0,0,0,0,0,0,0,2,2,0,0,2,2,2,2,0,0,2,2,0,0,0,2,2,0,0,0,0,0},
{0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,2,2,2,0,0,2,2,2,2,2,2,2,2,0,0,2,2,0,0,0,0,2,2,0,0,2,2,2,2,2,2,2,0,0,0,0,0} };
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 54; j++) {
			if (logo[i][j] == 1)
			{
				SetConsoleTextAttribute(hConsole, 4);
				cout << char(219);
			}
			else if (logo[i][j] == 2) {
				SetConsoleTextAttribute(hConsole, 3);
				cout << char(219);
			}
			else cout << " ";
		}
		cout << endl;
	}
}
void logo2() {
	int logo[20][54] = { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,2,2,2,0,0,0,0,0,2,2,2,0,2,2,2,0,2,2,2,0,2,2,2,0,2,2,2,0,0,2,2,2,0,0,0,0,2,2,2,0,2,2,2,0,2,2,2,0,0,0,3,0,0 },
		{ 0,0,2,0,0,0,0,0,0,0,2,0,0,2,0,0,0,0,2,0,0,2,0,2,0,2,0,2,0,0,0,2,0,0,0,0,0,2,0,0,0,2,0,0,0,2,0,2,0,0,3,3,0,0 },
		{ 0,0,2,0,0,2,2,2,0,0,2,0,0,2,0,0,0,0,2,0,0,2,2,2,0,2,2,0,0,0,0,2,0,2,0,2,0,2,2,2,0,2,2,2,0,2,0,2,0,0,0,3,0,0 },
		{ 0,0,2,0,0,2,0,2,0,0,2,0,0,2,0,0,0,0,2,0,0,2,0,2,0,2,0,2,0,0,0,2,0,2,0,2,0,2,0,0,0,2,0,2,0,2,0,2,0,0,0,3,0,0 },
		{ 0,2,2,2,0,2,0,2,0,2,2,2,0,2,2,2,0,2,2,2,0,2,0,2,0,2,0,2,0,0,2,2,0,2,2,2,0,2,2,2,0,2,2,2,0,2,2,2,0,4,0,3,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
		{ 0,2,2,2,0,0,0,0,0,2,2,2,0,2,2,2,0,2,2,2,0,2,0,2,0,2,2,2,0,2,2,2,0,2,0,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,0 },
		{ 0,0,2,0,0,0,0,0,0,2,0,0,0,0,2,0,0,2,0,2,0,2,0,2,0,2,0,0,0,2,0,0,0,2,0,2,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0 },
		{ 0,0,2,0,0,2,2,2,0,2,2,2,0,0,2,0,0,2,2,0,0,2,0,2,0,2,0,0,0,2,0,0,0,2,0,2,0,2,0,2,2,2,0,0,0,0,0,0,0,0,3,3,3,0 },
		{ 0,0,2,0,0,2,0,2,0,0,0,2,0,0,2,0,0,2,0,2,0,2,0,2,0,2,0,0,0,2,0,0,0,2,0,2,0,2,0,2,0,2,0,0,0,0,0,0,0,0,3,0,0,0 },
		{ 0,2,2,2,0,2,0,2,0,2,2,2,0,0,2,0,0,2,0,2,0,2,2,2,0,2,2,2,0,2,2,2,0,2,0,2,2,2,0,2,0,2,0,4,0,4,0,4,0,4,3,3,3,0 },
		{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } };
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 54; j++) {
			if (logo[i][j] == 1) {
				cout << char(219);
				SetConsoleTextAttribute(hConsole, 4);
			}
			else if (logo[i][j] == 2) {
				cout << char(219);
				SetConsoleTextAttribute(hConsole, 3);
			}
			else if (logo[i][j] == 3) {
				cout << char(219);
				SetConsoleTextAttribute(hConsole, 3);
			}
			else if (logo[i][j] == 4) {
				cout << char(219);
				SetConsoleTextAttribute(hConsole, 3);
			}
			else cout << " ";
		}
		cout << endl;
	}
}
void logo3() {
	int logo[8][54] = { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,1,1,1,0,0,0,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,0,0,0,1,1,1,0,1,1,1,0,1,1,1,0,0,0,0,0,0,0,2,2,2,0},
{0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,2,0},
{0,0,0,1,0,0,1,1,1,0,1,0,0,1,1,1,0,1,1,1,0,1,1,0,0,1,1,1,0,1,1,1,0,1,0,0,1,1,1,0,1,1,1,0,0,0,0,0,0,0,2,2,2,0},
{0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,2,0},
{0,0,1,1,1,0,1,0,1,0,1,0,0,1,1,1,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,1,1,0,1,1,1,0,3,0,3,0,3,0,2,2,2,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 54; j++) {
			if (logo[i][j] == 1) {
				cout << char(219);
				SetConsoleTextAttribute(hConsole, 3);
			}
			else if (logo[i][j] == 2) {
				cout << char(219);
				SetConsoleTextAttribute(hConsole, 3);
			}
			else if (logo[i][j] == 3) {
				cout << char(219);
				SetConsoleTextAttribute(hConsole, 3);
			}
			else cout << " ";
		}
		cout << endl;
	}
}
void logo4() {
	int logo[20][54] = { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,1,1,1,0,1,1,1,0,1,0,0,0,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,2,0,0},
{0,0,1,0,0,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,2,0,0},
{0,0,1,1,1,0,1,1,1,0,1,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0},
{0,0,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0},
{0,0,1,1,1,0,1,0,1,0,1,1,1,0,1,1,1,0,1,0,1,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,0,2,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,0},
{0,0,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,1,1,1,0,0,0,0,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,0,5,5,5,0,5,5,5,0,5,5,5,0,6,0,0},
{0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0,0,5,0,5,0,5,0,5,0,5,0,0,0,0,0,0},
{0,0,0,0,0,0,0,1,0,0,1,1,1,0,1,1,1,0,1,1,0,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,0,0,0,5,0,5,0,5,5,5,0,5,0,0,0,0,0,0},
{0,0,0,0,0,0,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,0,5,0,5,0,5,0,0,0,5,0,0,0,0,0,0},
{0,0,0,0,0,0,1,1,1,0,1,0,1,0,1,1,1,0,1,0,1,0,1,1,1,0,1,1,1,0,1,0,1,0,1,0,1,0,0,5,5,5,0,5,0,0,0,5,5,5,0,6,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} };
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 54; j++) {
			if (logo[i][j] == 1) {
				cout << char(219);
				SetConsoleTextAttribute(hConsole, 3);
			}
			else if (logo[i][j] == 2) {
				cout << char(219);
				SetConsoleTextAttribute(hConsole, 3);
			}
			else if (logo[i][j] == 3) {
				cout << char(219);
				SetConsoleTextAttribute(hConsole, 3);
			}
			else if (logo[i][j] == 4) {
				cout << char(219);
				SetConsoleTextAttribute(hConsole, 4);
			}
			else if (logo[i][j] == 5) {
				cout << char(219);
				SetConsoleTextAttribute(hConsole, 3);
			}
			else if (logo[i][j] == 6) {
				cout << char(219);
				SetConsoleTextAttribute(hConsole, 3);
			}
			else cout << " ";
		}
		cout << endl;
	}
}
void logo5() {
	int logo[16][54] =
	{
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0},
{0,0,0,1,1,0,0,0,1,1,0,0,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,0,0,1,1,0,0,0,1,1,0,0,0},
{0,0,1,1,0,0,1,0,0,1,1,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,1,1,0,0},
{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0},
{0,0,1,0,0,1,0,0,0,0,1,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0},
{0,0,1,0,0,1,0,0,0,0,1,0,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0},
{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0},
{0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0},
{0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0},
{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0},
{0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0},
{0,0,0,1,1,0,0,0,1,1,0,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,0,0,0},
{0,0,0,0,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,1,1,0,0,0,0},
{0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0}
	};
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 54; j++) {
			if (logo[i][j] == 1) {
				cout << char(219);
				SetConsoleTextAttribute(hConsole, 4);
			}
			else if (logo[i][j] == 2) {
				cout << char(219);
				SetConsoleTextAttribute(hConsole, 4);
			}
			else if (logo[i][j] == 3) {
				cout << char(219);
				SetConsoleTextAttribute(hConsole, 4);
			}
			else cout << " ";
		}
		cout << endl;
	}
}
int main()
{
	int* opcion = new int;
	int* opc = new int;
	do {
		system("cls");
		do {
			logo1();
			logo2();
			logo3();
			logo4();
			logo5();
			cin >> *opcion;
			system("cls");
		} while (*opcion < 1 || *opcion>4);
		switch (*opcion)
		{
		case 1:
		{
			funcion_iniciar();
		}
		break;
		case 2:
		{
			instrucciones();
		}
		break;
		case 3:
		{
			integrantes();
		}
		break;
		case 4:	return 0;
		}
		Console::SetCursorPosition(3, 60);
		cout << "\n\nDesea continuar con el Menu Principal..";
		do {
			cout << "\nSi ..... (1)";
			cout << "\nNo ..... (2)";
			cout << "\nElegir opcion: ";
			cin >> *opc;
		} while (*opc < 1 || *opc > 2);
		if (*opc == 2) return 0;
	} while (*opc == 1);
	getch();
	return 0;
}
