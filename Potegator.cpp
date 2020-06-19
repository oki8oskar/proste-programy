#include <iostream>

int main (){
	std::cout << "		POTEGATOR \n Program do potegowania \n (NIE OBSLUGUJE LICZB MINUSOWYCH!)"; // Interfejs startowy
	std::cout << "\n	Copyright Oskar Dybala 2020 ";
	{
		std::cout << "\nJaką liczbe chcesz potegowac? "; // Zapytanie o liczbę do potęgi
		int liczba = 0;
		std::cin >> liczba;
		
		std::cout << "\n \nIle razy chcesz ja spotegowac? "; // Zapytanie o potęge liczby
		int pot = 0;
		std::cin >> pot;
		int etap = 0;
		int wynik = 0;
		obliczanie:
		if (etap < pot){
		wynik = wynik + liczba * liczba;
		etap++;
		if (pot != 2){
		goto obliczanie;
		}
		else {
			goto wynik;
		}
		}
		else {
			wynik:
			std::cout <<"Wynik potegowania liczby " << liczba << " do potegi " << pot << " to " << wynik;
			std::cin >> wynik;
		}
	}
}
