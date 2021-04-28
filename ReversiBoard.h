/*
 * ReversiBoard.h
 *
 *  Created on: Oct 27, 2019
 *      Author: Sushmitha
 */

#ifndef REVERSIBOARD_H_
#define REVERSIBOARD_H_

/*This class represents a ReversiBoard. It has the following parameters:
 *Data : m_board, of type int: This private data member represents the game board
 *Data : FieldState, of type enum: This private data member represents state of each field
 *Function: fieldQuery: This public function returns the field value of specified position on board
 *Function: setBoard: This public function sets the field to specified value
 *Function: BoardEmpty:This public function checks if the board is empty
 *Function: printWinner: This public function computes and prints the winner of the game
 *Function: flipHorizontal:This private function checks for the opponents piece horizontally and flips it
 *Function: flipVertical: This private function checks for the opponents piece vertically and flips it
 * */



class ReversiBoard
{
	public:
	ReversiBoard();
	enum FieldState { empty, player1, player2};
	int FieldQuery(int row, int column);
	void setBoard(int row, int column, FieldState player);

	int BoardEmpty();
	void printWinner();


	virtual ~ReversiBoard();

private:
	int m_board[8][8]={0,0};
	void flipHorizontal(int row, int column, FieldState player);
	void flipVertical(int row, int column, FieldState player);



};

#endif /* REVERSIBOARD_H_ */
