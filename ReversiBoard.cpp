/*
 * ReversiBoard.cpp
 *
 *  Created on: Oct 27, 2019
 *      Author: Sushmitha
 */

#include "ReversiBoard.h"
#include<iostream>
using namespace std;

//This Constructor initializes the board with initial positions of players
ReversiBoard::ReversiBoard()
{
		m_board[3][3]=player1,m_board[4][4]=player1,
				m_board[3][4]=player2,m_board[4][3]=player2;


}


//This member function returns the field state of the board
int ReversiBoard::FieldQuery(int row, int column)
{
	return m_board[row][column];
}

//This member function sets the field state of the board based on player's input
void ReversiBoard::setBoard(int row, int column, enum ReversiBoard::FieldState player)
{

	if((row<0 || row>8) || (column<0 || column>8)) //check if the player has entered a valid move
		{
			cout<<"Enter a valid move"<<endl;//display error message

		}


	else
         //check if the piece may be put at the given location
		//check the validity of the given location horizontally, vertically and diagonally
	if((m_board[row][column-1]==player || m_board[row][column+1]==player)
		|| (m_board[row-1][column]==player || m_board[row+1][column]==player)
		|| (m_board[row-1][column+1]==player || m_board[row+1][column-1]==player))

	{
		m_board[row][column]=player; //update the field with players's piece
	}
	else
	{
		cout<< "The move is invalid"<<endl; //display error message
	}

	flipHorizontal(row,column,player);
	flipVertical(row,column,player);
}

//This function checks for the horizontal positions of the given position.
//If opponents piece is found adjacent, it is flipped to the player's piece
void ReversiBoard::flipHorizontal(int row, int column, enum ReversiBoard::FieldState player)
{
	for(column=column-1;column>=0;column--) //check the horizontal left positions
		{
			if(m_board[row][column]== empty)
			{
				//do nothing
				break;
			}
			else
					{
						m_board[row][column]=player;
					}
		}
	for(column=column+1;column<8;column++) //check the horizontal right positions
		{
			if(m_board[row][column]==empty)
			{
				//do nothing
				break;
			}
			else
					{
						m_board[row][column]=player;
					}
		}
}


//This function checks for the vertical positions of the given position.
//If opponents piece is found adjacent, it is flipped to the player's piece
void ReversiBoard::flipVertical(int row, int column, enum ReversiBoard::FieldState player)
{
	for(row=row-1;row>=0;row--) //check for vertical down positions
		{
			if(m_board[row][column]==empty)
			{
				//do nothing
				break;
			}
			else
			{
				m_board[row][column]=player;
			}
		}

		for(row=row+1;row<8;row++) //check for vertical down positions
		{
			if(m_board[row][column]==empty)
			{
				//do nothing
				break;
			}
			else
			{
				m_board[row][column]=player;
			}
		}

}



//This function checks if the board has any empty field
int ReversiBoard::BoardEmpty()
{
	int row;
	int column;
	int emptyField = 0;
	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			if (m_board[row][column] == 0)
				emptyField++;

		}
	}
		return emptyField;
}

void ReversiBoard::printWinner()
{
	int row;
	int column;
	int player1=0;
	int player2=0;
	for (row = 0; row < 8; row++)
		{
			for (column = 0; column < 8; column++)
			{
				if(FieldQuery(row,column)==1)
					player1++;
				else if(FieldQuery(row,column)==2)
					player2++;
			}
		}
	if(player1>player2)

		cout<<"Winner is player1"<<endl;

	else
		cout<<"Winner is Player 2"<<endl;
}


ReversiBoard::~ReversiBoard()
{
	// TODO Auto-generated destructor stub
}


