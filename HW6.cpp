#include <iostream>
#include "Coin.h"

using namespace std;


int main()
{
	Coin coin1;
	const int MAX_TOSSES = 20;

	cout << "The coin is initially facing " << coin1.getSideUp() << endl << endl;

	cout << "The coin will toss " << MAX_TOSSES << " times. \n\n";
	for (int count = 0; count < MAX_TOSSES; count++)
	{
		coin1.toss();

		cout << "The number " << (count + 1) << " toss is: " << coin1.getSideUp() << endl;
	}

	cout << "The number of times Heads was facing up was: " << coin1.getcountHeads() << endl;
	cout << "The number of times Tails was facing up was: " << coin1.getcountTails() << endl;

}