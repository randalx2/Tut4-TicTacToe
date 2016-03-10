/*PRANEEL MISTHRY 202515355 COMPUTER METHODS 3 TUT4-TICTACTOE**************/
/*9 March 2016**************************************************************************************************************************/
/******************************************************************************************************************************************/

#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

#include "TTT.h"  // Include the header file for the TTT class

int main(){

	int player = 1; //Initialize variable to check player number
	int n = 0;
	int x = 0, y = 0; //Store coordinates for user's move
	char userinput = 'x';

	TicTacToe gameBoard = TicTacToe(); // Created gameboard object of class TicTacToe

	cout << "Welcome to TicTacToe console game" << endl;
	cout << "To play, please enter your move in the following format: " << endl;
	cout << " row number(0 to 2) column number(0 to 2) player number(1 or 2) " << endl;
	cout << "Player one uses X's and Player 2 uses 0's" << endl;
	cout << "To end the game enter the 'r' character on your keyboard" << endl << endl;

	//Test The Print member function and output of grid
	gameBoard.print();  //Initial layout of board is empty

	while (userinput != 'x')
	{
		cout << "Enter any key except x to play " << endl;
		cin >> userinput;

		cout << "Enter your move in the aforementioned format" << endl;
		cin >> x >> y >> player;

		if (gameBoard.move(x, y, player))
		{
			gameBoard.print();
		}

		else
		{
			cout << "Invalid Input. Please try again " << endl;
		}

		if (gameBoard.isWon() == 1)
		{
			cout << "Player 1 wins " << endl;
			gameBoard.restart();
		}

		if (gameBoard.isWon() == 2)
		{
			cout << "Player 2 wins" << endl;
			gameBoard.restart();
		}

		if (gameBoard.isWon() == 3)
		{
			cout << "Draw Match!!" << endl;
			gameBoard.restart();
		}

		if (gameBoard.isWon() == 4)
		{
			cout << "Game still in Progress" << endl;
		}
		
		
	}
	

	system("PAUSE");
	return 0;
}