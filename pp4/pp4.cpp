// pp4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/*intodawanie(int a, int b); //funkcja (zwracajaca wynik typu int)
void wyswietlanie(int a, int b); //funkcja bedaca procedura :)

int zmiennaGlobalna = 10;*/
void czesc(string imie);
void tabliczka();
void wieksza(int a, int b);
int wartosc(int a, int b);
void wieksza2(int a, int b, int c);
int wartosc2(int a, int b, int c);
float pole(float a, float b);
void dzielniki(int a);
float srednia(float a, float b, float w1, float w2);
int main() { //kod 04_05
	/*zadanie 0
	, b = 25;
	int suma = dodawanie(a, b);
	cout << "Jesli dodam " << a << " do " << b << " to otrzymam " << suma << endl;
	a += 4;
	wyswietlanie(a, b);
	cout << "Zmienna globalna: " << zmiennaGlobalna << endl;
	cout << "Wartosci a oraz b: " << a << " i " << b << endl;
	return 0;
}

int dodawanie(int c, int b) {
	b = c + b;
	return b;
}

void wyswietlanie(int a, int b) {
	cout << "Wynik procedury / funkcji z void: " << a + b << endl;
	zmiennaGlobalna = 20;
	a = 111;
	b = 222;
//suma to wynik funkcji dodawanie z kolei potem program wyswietla wynik procedury ktora polega na dodaniu b i powiekzonego o 4 a, a na koniec wyswietla a i b wpisane na poczatku poniewaz w funkcji wyswietlanie sa to zmienne lokalne,a zmiennaglobalna sie zmienia bo jestlobalna
*/
/*zadanie1
	string im;
	cout << "podaj imie: ";
	cin >> im;
	czesc(im);*/
/*zadanie2
		for (int i = 0; i <= 10; i++) {
		tabliczka();
	}
	*/
/*zadanie3
	int a, b;
	cout << "podaj a: ", cin >> a;
	cout << "podaj b: ", cin >> b;
	wartosc(a, b);
	wieksza(a, b);*/
/*zadanie4
	int a, b, c;
	cout << "podaj a: ", cin >> a;
	cout << "podaj b: ", cin >> b;
	cout << "podaj c: ", cin >> c;
	wartosc2(a, b, c);
	wieksza2(a, b, c);
	*/
/*zadanie5
	float a, h;
	cout << "podaj a: \n", cin >> a;
	cout << "podaj h: \n", cin >> h;
	pole(a, h);
	cout << 2 * pole(a, h);*/
/*zadanie6
	int a;
	cout << "podaj liczbe: \n", cin >> a;
	dzielniki(a);
*/
/*zadanie7
	float a, b, w1, w2;
	cout << "podaj a: \n", cin >> a;
	cout << "podaj wage dla a: \n", cin >> w1;
	cout << "podaj b: \n", cin >> b;
	cout << "podaj wage dla b: \n", cin >> w2;
	cout<<srednia(a, b, w1, w2);*/
	

}
void czesc(string imie) {
	cout << "czesc " << imie << endl;
}
void tabliczka() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << i << " * " << j << " = ";
			cout << i * j << "\n";
		}
	}
}
void wieksza(int a, int b) {
	if (a > b) {
		cout << a;
	}
	else
		cout << b;
}
int wartosc(int a, int b) {
	if (a > b) {
		return a;
	}
	else if (b > a) {
		return b;
	}
}
void wieksza2(int a, int b, int c) {
	if (a > b && a > c) {
		cout << a;
	}
	else if (b > c && b > a) {
		cout << b;
	}
	else if (c > a && c > b) {
		cout << c;
	}
}
int wartosc2(int a, int b, int c) {
	if (a > b && a > c) {
		return a;
	}
	else if (b > c && b > a) {
		return b;
	}
	else if (c > a && c > b) {
		return c;
	}
}
float pole(float a, float b) {
	float pole;
	pole = a * b / 2;
	return pole;
}
void dzielniki(int a) {
		for (int i = 1; i <= a/2; i++) {
		if (a % i == 0) {
			cout << i <<" "<<endl;
		}
		}
}
float srednia(float a, float b, float w1, float w2) {
	float srednia;
	srednia = (a * w1 + b * w2) / (w1 + w2);
	return srednia;
}