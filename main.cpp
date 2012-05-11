#ifndef MAIN_CPP
#define MAIN_CPP

#include <iostream>
#include "CPU.h"
using namespace std;
int main()
{
	typedef char BYTE;
	typedef unsigned short int WORD;
	//HELPERS--------------
	C_CPU CPU;
	
	//RUN CPU
	bool quit = false;
	CPU.RESET();//reset vector

	//LOOPS
	while(!quit){
		//get and process opcode
		CPU.GetNextCode();
	}
	//delete[] systemMem;
	//delete[] ppuMem;

	return 0;
}
#endif