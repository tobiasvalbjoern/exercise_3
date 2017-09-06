/*
 * Options.cpp
 *
 *  Created on: 29 Aug 2017
 *      Author: Tobias
 */

#include "Options.h"
#include <string>
#include <cstring>

Options::Options(int argc, const char **argv)
{
	argC = argc;
	argV = (char**) argv;
}

bool Options::is_present(char c)
{



	//we create a string with the character the user is searching for in the command line.
	char str[3] = "-";
	str[1] = c;
	str[2] = 0;

	//check for the occurrence of our newly created substring
	//in the arguments from the commandline. One argument at a time.
	//the command line counter starts with 1.

	for (int count = 1; count < argC; count++)
	{
		if (strstr(argV[count], str))
			return true;
	}
	return false;
}

