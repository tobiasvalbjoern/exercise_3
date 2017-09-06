//============================================================================
// Name        : Exercise3.cpp
// Author      : Tobias Valbjørn
// Version     :
// Copyright   : Free for all
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Options.h"

using namespace std;

int main(int argc, char **argv)
{
	//instantiate object. Send arguments from command line. It is important to use ** instead of *argv[]
	Options opt(argc, (const char**) argv);


	if (argc <= 1)
	{
		cout << "Correct usage: <program name> <OptionA> <OptionB>" << endl;
	}

	//check for specifik paramaters.

	if (opt.is_present('a') == true)
		cout << "Option A was set" << endl;
	else
		cout << "Option A was not set" << endl;

	if (opt.is_present('b') == true)
		cout << "Option B was set" << endl;
	else
		cout << "Option B was not set" << endl;

	if (opt.is_present('o') == true)
		cout << "Option O was set" << endl;
	else
		cout << "Option O was not set" << endl;

	return 0;
}
