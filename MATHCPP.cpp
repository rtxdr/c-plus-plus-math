#include <iostream>						//this is for the cout and stuff
#include <math.h>						//i wonder why it's here hmmmm

void PYTE();
void SDF();
void PMENU();
void ariProgressionA();
void ariProgressionB();
void ariProgressionC();
void geoProgression();
void ariProgressionSEL();
void geoProgressionSEL();

void menu1()							//init menu to select formula
{
	std::cout << "Please select your formula below (Enter their respective number) : \n"
		"1. Pythagorean Theoreum\n"
		"2. Second Degree Function\n"
		"3. Progressions\n\n"			//we call them "suites" in french lol
		">>";
	int menu1select{ };
	std::cin >> menu1select;
	if (menu1select == 1)				//if selects pyte
		PYTE();
	else if (menu1select == 2)			//if selects second degree thing
		SDF();
	else if (menu1select == 3)
		PMENU();
	else
		std::cout << "\nError, please enter 1 or 2 to select your formula\n";
}

void PYTE()
{
	//std::cout << "PYTE init\n";			//notifies that the func. ran correctly, gets deleted after

	int pytevalueA;
	int pytevalueB;

	system("cls");

	std::cout << "Insert value A : ";
	std::cin >> pytevalueA;
	std::cout << "\nInsert value B : ";
	std::cin >> pytevalueB;

	std::cout << "\nSide C's length is " << hypot(pytevalueA, pytevalueB);
}

void SDF()								//i didn't mean to do this on purpose
{
	//step 1
	//std::cout << "\nSDF init\n";			//will definetly get deleted too

	int sdfvalueA;
	int sdfvalueB;
	int sdfvalueC;

	system("cls");

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
	system("cls");
	std::cout << "Select calculating option:\n"
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

void PMENU()
{
	system("cls");
	std::cout << "Please select your type of progression\n"
		"1. Arithmetic Progression\n"
		"2. Geometric Progression\n\n"
		">>";
	int menuPselect{};
	std::cin >> menuPselect;
	if (menuPselect == 1)				//if selects first
		ariProgressionSEL();
	else if (menuPselect == 2)			//if selects the geometric thing
		geoProgressionSEL();
	else
		std::cout << "Error, invalid value";
}

void ariProgressionSEL()
{
	system("cls");
	std::cout << "What are you trying to search ?\n"
		"1. U(n)					/ Term number n's value\n"
		"2. d (sometimes called r)	/ Difference\n"
		"3. S(n)					/ Sum of the terms\n\n"
		">>";
	int ariPselect{};
	std::cin >> ariPselect;
	if (ariPselect == 1)
		ariProgressionA();
	else if (ariPselect == 2)
		ariProgressionB();
	else if (ariPselect == 3)
		ariProgressionC();
	else
		std::cout << "Error, invalid value";
}

void geoProgressionSEL()
{
	system("cls");
	std::cout << "this is still work in progress";
}

void ariProgressionA()
{
	double ariPAvalueA{};
	double ariPAvalueB{};
	double ariPAvalueC{};

	system("cls");
	std::cout << "Insert the first term's value : ";
	std::cin >> ariPAvalueA;
	std::cout << "\nInsert the common difference's value : ";
	std::cin >> ariPAvalueB;
	std::cout << "\nInsert desired term number (n) : ";
	std::cin >> ariPAvalueC;

	//calculating.
	double ariPAvalueANS{ariPAvalueA + (ariPAvalueC - 1) * ariPAvalueB};

	//sending answer
	std::cout << "\n\nThe term U(" << ariPAvalueC << ") is : " << ariPAvalueANS;
} //term n value

void ariProgressionB() //difference or "raison"
{
	double ariPBvalueA{};
	double ariPBvalueB{};

	system("cls");
	std::cout << "Insert term U(n) : ";
	std::cin >> ariPBvalueA;
	std::cout << "\nInsert term U(n-1) : ";
	std::cin >> ariPBvalueB;

	//calculating
	double ariPBvalueANS{ariPBvalueA - ariPBvalueB};

	//sending answer
	std::cout << "\n\nThe common difference is : " << ariPBvalueANS;
}

void ariProgressionC() //sum of n terms
{
	double ariPCvalueA{};
	double ariPCvalueB{};
	double ariPCvalueC{};

	system("cls");
	std::cout << "Insert the first term's value : ";
	std::cin >> ariPCvalueA;
	std::cout << "\nInsert the common difference's value : ";
	std::cin >> ariPCvalueB;
	std::cout << "\nInsert desired sum of n terms : ";
	std::cin >> ariPCvalueC;

	//calculating.. it is actually 18:30 and i have english exam tmrw lolollololophfjkdsfgjhdsfjsdkqf
	double ariPCvalueANS{ (ariPCvalueC / 2) * ((2 * ariPCvalueA) + (ariPCvalueC - 1) * ariPCvalueB) };

	//sending answaaaaa yayayayyaya
	std::cout << "\n\nThe sum of the terms 1 to " << ariPCvalueC << " is : " << ariPCvalueANS;
}

void geoProgression()
{

}

int main()
{
	menu1();
	return 0;
}