/*PRANEEL MISTHRY 202515355 COMPUTER METHODS 3 TUT4-TICTACTOE**************/
/*9 March 2016**************************************************************************************************************************/
/******************************************************************************************************************************************/

#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

#include "TTT.h"  // Include the header file for the TTT class

int main(){

	int Player = 1; //Initialize variable to check player number
	int n = 0;
	TicTacToe gameBoard = TicTacToe(); // Created gameboard object of class TicTacToe

	//Test The Print member function and output of grid
	gameBoard.print();

	system("PAUSE");
	return 0;
}