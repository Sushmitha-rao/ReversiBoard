/*
 * ReversiConsoleView.h
 *
 *  Created on: Nov 3, 2019
 *      Author: Sushmitha
 */

#ifndef REVERSICONSOLEVIEW_H_
#define REVERSICONSOLEVIEW_H_

#include "ReversiBoard.h"

/*
 * This class represents the ConsoleView of the ReversiBoard.
 * It has the following parameters:
 * data: *board: This private data is a pointer to the class Reversiboard
 * function: print: This public function prints the board on console
 *
 */
class ReversiConsoleView
{
private:
	ReversiBoard *board;
public:
	ReversiConsoleView(ReversiBoard *pboard);
	void print();
};

#endif /* REVERSICONSOLEVIEW_H_ */
