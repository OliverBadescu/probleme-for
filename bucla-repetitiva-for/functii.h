#pragma once
#include <iostream>
using namespace std;

int sumaDivizori(int numar) {


	int sumaDiv = 1 + numar;

	for (int k = 2; k <= numar / 2; k++) {


		if (numar % k == 0) {

			sumaDiv += k;
		}
	}

	return sumaDiv;
}

void afisareDivizori(int numar) {

	cout << "D" << numar << "={";
	for (int k = 1; k < numar ; k++) {


		if (numar % k == 0) {

			cout << k << ",";
		
		}
	}

	cout << numar << "}";

}

void afisareDivizoriImpari(int numar) {

	cout << "D" << numar << "={";
	for (int k = 1; k < numar; k++) {


		if (numar % k == 0 && k % 2 != 0) {

			cout << k << ",";

		}
	}

	cout <<numar<< "}" << endl;

}

void afisareDivizoriPari(int numar) {

	cout << "D" << numar << "={";
	for (int k = 1; k < numar; k++) {


		if (numar % k == 0 && k % 2 != 1) {

			cout << k << ",";

		}
	}

	cout << numar << "}" << endl;

}

int sumaDivizoriImpari(int numar) {

	int sumaDivImp = 0;

	for (int k = 1; k <= numar / 2; k++) {
		if (numar % k == 0 && k % 2 == 1) {
			sumaDivImp = sumaDivImp + k;
		}
	}
	return sumaDivImp;
}

void divizoriComuni(int a, int b) {

	cout << "D" << a << "," << b << "={";
	for (int k = 2; k < a && k < b; k++) {
		if (a % k == 0 && b % k == 0) {
			cout << k << ",";
		}
	}
	cout << "1}";
}

int oglinditul(int nr) {

	int nou = 0;

	while (nr != 0) {
		int uc = nr % 10;
		nou = nou * 10 + uc;
		nr = nr / 10;
	}
	return nou;
}

int numarDivizori(int nr) {

	int ct = 1;

	for (int k = 1; k < nr; k++) {
		if (nr % k == 0) {
			ct++;
		}
	}
	return ct;
}

bool isnumarPerfect(int nr) {

	int ct = 0, sumaDiv = 0;
	for (int k = 1; k * k <= nr; k++) {

		if (nr % k == 0) {
			sumaDiv = sumaDiv + k;
			if (k * k != nr) {
				sumaDiv = sumaDiv + nr / k;
			}
		}
		if (sumaDiv == 2 * nr) {
			return true;
		}
		return false;
	}
}

bool isdivizoriImpari(int nr) {

	if (numarDivizori(nr) % 2 == 1) {
		return true;
	}
	else {
		return false;
	}

}

int sumaNumerelorMaiMariCaP(int n, int p) {

	int suma = 0;

	for (int k = 1; k <= n; k++) {

		cout << "x" << k << "=";
		int x;
		cin >> x;

		if (numarDivizori(x) > p) {
			suma = suma + x;
		}

	}
	return suma;
}

int sumaNumerelorMaiMiciCaN(int nr) {

	int suma = 0;

	for (int i = 1; i <= nr; i++) {
		if (i <= nr) {
			suma = suma + i;
		}
	}
	return suma;
}

int numerePrime(int nr) {

	int ct = 0;

	for (int i = 1; i <= nr; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (numarDivizori(x) == 2) {
			ct++;
		}
	}
	return ct;
}

int sumaNumerePrime(int nr) {

	int s = 0;

	for (int i = 1; i <= nr; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (numarDivizori(x) == 2) {
			s = x + s;
		}
	}
	return s;
}

int nrMax(int nr) {

	int max = 0;

	for (int i = 1; i <= nr; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (x > max) {
			max = x;
		}
	}
	return max;
}

int nrMin(int nr) {

	int min = 9;

	for (int i = 1; i <= nr; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (x < min) {
			min = x;
		}
	}
	return min;
}

int sumaMaxMinPrim(int nr) {

	int s = 0;

	for (int i = 1; i <= nr; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (nrMax(x) == numarDivizori(x) && nrMin(x) == numarDivizori(x)) {
			s = nrMax(x) + nrMin(x);
		}
	}
	return s;
}

int sumaCifreImpare(int nr) {

	int s = 0;

	for (int i = 1; i <= nr; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (x != 0 && x % 2 == 1) {
			s = x + s;
		}
	}
	return s;
	
}

int sumaNumere(int nr) {

	int s = 0;

	for (int i = 1; i <= nr; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		s = s + x;
	}
	return s;
}

int sumaMaxMin(int nr) {

	int s = 0;

	for (int i = 1; i <= nr; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		s = nrMax(x) + nrMin(x);
	}
	return s;
}

int aparitieInSir(int nr) {

	int ct = 0, max= 0;

	for (int i = 1; i <= nr; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (max < x) {
			max = x, ct = 1;
		}
		else if (x == max) {
			ct++;
		}
		
	}

	cout << max<<" ";

	return ct;

}

int aparitieParInSir(int nr) {

	int ct = 0, max = 0;

	for (int i = 1; i <= nr; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		if (max < x && x % 2 == 0) {
			max = x, ct = 1;
		}
		else if (x == max) {
			ct++;
		}

	}

	cout << max << " ";

	return ct;

}

bool isPrim(int nr) {

	if (numarDivizori(nr) == 2) {
		return true;
	}
	return false;
}

int numerePrimeDin2Cifre(int nr) {

	int ct = 0;

	for (int i = 1; i <= nr; i++) {
		cout << "x" << i << "=";
		int x;
		cin >> x;

		int k = x % 100;

		if (numarDivizori(k) == 2) {
			ct++;
		}
	}
	return ct;
}
