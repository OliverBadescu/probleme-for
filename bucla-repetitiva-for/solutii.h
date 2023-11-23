#pragma once
#include "functii.h"

//Se citește un număr natural n.Să se determine suma divizorilor săi.

//Divizorii lui 6 sunt 1, 2, 3, 6. Suma lor este 12.


void sol1() {

	int numar = 0;
	cout << "n=";
	cin >> numar;
	afisareDivizori(numar);
	cout << "\nSuma divizorilor este " << sumaDivizori(numar) << endl;

}	


//todo: Se citește un număr natural n. Să se determine suma divizorilor impari ai săi.

//Divizorii impari lui 30 sunt 1, 3, 5 și 15. Suma lor este 24.

void sol2() {

	int numar = 0;
	cout << "n=";
	cin >> numar;
	afisareDivizoriImpari(numar);
	cout << "Suma divizorilor impari este " << sumaDivizoriImpari(numar) << endl;

}


//todo: Să se scrie un program care afișează divizorii comuni ai două numere naturale citite de la tastatură.
//exemplu: 24 36, divizori comuni = 1 2 3 4 6 12

void sol3() {

	int a = 0;
	cout << "a=";
	cin >> a;
	int b = 0;
	cout << "b=";
	cin >> b;
	afisareDivizori(a);
	cout << endl;
	afisareDivizori(b);
	cout << endl;
	divizoriComuni(a, b);

}

//todo:se introduc n numere de la  tastatura sa se afiseze maximul introdus


void sol4() {


	int n= 0;
	cout << "Introduceti numarul de elemente\t";
	cin >> n;

	int maxim = INT_MIN;

	for (int i = 1; i <= n; i++) {

		cout << "x"<<i<<"=";
		int x;
		cin >> x;

		if (x > maxim) {

			maxim = x;
		}
	}

	cout << "Cel m-ai mare numar introdus este " << maxim << endl;
}


//todo: Se dau n numere naturale. Calculaţi suma dintre cel mai mare și cel mai mic număr dat.
//exemplu: 5 numere: 7 2 8 4 8, suma = 8 + 2 => 10.


void sol5() {

	
	int n = 0;
	cout << "Introduceti numarul de elemente\t";
	cin >> n;

	int maxim = INT_MIN;
	int min = INT_MAX;

	for (int i = 1; i <= n; i++) {

		int x;
		cout << "x" << i << "=";
		cin >> x;

		if (x > maxim) {
			maxim = x;
		}
		if (x < min) {
			min = x;
		}
	}
	cout << "Suma dintre cel mai mare si cel mai mic numar dat este " << maxim + min << endl;
}


//todo: Să se scrie un program care citește un șir de n numere naturale şi determină valoarea maximă din șir și de câte ori apare.
//exemplu: 5 numere: 72 75 12 75 17, 75 este valorea maxima si apare de 2 ori

void sol6() {

	int ct = 0;
	int n = 0;
	cout << "Introduceti numarul de elemente\t";
	cin >> n;

	int maxim = INT_MIN;

	for (int i = 1; i <= n; i++) {
		int x; 
		cout << "x" << i << "=";
		cin >> x;

		if (x > maxim) {
			maxim = x;
		}
		if (maxim == x) {
			ct++;
		}
	}
	cout << "Valorea maxima din sir apare de " << ct << " ori" << endl;
}



// Recapitluare 



//todo: Se citesc de la tastatură n numere naturale. Să se determine numărul de numere prime formate din ultimele 2 cifre ale fiecărui număr.
// 218 → 18 nu este prim, 417 → 17 este prim

void sol7() {

	int n = 0;
	cout << "Introduceti numarul de elemente\t";
	cin >> n;

	cout << "Numarul de numere prime formate din ultimele 2 cifre ale fiecarui numar este " << numerePrimeDin2Cifre(n);
}


//todo: Scrieți un program care citește un număr natural nenul n și care determină și afișează trei numere naturale a, b și c, 
// astfel încât a+b+c=n și produsul a*b*c este maximul dintre produsele oricăror trei numere naturale care adunate dau suma egală cu n.
//explicatie: Pentru a=b=4 și c=5, se obține produsul maxim P=4*4*5=80.

void sol8() {

	int n = 0;
	cout << "n= ";
	cin >> n;

	int x;
	int y;
	int z;

	int pmax = 1;


	for (int a = 1; a < n; a++) {
		for (int b = a; b < n; b++) {
			for (int c = b; c < n; c++) {
				if (a + b + c == n) {
					
					if (a * b * c > pmax) {

						pmax = a * b * c;
						x = a;
						y = b;
						z = c;
					}
				}
			}
		}
	}

	//cout << x << " " << y << " " << z;

}


//todo: Se citesc de la tastatură numere întregi de cel putin 3 cifre până la apariția lui zero.
//  Să se determine numarul ce contine cea mai mica cifra dintre valorile date.


//todo: functie ce returneaza cifra minima dintr-un numar


int cifraMin(int nr) {

	int min = INT_MAX;

	while (nr != 0) {
		int uc = nr % 10;
		if (uc < min) {
			min = uc;
		}
		nr = nr / 10;
	}
	return min;
}

void sol9() {

	int nr = -1;

	int nrMinim = INT_MAX;

	int minima = 10;

	cout << "Introduceti numere si terminati cu zero" << endl;
	while (nr != 0) {
		cout << "n=";
		cin >> nr;
		int cifraM = cifraMin(nr);
		if (cifraM < minima) {
			minima = cifraM;
			nrMinim = nr;
		}
	}


	cout << "Numarul ce contine cea mai mica cifra este " << nrMinim << endl;
	cout << "Cifra minima este  " << minima << endl;
	
}


//todo : Să se scrie un program care citește un șir de n numere naturale şi determină numărul din șir care are prima cifră minimă. 
// Dacă există mai multe numere cu prima cifră minimă, se va determina cel mai mare dintre acestea.

bool isprimaCifMinima(int nr) {

	int min = 9;
	int nou = 0;

	while (nr != 0) {

		int uc = nr % 10;
		if (uc < min) {
			min = uc;
		}
		if (nr < 10) {
			nou = nr;
		}
		nr = nr / 10;
		
	}
	if (min == nou) {
		return true;
	}
	else {
		return false;
	}
}

void sol10() {

	int n = 0;
	int cifMin = 0;
	int nrCifMinima = -1;
	cout << "n= ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;
	
		if (isprimaCifMinima(x) == true) {
			cifMin = x;
		}
	}
	cout << "Numarul din sir care are prima cifra minima este " << cifMin;

}


//todo: Se dau n numere naturale. Determinați cele mai mici două numere dintre cele introduse care au ultimele două cifre egale.
//  Dacă nu există cel puțin două astfel de numere se va afișa numere insuficiente


int ultimeleCifreEgale(int nr) {

	int cifEgale = 0;
	int uc = nr % 10;
	nr = nr / 10;
	while (nr != 0) {
		if (uc == nr % 10) {
			cifEgale = 1;
		}
		nr = nr / 10;
	}
	return cifEgale;
}

void sol11() {

	int n = 0;
	cout << "n= ";
	cin >> n;
	int minim1 = INT_MAX,
		minim2 = INT_MAX;

	for (int i = 1; i <= n; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (x < minim1 && ultimeleCifreEgale(x) == 1) {
			minim1 = x;
		}
		if (minim1 != minim2 ) {
			if (x < minim2 && ultimeleCifreEgale(x) == 1) {
				minim2 = x;
			}
		}
	}

	if (minim2 != INT_MAX) {
		cout << "Cele mai mici doua numere dintre cele introduse care au ultimele doua cifre egale sunt " << minim1 << " si " << minim2;
	}
	else {
		cout << "Numere insuficiente";
	}
}