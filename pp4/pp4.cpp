// pp4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;
/*intodawanie(int a, int b); //funkcja (zwracajaca wynik typu int)
void wyswietlanie(int a, int b); //funkcja bedaca procedura :)*/

int zmiennaGlobalna = 10;
void czesc(string imie);
void tabliczka();
void wieksza(int a, int b);
int wartosc(int a, int b);
void wieksza2(int a, int b, int c);
int wartosc2(int a, int b, int c);
float pole(float a, float b);
void dzielniki(int a);
float srednia(float a, float b, float w1, float w2);
float przeciw(float a, float b);
int suma(int a, int b);
int roznica(int a, int b);
int iloczyn(int a, int b);
int iloraz(int a, int b);
int sumaliczb(int a);
float obwod(float a, float b);
void objetosc();
int potega(int a, int b);
int silnia(int a);
int dwa(int a);
float numerek(int n);
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
/*zadanie8
					float a, b;
					cout << "podaj pierwsza przyprostokatna: ", cin >> a;
					cout << "\npodaj druga przyprostokatna: ", cin >> b;
					cout << "\ntwoja przeciwprostokatna to: " << przeciw(a, b);*/
/*zadanie9
						int a, b;
						char znak;
						while (7) {
							cout << "podaj a:";
							cin >> a;
							cout << "\npodaj b:";
							cin >> b;
							cout << "\npodaj znak dzialania:";
							cin >> znak;
							switch (znak)
							{
							case '+':

								cout << "\n" << suma(a, b)<<"\n";
								break;

							case'-':

								cout << "\n" << roznica(a, b)<<"\n";
								break;

							case'*':

								cout << "\n" << iloczyn(a, b)<<"\n";
								break;

							case'/':

								if (b == 0)
									cout << "\nnie dziel przez 0!!";
								else
									cout << "\n" << iloraz(a, b) << "\n";
								break;

							default:
								cout << "\nniepoprawny znak dzialania";
							}

							char z;
							cout << "czy chcesz kontynuowac obliczenia?\n";
							cin >> z;
							if (z == 'n')
							{
								break;
							}

						}*/
/*zadanie10
							int ile;
							cout << "podaj ile liczb chcesz zsumowac: ", cin >> ile;
							int su = sumaliczb(ile);
							cout << "suma podanych liczb to " << su;*/
/*zadanie11
								float a, b;
								cout << "podaj drugi bok prostokata: ", cin >> b;
								cout << "obwod twojego prostokata to: " << obwod(a, b);*/
/*zadanie12
								objetosc();*/
/*zadanie13
								int a, b;
								cout << "podaj pierwsza liczbe: ", cin >> a;
								cout << "podaj druga liczbe: ", cin >> b;
								cout << "potega a do b wynosi: " << potega(a, b);*/
/*zadanie14
								int a;
								cout << "podaj liczbe ktorej silnie chcesz otrzymac: ", cin >> a;
								cout << "silnia twojej liczby to: " << silnia(a);
								*/
/*zadanie15
	int n;
	cout << "podaj liczbe do ktorej chcesz podniesc 2: ", cin >> n;
	cout << "2 do twojej liczby to: " << dwa(n);*/
/*zadanie16*/
int sn;
cout << "jaki jest dzisiaj szczesliwy numerek?: ", cin >> sn;

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
	else if (a == b) {
		return 0;
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
	else if (a == b || b == c || a == c) {
		return 0;
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
float przeciw(float a, float b) {
	float przeciw;
	przeciw = a * a + b * b;
	przeciw = sqrt(przeciw);
	return przeciw;

}
int suma(int a, int b) {
	int suma = a + b;
	return suma;
}
int roznica(int a, int b) {
	int roznica = a - b;
	return roznica;
}
int iloczyn(int a, int b) {
	int iloczyn = a * b;
	return iloczyn;
}
int iloraz(int a, int b) {
	int iloraz = a / b;
	return iloraz;
}
int sumaliczb(int a) {
	int b;
	int suma = 0;
	for (int i=1;i <= a;i++) {
		cout << "\npodaj liczbe: ", cin>>b;
		suma = suma + b;
	}
	//cout << "\ntwoja suma to: " << suma;//opcja numer 2, przy ktorej nie byloby return a w deklaracji byloby void,
	return suma;
}
float obwod(float a, float b) {
	float obwod;
	obwod = 2 * (a + b);
	return obwod;
}
void objetosc() {
	float a, b, c;
	cout << "podaj pierwsza krawedz: ", cin >> a;
	cout << "podaj druga krawedz: ", cin >> b;
	cout << "podaj wysokosc: ", cin >> c;
	float obj;
	obj = a * b * c;
	cout << "objetosc twojego prostopadloscianu to " << obj;
}
int potega(int a, int b) {
	int potega = 1;
	for (int i = 1;i <= b;i++) {
		potega = potega * a;
		
	}
	return potega;
}
int silnia(int a) {
	int sil=1;
	if (a == 0) {
		return 0;
	}
	else {
		for (int i = 0;i < a;i++) {
			sil = sil * (a - i);
		}
		return sil;
	}
}
int dwa(int a) {
	int dwa = 1;
	for (int i = 0;i < a;i++) {
		dwa = dwa * 2;
	}
	return dwa;
}
float numerek(int n) {

}
