#include "SubstitutionInterraction.h"

void SubstitutionInterraction::addPairToSub(pair<int, int> input)
{
	substitution.push_back(input);
}

void SubstitutionInterraction::printSub()
{
	cout << "Подстановка" << endl;
	for (auto& el : substitution)
	{
		cout << el.first << "\t";
	}
	cout << endl;
	for (auto& el : substitution)
	{
		cout << "|" << "\t";
	}
	cout << endl;
	for (auto& el : substitution)
	{
		cout << "V" << "\t";
	}
	cout << endl;
	for (auto& el : substitution)
	{
		cout << el.second << "\t";
	}
}

void SubstitutionInterraction::printQuit()
{
	cout << endl << endl << "Backspace - возврат в меню";

	int answ = _getch();
	bool press = false;

	while (!press)
	{
		if (answ == 8)
		{
			press = true;
			break;
		}
		else
		{
			answ = _getch();
		}
	}

	system("cls");
}