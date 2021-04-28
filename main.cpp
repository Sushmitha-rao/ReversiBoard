// Standard (system) header files
#include <iostream>
#include <stdlib.h>
#include "ReversiBoard.h"
#include "ReversiConsoleView.h"



using namespace std;


// Main program
int main (void)
{
	cout << "ReversiBoard started." << endl << endl;
	unsigned int row;
	unsigned int column;
	int quit;

	ReversiBoard board;//An object board of type ReversiBoard is created
	ReversiBoard *pboard=&board;
	ReversiConsoleView view(pboard);//An object view of type ReversiConsole is created
	cout<<"Welcome to reversiboard"<<endl;
	view.print();//prints the initial board

//Checks if the board is empty before taking player's input
	while(board.BoardEmpty()!=0)
	{
		cout<<"Player 1 turn"<<endl;
		cout<<"Enter the row and column"<<endl;
		cin>>row>>column; //player 1 enters the desired position on board

		board.setBoard(row,column,ReversiBoard::player1);//update the board
		view.print(); //print the board after player 1's turn

		cout<<"Player 2 turn"<<endl;
		cout<<"enter the row and column"<<endl;
		cin>>row>>column; //player 2 enters the desired position on board
		board.setBoard(row,column,ReversiBoard::player2); //update the board
		view.print(); //print the board

		cout<<"Enter 1 to quit the game or any other number to continue"<<endl;//ask if the player wants to continue
		cin>>quit;
		if(quit==1)
			break;
	}

		cout<<"Game over"<<endl;

		board.printWinner();//compute the winner and print

	return 0;
}
