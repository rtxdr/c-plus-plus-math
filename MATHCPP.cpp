#include <iostream>						//this is for the cout and stuff
#include <string>						//idk how to use this
#include <math.h>						//i wonder why it's here hmmmm

void PYTE();
void SDF();

void menu1()							//init menu to select formula
{
	std::cout << "Please select your formula below (Enter their respective number) : \n"
		"1. Pythagorean Theoreum\n"
		"2. Second Degree Function\n\n"
		">>";
	int menu1select{ };
	std::cin >> menu1select;
	if (menu1select == 1)				//if selects pyte
		PYTE();
	else if (menu1select == 2)			//if selects second degree thing
		SDF();
	else
		std::cout << "\nError, please enter 1 or 2 to select your formula\n";
}

void PYTE()
{
	std::cout << "PYTE init\n";			//notifies that the func. ran correctly, gets deleted after

	int pytevalueA;
	int pytevalueB;

	std::cout << "Insert value A : ";
	std::cin >> pytevalueA;
	std::cout << "\nInsert value B : ";
	std::cin >> pytevalueB;

	std::cout << "\nSide C's length is " << hypot(pytevalueA, pytevalueB);
}

void SDF()								//i didn't mean to do this on purpose
{
	//step 1
	std::cout << "\nSDF init\n";			//will definetly get deleted too

	int sdfvalueA;
	int sdfvalueB;
	int sdfvalueC;

	std::cout << "Insert value A : ";
	std::cin >> sdfvalueA;
	std::cout << "\nInsert value B : ";
	std::cin >> sdfvalueB;
	std::cout << "\nInsert value C : ";
	std::cin >> sdfvalueC;

	//calculating delta and roots
	double sdfdelta{ pow(sdfvalueB, 2) - (4 * sdfvalueA * sdfvalueC) };
	double sdfrootsX1{ (-sdfvalueB + (double)sqrt(abs((double)sdfdelta))) / 2 * sdfvalueA };
	double sdfrootsX2{ (-sdfvalueB - (double)sqrt(abs((double)sdfdelta))) / 2 * sdfvalueA };

	//step 2
	std::cout << "\nSelect calculating option:\n"
		"1. Delta only\n"
		"2. Roots only\n"
		"3. Both\n\n"
		">>";

	int sdfselectstep2;
	std::cin >> sdfselectstep2;

	if (sdfselectstep2 == 1)
		std::cout << "\nDelta = " << sdfdelta;
	else if (sdfselectstep2 == 2)
		std::cout << "\nRoot X1 = " << sdfrootsX1 << "\nRoot X2 = " << sdfrootsX2;
	else if (sdfselectstep2 == 3)
		std::cout << "\nDelta = " << sdfdelta;
	std::cout << "\nRoot X1 = " << sdfrootsX1 << "\nRoot X2 = " << sdfrootsX2;

}

int main()
{
	menu1();
	return 0;
}