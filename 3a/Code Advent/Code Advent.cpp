// Code Advent.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;



int main()
{
	
	string dane, ciag[250];
	char znak;
	long long dwa=0, trzy = 0;
	int alf[26];
	bool rozn[26];

	cout << "start" << endl;
	fstream plik;

	plik.open("ID.txt", std::ios::in); //Otwiera plik
	if (plik.good()) {
		cout << "Good" << endl;
	}
	else {
		cout << "Bad" << endl;
	}
	/*        
		while (getline(plik, dane)) {  //wczytanie CAŁEGO jednego wiersza danych
			for (int i = 0; i < 26; i++) {
				alf[i] = 0;
			}
			for (int i = 0; i < 26; i++) {
				znak = dane[i];
				switch (znak) {
				case 'a':
					alf[0]++;
					break;
				case 'b':
					alf[1]++;
					break;
				case 'c':
					alf[2]++;
					break;
				case 'd':
					alf[3]++;
					break;
				case 'e':
					alf[4]++;
					break;
				case 'f':
					alf[5]++;
					break;
				case 'g':
					alf[6]++;
					break;
				case 'h':
					alf[7]++;
					break;
				case 'i':
					alf[8]++;
					break;
				case 'j':
					alf[9]++;
					break;
				case 'k':
					alf[10]++;
					break;
				case 'l':
					alf[11]++;
					break;
				case 'm':
					alf[12]++;
					break;
				case 'n':
					alf[13]++;
					break;
				case 'o':
					alf[14]++;
					break;
				case 'p':
					alf[15]++;
					break;
				case 'q':
					alf[16]++;
					break;
				case 'r':
					alf[17]++;
					break;
				case 's':
					alf[18]++;
					break;
				case 't':
					alf[19]++;
					break;
				case 'u':
					alf[20]++;
					break;
				case 'v':
					alf[21]++;
					break;
				case 'w':
					alf[22]++;
					break;
				case 'x':
					alf[23]++;
					break;
				case 'y':
					alf[24]++;
					break;
				case 'z':
					alf[25]++;
					break;
				}
			}
			for (int i = 0; i < 26; i++) {
				cout << alf[i] << ",";
			}
			for (int i = 0; i < 26; i++) {
				if (alf[i] == 2) {
					dwa++;
					break;
				}
			}
			for (int i = 0; i < 26; i++) {
				if (alf[i] == 3) {
					trzy++;
					break;
				}
			}
			cout << "\t" << dwa << "\t" << trzy << endl;
		}
		cout << dwa * trzy;  */
int i = 0;
while (getline(plik,dane)) {
	ciag[i] = dane;
	i++;
	}

for (int j = 0; j < 250; j++) {
	for (int n = j; n < 250; n++) {
		int por = 0;
		for (int m = 0; m < 26; m++) {
			if (ciag[j][m] == ciag[n][m]) {
				rozn[m] = true;
			}
			else {
				rozn[m] = false;
				por++;
			}
		}
		if (por == 1) {
			for (int l = 0; l < 26; l++) {
				if (rozn[l] == true) {
					cout << ciag[n][l];
				}
				else {
					continue;
				}
			}
		}
	}
}

		

	plik.close();
	getchar();
	getchar();


    return 0;
}

