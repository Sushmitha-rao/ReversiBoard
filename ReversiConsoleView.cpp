/*
 * ReversiConsoleView.cpp
 *
 *  Created on: Nov 3, 2019
 *      Author: Sushmitha
 */



#include "ReversiConsoleView.h"
#include "ReversiBoard.h"
#include <iostream>
using namespace std;

ReversiConsoleView::ReversiConsoleView(ReversiBoard *pboard)
{
	board=pboard;

}



void ReversiConsoleView::print()
{
	int i;
		int j;
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				cout<<board->ReversiBoard::FieldQuery(i,j)<<"\t";
			}
			cout<<endl;
		}
}
