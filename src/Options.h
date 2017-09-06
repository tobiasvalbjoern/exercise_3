/*
 * Options.h
 *
 *  Created on: 29 Aug 2017
 *      Author: Tobias
 */

#ifndef OPTIONS_H_
#define OPTIONS_H_
#include <string>
//always remember to use this.
using namespace std;
class Options
{
private:
	int argC;
	char **argV;

public:
	Options(int argc, const char **argv);
	bool is_present(char c);
};

#endif /* OPTIONS_H_ */
