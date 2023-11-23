#pragma once
#include "functii.h";

// 1) todo: Se citește un număr natural n. Să se determine câți divizori pari are acest număr.
// Divizorii pari lui 12 sunt 2, 4, 6 și 12.

void sol1() {

	int numar = 0;
	cout << "n= ";
	cin >> numar;
	afisareDivizoriPari(numar);
}

// 2) todo: Se dă un număr natural n. Calculați suma dintre cel mai mic și cel mai mare divizor propriu al lui n.
// Cel mai mic divizor propriu al lui 12 este 2, iar cel mai mare este 6. rezultatul este 8   ???

void sol2() {

	int numar = 0;
	cout << "n= ";
	cin >> numar;


}


// 3) todo: Să se scrie un program care verifică dacă un număr natural citit de la tastatură este perfect.
// Divizorii lui 6 sunt 1, 2, 3, 6. Suma lor este 12, iar 2*6=12., 6 este numar perfect

void sol3() {

	int numar = 0;
	cout << "n= ";
	cin >> numar;

	if (isnumarPerfect(numar) == true) {
		cout << numar << " este perfect";
	}
	else {
		cout << numar << " nu este perfect";
	}

}


// 4) todo: Se dă n, număr natural nenul. Să se testeze dacă n are număr impar de divizori.
// Numar 4 are un numar impari de divizori

void sol4() {

	int numar = 0;
	cout << "n= ";
	cin >> numar;

	if (isdivizoriImpari(numar) == true) {
		cout << numar << " are numar impar de divizori";
	}
	else {
		cout << numar << " nu are numar impar de divizor";
	}

}


// 5) todo: Se dă un șir de n numere naturale nenule și de asemenea un număr natural p. Să se calculeze suma numerelor din șir care au cel puțin p divizori.


void sol5() {

	int numar = 0;
	int p = 0;
	cout << "n= ";
	cin >> numar;
	cout << "p= ";
	cin >> p;
	cout << "Suma numerelor din sir care au cel putin " << p << " divizori este " << sumaNumerelorMaiMariCaP(numar, p);

}

// 6) todo: Se citește un număr natural n. Să se determine numărul de divizori ai oglinditului lui n.
// Oglinditul lui 63 este 36, care are 9 divizori.

void sol6() {

	int n;
	cout << "n= ";
	cin >> n;
	cout << "Oglinditul lui " << n << " este " << oglinditul(n) << endl;
	cout << "Numarul de divizori a lui " << oglinditul(n) << " este " << numarDivizori(oglinditul(n)) << endl;

}


// 7) todo: Să se scrie un program care să determine cel mai mare divizor comun a două numere naturale citite de la tastatură. ???


// 8) todo: Se citește n număr natural. Calculați suma tuturor numerelor naturale mai mici sau egale cu n.

void sol8() {

	int numar = 0;
	cout << "n= ";
	cin >> numar;

	cout << "Suma numerelor naturale mai mici sau egale cu " << numar << " este " << sumaNumerelorMaiMiciCaN(numar);

}


// 9) todo:Se dă un șir cu n elemente, numere naturale nenule. Să se determine cel mai mare divizor comun al celui mai mic și celui mai mare element din șir. ???


// 10) todo: Să se scrie un program care citește de la tastatură un număr natural n și verifică dacă este prim.

void sol10() {

	int numar = 0;
	cout << "n= ";
	cin >> numar;

	if(numarDivizori(numar) == 2) {
		cout << numar << " este un numar prim";
	}
	else {
		cout << numar << " nu este un numar prim";
	}

	

}


// 11) todo: Se dau n numere naturale. Determinați câte dintre ele sunt prime.

void sol11() {

	int numar = 0;
	cout << "n= ";
	cin >> numar;

	cout << "Din cele " << numar << " numere " << numerePrime(numar) << " sunt prime";

}


// 12) todo: Se dau n numere naturale. Determinați suma celor prime.
// Dintre cele 5 numere citite sunt prime numerele 11 și 3.

void sol12() {

	int numar = 0;
	cout << "n= ";
	cin >> numar;

	cout << "Suma numerelor prime este " << sumaNumerePrime(numar);
}


// 13) todo: Se dă un șir cu n elemente, numere naturale nenule. Să se determine suma dintre cel mai mic și cel mai mare element prim din șir.
// Cel mai mic element prim al șirului este 13, iar cel mai mare este 37. Suma lor este 50.

void sol13() {

	int numar = 0;
	cout << "n= ";
	cin >> numar;

	cout << "Suma lor este " << sumaMaxMinPrim(numar);

}


// 14) todo: Se se citește un număr natural n. Să se determine cel mai mic număr prim, strict mai mare decât n. ???

// 15) todo: Se citesc de la tastatură numerele n k, apoi n numere naturale. Să se determine suma celor impare și câte dintre ele se divid cu k.

void sol15() {

	int numar = 0, k = 0, ct = 0;
	cout << "n= ";
	cin >> numar;
	cout << "k= ";
	cin >> k;

	if (numar % k) {
		ct++;
	}

	cout << "Suma cifrelor impar este " << sumaCifreImpare(numar) << " si " << ct << " dintre toate numere se impart cu " << k;

}


// 16) todo: Să se scrie un program care să citească n numere întregi și să calculeze suma lor.

void sol16() {

	int numar = 0;
	cout << "n= ";
	cin >> numar;

	cout << "Suma numerelor este " << sumaNumere(numar);

}


// 16) todo: Să se scrie un program care citeşte un număr natural n şi determină factorul care apare în descompunerea în factori primi a lui n la puterea cea mai mare. ???


// 18) todo: Se dau două numere naturale nenule. Să se verifice dacă cele două numere au exact aceiași factori primi, indiferent de puterea acestora. ???


// 17) todo: Se dau n numere întregi. Calculaţi cel mai mare dintre cele n numere date.

void sol17() {

	int numar = 0;
	cout << "n= ";
	cin >> numar;

	cout << "Cel mai mare numar este " << nrMax(numar);

}


// 18) todo: Se dau n numere întregi. Calculaţi cel mai mic dintre cele n numere date.

void sol18(){

	int numar = 0;
	cout << "n= ";
	cin >> numar;

	cout << "Cel mai mic numar este " << nrMin(numar);

}


// 19) todo: Se dau n numere naturale. Calculaţi suma dintre cel mai mare și cel mai mic număr dat.   ??????

void sol19() {

	int numar = 0;
	cout << "n= ";
	cin >> numar;

	cout << "Suma dintre cel mai mare si cel mai mic numar este " << sumaMaxMin(numar);

}


// 20) todo: Se citesc numere de la tastatură până la apariția lui zero. Să se determine cea mai mare valoare citită.

void sol20() {

	int numar = 0, max = 0;
	cout << "n= ";
	cin >> numar;

	while (numar != 0) {
		if (numar == 0) {
			cout << " NU EXISTA";
		}
		else {
			if (numar > max) {
				max = numar;
			}
		}
	}
	cout << max;
}


// 21) todo: Să se scrie un program care citește un șir de n numere naturale şi determină valoarea maximă din șir și de câte ori apare.

void sol21() {

	int numar = 0, max = 0;
	cout << "n= ";
	cin >> numar;

	cout << aparitieInSir(numar);
}


// 22) todo: Se dau n numere naturale. Determinați cel mai mare număr par introdus și numărul său de apariții.

void sol22() {

	int numar = 0, max = 0;
	cout << "n= ";
	cin >> numar;

	cout << aparitieParInSir(numar);
}


// 23) todo: Să se scrie un program care citește de la tastatură un număr natural n și verifică dacă este prim.

void sol23() {

	int numar = 0, max = 0;
	cout << "n= ";
	cin >> numar;

	if (isPrim(numar) == true) {
		cout << "Numarul este prim";
	}
	else {
		cout << "Numarul nu este prim";
	}
}


// 24) todo: Se citeşte un număr natural n. Să se determine descompunerea în factori primi a lui n. ???


// 14) todo: Se se citește un număr natural n. Să se determine cel mai mic număr prim, strict mai mare decât n. ???


// 26) todo: Se dă un număr natural n. Calculați pătratul celui mai mic divizor propriu al său.

void sol26() {

	int nr;
	cout << "n= ";
	cin >> nr;

	for (int i = 2; i <= nr; i++) {
		if (nr % i == 0) {
			cout << i * i;
			break;
		}
	}

}

// 27) todo: Se citeşte un număr natural n. Să se afişeze descompunerea în factori primi a lui n.  ???


// 28) todo: Un număr prim se numește trunchiabil-stânga dacă, prin eliminare repetată a primei cifre, toate numerele rezultate sunt prime.
// Se dă un număr natural, să se verifice dacă numărul este prim trunchiabil - stânga. ???

// 29) todo: Se dau n numere întregi. Calculaţi cel mai mare dintre cele n numere date.

void sol17() {

	int numar = 0;
	cout << "n= ";
	cin >> numar;

	cout << "Cel mai mare numar este " << nrMax(numar);

}


// 30) todo: Se dau n numere întregi. Calculaţi cel mai mic dintre cele n numere date.

void sol18() {

	int numar = 0;
	cout << "n= ";
	cin >> numar;

	cout << "Cel mai mic numar este " << nrMin(numar);

}