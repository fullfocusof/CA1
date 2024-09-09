#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <sstream>

using namespace std;

class SubstitutionInterraction
{
	vector<pair<int, int>> substitution;

public:

	void addPairToSub(pair<int, int> input);
	void printSub();

	void printQuit();
};