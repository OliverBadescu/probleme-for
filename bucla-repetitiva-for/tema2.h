#pragma once
#include <iostream>
using namespace std;


// 1) todo: Se dau n numere întregi. Calculaţi cel mai mare dintre cele n numere date.

void sol1() {

	int n = 0;
	cout << "n= ";
	cin >> n;

	int max = INT_MIN;

	for (int i = 1; i <= n; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (max < x) {
			max = x;
		}
	}

	cout << "Cel mai mare numar este " << max;
}

// 2) todo: Se dau n numere naturale. Calculaţi suma dintre cel mai mare și cel mai mic număr dat.

void sol2() {

	int n = 0;
	cout << "n= ";
	cin >> n;

	int max = INT_MIN, min = INT_MAX;

	for (int i = 1; i <= n; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (max < x) {
			max = x;
		}
		if (min > x) {
			min = x;
		}
	}
	cout << "Suma este " << min + max;
}


// 3) todo: Să se scrie un program care citește un șir de n numere naturale şi determină valoarea maximă din șir și de câte ori apare.

void sol3() {

	int n = 0;
	cout << "n= ";
	cin >> n;

	int max = INT_MIN, ct = 0;

	for (int i = 1; i <= n; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (max < x) {
			max = x;
			ct = 0;
		}
		if (x == max) {
			ct++;
		}
	}
	cout << "Numarel cel mai mare este " << max << " si apare de " << ct << " ori in sir";
}


// 4) todo: Se dau n numere naturale. Determinați cel mai mare număr par introdus și numărul său de apariții.

void sol4() {

	int n = 0;
	cout << "n= ";
	cin >> n;
	int maxP = INT_MIN, ct = 0;

	for (int i = 1; i <= n; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (maxP < x && x % 2 == 0) {
			maxP = x;
			ct = 0;
		}
		if (maxP == x) {
			ct++;
		}
	}
	cout << "Cel mai mare numar par introdus este " << maxP << " si apare de " << ct << " ori in sir";
}


// 5) todo: Să se scrie un program care citește un șir de n numere naturale şi determină cele mai mari două numere din şir. ???

void sol5() {

	int n = 0;
	cout << "n= ";
	cin >> n;
	int max1 = INT_MIN, max2 = INT_MIN;

	for (int i = 1; i <= n; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (max1 < x) {
			max1 = x;
			max2 = max1;
		}
	}
	cout << "Cele mai mare doua numere din sir sunt " << max1 << " si " << max2;
}


// 6) todo: Se consideră un șir de cifre. Să se determine lungimea maximală a unei secvențe din șir formată din cifre egale.

void sol6() {

	int n = 0;
	cout << "n= ";
	cin >> n;
	
	int ct = 0, cifraAnterioara =0;

	for (int i = 1; i <= n; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		cifraAnterioara = x;

		if (x == cifraAnterioara) {
			ct++;
		}
		
	}

	cout << "Lungimea maximala a unei secvente din sir formata din cifre egale este " << ct;
}


// 7) todo: Se citesc de la tastatură numerele n k, apoi un șir de n numere naturale. Să se determine cel mai mare număr din șir care se divide cu k.

void sol7() {

	int n = 0;
	cout << "n= ";
	cin >> n;
	int k = 0;
	cout << "k= ";
	cin >> k;
	int max = INT_MIN;

	for (int i = 1; i <= n; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (x % k == 0) {
			if (x > max) {
				max = x;
			}
		}
	}
	if (max != INT_MIN) {
		cout << "Cel mai mare numar din par care se divide cu " << k << " este " << max;
	}
	else {
		cout << "Nu exista";
	}
}


// 8) todo: Se dau n numere întregi. Calculaţi cel mai mic dintre cele n numere date.

void sol8() {

	int n = 0;
	cout << "n= ";
	cin >> n;

	int min = INT_MAX;

	for (int i = 1; i <= n; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (min > x) {
			min = x;
		}
	}

	cout << "Cel mai mic numar este " << min;

}

// 9) todo: Se citește un număr natural nenul n și apoi se citesc n numere naturale. Calculați suma dintre valoarea minimă și valoarea maximă.

void sol9() {

	int n = 0;
	cout << "n= ";
	cin >> n;

	int max = INT_MIN, min = INT_MAX;

	for (int i = 1; i <= n; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (max < x) {
			max = x;
		}
		if (min > x) {
			min = x;
		}
	}
	cout << "Valorea maxima este " << max << " iar valorea minima este " << min << ". Suma lor este " << min + max;

}


// 10) todo: Se citesc numere de la tastatură până la apariția lui zero. Să se determine cea mai mare valoare citită.

void sol10(){

	int nr = -1, max = INT_MIN;

	while (nr != 0) {
		cout << "nr= ";
		cin >> nr;

		if (max < nr) {
			max = nr;
		}
	}
	cout << "Cea mai mare valorea citita este " << max;
}


// 11) todo: Se dau n numere naturale. Să se determine câte dintre ele au exact trei divizori.

int nrDivizori(int nr) {

	int ct = 1;

	for (int k = 1; k < nr; k++) {
		if (nr % k == 0) {
			ct++;
		}
	}
	return ct;

}

void sol11() {

	int n = 0;
	cout << "n= ";
	cin >> n;
	int ct = 0;

	for (int i = 1; i <= n; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (nrDivizori(x) == 3) {
			ct++;
		}
	}
	cout << ct << " dintre numerele afisate au trei divizori";
}


// 12) todo: Se citeşte de la tastatură un număr natural n. Să se calculeze şi să se afişeze media aritmetică a tuturor divizorilor săi. 
// Media va fi cu fix 2 zecimale dupa virgula. ???

void sol12() {

	int n = 0;
	cout << "n= ";
	cin >> n;
	int mediaA = 0;

	for (int i = 1; i <= n; i++) {

		if (n % i == 0) {
			mediaA = mediaA + i;
		}
	}
	cout << "Media aritmetica a tuturor divizorilor lui " << n << " este " << mediaA / 2;
}


// 13) todo: Să se scrie un program care verifică dacă un număr natural citit de la tastatură este perfect.

void sol13() {

	int n = 0;
	cout << "n= ";
	cin >> n;
	int sumaDiv = 0;

	for (int i = 1; i <= n; i++) {
		
		if (n % i == 0) {

			sumaDiv = sumaDiv + i;
		}

	}
	if (n * 2 == sumaDiv) {
		cout << n << " este un numar perfect";
	}
	else {
		cout << n << " nu este un numar perfect";
	}
}


// 14) todo: Se dă n, număr natural nenul. Să se testeze dacă n are număr impar de divizori. 

void sol14() {

	int n = 0;
	cout << "n= ";
	cin >> n;

	int ct = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			ct++;
		}
	}
	if (ct % 2 == 1) {
		cout << n << " are numar impar de divizori";
	}
	else {
		cout << n << " nu are numar impar de divizori";
	}
}


// 15) todo: Se dă un șir de n numere naturale nenule și de asemenea un număr natural p. Să se calculeze suma numerelor din șir care au cel puțin p divizori.


int nrDiv(int nr) {

	int ct = 0;

	for (int i = 1; i <= nr; i++) {
		if (nr % i == 0) {
			ct++;
		}
	}
	return ct;
}

void sol15() {

	int n = 0;
	cout << "n= ";
	cin >> n;
	int p = 0;
	cout << "p= ";
	cin >> p;
	int suma = 0;

	for (int i = 1; i <= n; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (nrDiv(x) >= p) {
			suma = suma + x;
		}
	}

	cout << "Suma numerelor din sir care au cel putin " << p << " divizori este " << suma;
}


// 16) todo: Se citesc de la tastatură numerele n k, apoi un șir de n numere naturale. Să se determine cel mai mare număr din șir care se divide cu k.

void sol16() {

	int n = 0;
	cout << "n= ";
	cin >> n;
	int k = 0;
	cout << "k= ";
	cin >> k;

	int max = INT_MIN;

	for (int i = 1; i <= n; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (x > max && x % k == 0) {
			max = x;
		}
	}

	cout << "Cel mai mare numar din sir care se divide cu " << k << " este " << max;
}


// 17) todo: Se consideră un șir de cifre. Să se determine lungimea maximală a unei secvențe din șir formată din cifre egale. ???


void sol17() {

	int n = 0;
	cout << "n= ";
	cin >> n;

	int ct = 0, cifAnterioara = 0;

	for (int i = 1; i <= n; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;


		if (cifAnterioara != x) {
			cifAnterioara = x;
		}
		if (cifAnterioara == x) {
			ct++;
		}
	}

	cout << "Lungimea maximala a unei secvente din sir formata din cifre egale este " << ct;

}


// 18) todo: Se dau n numere naturale. Determinați cel mai mare număr par introdus și numărul său de apariții.

void sol18() {


	int n = 0;
	cout << "n= ";
	cin >> n;
	int maxPar = INT_MIN, ct = 0;

	for (int i = 1; i <= n; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (maxPar < x && x % 2 == 0) {
			maxPar = x;
			ct = 0;
		}
		if (maxPar == x) {
			ct++;
		}
	}
	cout << "Cel mai mare numar par introdus este " << maxPar << " si apare de " << ct << " ori in sir";
	
}


// 19) todo: Se citesc de la tastatură numere naturale până la apariția lui zero. Să se determine cel mic număr citit care are două cifre.

void sol19() {

	int n = -1;
	int min = INT_MAX;
	
	while (n != 0) {
		cout << "n= ";
		cin >> n;

		if (n < min && n < 100 && n > 9) {
			min = n;
		}
	}
	cout << "Cel mai mic numar care are doua cifre este " << min;
}


// 20) todo: Se citeşte un număr natural n. Să se afişeze descompunerea în factori primi a lui n.  ???