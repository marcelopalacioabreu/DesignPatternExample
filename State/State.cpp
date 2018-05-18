// State.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include "Location.h"
#include "Miner.h"
#include "MinersWife.h"

int main()
{
	//define this to send output to a text file (see locations.h)
#ifdef TEXTOUTPUT
	os.open("output.txt");
#endif

	//create a miner
	Miner Bob("Bob");

	//create his wife
	MinersWife Elsa("Elsa");

	//run Bob and Elsa through a few Update calls
	for (int i = 0; i<20; ++i)
	{
		Bob.Update();
		Elsa.Update();

		Sleep(800);
	}

	//wait for a keypress before exiting
	
	system("pause");

	return 0;
}
