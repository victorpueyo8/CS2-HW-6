#pragma once
#include <string>
#include <cstdlib>
#include <ctime>
#ifndef COIN_H
#define COIN_H

using namespace std;

class Coin
{
private:
	string sideUp;
	int countHeads;
	int countTails;
public:
	Coin()
	{
		sideUp = "";
		countHeads = 0;
		countTails = 0;

		unsigned seed = time(0);

		srand(seed);

		toss();
	}
	void toss();
	string getSideUp() const
	{
		return sideUp;
	}
	int getcountHeads() const
	{
		return countHeads;
	}
	int getcountTails() const
	{
		return countTails;
	}
};
#endif
