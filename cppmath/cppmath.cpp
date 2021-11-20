#include <iostream>		//this is for the cout and stuff
#include <math.h>		//this is for the square root, unlike the one on python, this one works

//this one asks for the value a
int valueA()
{
	std::cout << "enter side A's value : ";
	int valA{};
	std::cin >> valA;

	return valA;
}

//this one asks for the value b
int valueB()
{
	std::cout << "enter side B's value : ";
	int valB{};
	std::cin >> valB;

	return valB;
}

int main()
{
	std::cout << "i'm gonna launch the code !!\n";

	int sendValAtoMain{ valueA() };
	int sendValBtoMain{ valueB() };

	std::cout << "the value of the hypothenus is : " << hypot(sendValAtoMain, sendValBtoMain);

	return 0;
}