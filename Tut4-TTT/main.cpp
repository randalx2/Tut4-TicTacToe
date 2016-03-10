/*PRANEEL MISTHRY 202515355 COMPUTER METHODS 3 TUT4-TICTACTOE**************/
/*9 March 2016**************************************************************************************************************************/
/******************************************************************************************************************************************/

#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

#include "TTT.h"  // Include the header file for the TTT class

using namespace std;

int main(){

	int player = 1; //Initialize variable to check player number
	int n = 0;
	int x = 0, y = 0; //Store coordinates for user's move
	

	TicTacToe gameBoard = TicTacToe(); // Created gameboard object of class TicTacToe

	cout << "Welcome to TicTacToe console game" << endl;
	cout << "To play, please enter your move in the following format: " << endl;
	cout << " row number(0 to 2) column number(0 to 2) player number(1 or 2) " << endl;
	cout << "Player one uses X's and Player 2 uses 0's" << endl;
	

	//Test The Print member function and output of grid
	gameBoard.print();  //Initial layout of board is empty

	//Main game loop starts here
	//Since there are 9 boxes in the grid, the game uses 9 moves at most

	for (int i = 0; i < 9; i++)
	{
		cout << "Enter your move and Player number " << endl;
		cin >> x >> y >> player;

		if (gameBoard.move(x, y, player))
		{
			gameBoard.print();
			gameBoard.isWon();

			if ((gameBoard.isWon() == 1))
			{
				cout << "Player 1 wins!! " << endl;
				gameBoard.restart();
				i = 0; //Reset Game Counter
			}
			else if ((gameBoard.isWon() == 2))
			{
				cout << "Player 2 Wins!! " << endl;
				gameBoard.restart();
				i = 0;
			}
			else if ((gameBoard.isWon() == 3))
			{
				cout << "Draw Match!! " << endl;
				gameBoard.restart();
				i = 0;
			}
			else if ((gameBoard.isWon() == 4))
			{
				cout << "Game still in progress " << endl;
			}
			else{ cout << "Game Ended" << endl; }
		}

		else
		{
			cout << "Invalid Input. Please try again " << endl;
			i--; //This move didn't count so revert the counter back to previous value
		}
	}

	

	system("PAUSE");
	return 0;
}