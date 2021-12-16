/*
This program was created for me to learn physics for my exam tmrw
if this program sucks and/or is incomplete, i won't update it
this program solves acceleration and constant speed units
it will also be in french because i'm not learning english terms
*/

#include <iostream>
#include <cmath>

/*
Formules lolololo
Vitesse finale : Vf = Vi + a * t
Position :	Vf manquant : Vi * t + 1/2 * a * t ^ 2
			Vi manquant : Vf * t - 1/2 * a * t ^ 2
			Acceleration manquante : ((Vi + Vf) * t) / 2
*/

void vitesseFinale();
void posVFmqt();
void posVImqt();
void posAmqt();

int main()
{
	std::cout << "1. Vitesse finale\n";
	std::cout << "2. Position : Vf manquant\n";
	std::cout << "3. Position : Vi manquant\n";
	std::cout << "4. Position : Accélération manquante\n\n";
	std::cout << ">>";

	int menu1return{};
	std::cin >> menu1return;

	if (menu1return == 1)
		vitesseFinale();
	else if (menu1return == 2)
		posVFmqt();
	else if (menu1return == 3)
		posVImqt();
	else if (menu1return == 4)
		posAmqt();
	else
		std::cout << "\nmammma mia";
	return 0;
}

void vitesseFinale()
{
	double vinit{};
	double time{};
	double acceleration{};
	
	std::cout << "\n\nvitesse initiale : ";
	std::cin >> vinit;
	std::cout << "\ntemps : ";
	std::cin >> time;
	std::cout << "\nacceleration : ";
	std::cin >> acceleration;

	double repVF{ vinit + acceleration * time };
	
	std::cout << "\n" << repVF;
}

void posVFmqt()
{
	double vinit{};
	double time{};
	double acceleration{};

	std::cout << "\n\nvitesse initiale : ";
	std::cin >> vinit;
	std::cout << "\ntemps : ";
	std::cin >> time;
	std::cout << "\nacceleration : ";
	std::cin >> acceleration;

	double time2{pow(time , 2)};

	double repXVFM{ (vinit * time) + (1/2) * acceleration * time2};

	std::cout << repXVFM;
}

void posVImqt()
{
	double vfin{};
	double time{};
	double acceleration{};

	std::cout << "\n\nvitesse finale : ";
	std::cin >> vfin;
	std::cout << "\ntemps : ";
	std::cin >> time;
	std::cout << "\nacceleration : ";
	std::cin >> acceleration;

	double time2{ pow(time , 2) };

	double repXVIM{ (vfin * time) - (1 / 2) * acceleration * time2 };
	std::cout << "\n" << repXVIM;
}

void posAmqt()
{
	double vinit{};
	double time{};
	double vfin{};

	std::cout << "\n\nvitesse initiale : ";
	std::cin >> vinit;
	std::cout << "\nvitesse finale : ";
	std::cin >> vfin;
	std::cout << "\ntemps : ";
	std::cin >> time;

	double repXAM{ ((vinit + vfin) * time) / 2 };

	std::cout << "\n" << repXAM;
}
