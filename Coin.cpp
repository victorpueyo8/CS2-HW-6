#include "Coin.h"
#include <cstdlib>
#include <ctime>


using namespace std;


void Coin::toss()
{
	const int MIN = 1;
	const int MAX = 2;

	unsigned int value = 0;

	value = (rand() % (MAX - MIN + 1)) + 1;

	if (value == 1)
	{
		sideUp = "Tails";
	}
	else
	{
		sideUp = "Heads";
	}
}