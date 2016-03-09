#include "TTT.h"
#include<iostream>

using namespace std;

//Merged from TestOutput branch 3 March 2016

TicTacToe::TicTacToe()//Constructor to initialize grid for new play
{
	for (int i = 0; i < 3; i++)
	for (int j = 0; j < 3; j++)
		gridbox[i][j] = '-';
};

TicTacToe::~TicTacToe() //Default Destructor
{
};

void TicTacToe::restart()  //Resets all elements of gribox -- Same as default constructor
{
	for (int i = 0; i < 3; i++)
	for (int j = 0; j < 3; j++)
		gridbox[i][j] = '-';
};

bool TicTacToe::move(int rows, int cols, int player)
{
	bool checkMove = 0;  //Initialize check flag for illegal moves
	                     //Function checks if moves made by players are legal and if the board has sufficient space available
	if (((rows < 3) && (cols < 3)) && (gridbox[rows][cols] == '-')){
		checkMove = 1;   // Set flag to true to enable a legal move
		if (player == 1){
			gridbox[rows][cols] = 'X';  //Player one uses X's
		}
		else { gridbox[rows][cols] = '0'; } //Other player uses 0's
	}
	return checkMove;
};

void TicTacToe::print()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << gridbox[i][j] << "\t"; //insert tab after each element
		cout << endl;  //end the line after filling each row
	};
};

int TicTacToe::isWon()
{
	int checkp1 = 0, checkp2 = 0, inProgress = 0, draw = 0; //Check control signals for player1, player2, and game progress 
	//Check if Player 1 has won using X's
	/* Array layout is: 00 01 02
						10 11 12
						20 21 22*/
	//check the rows
	checkp1 = 0;
	checkp2 = 0;  //Reset control signals
	for (int i = 0; i < 3; i++)
	{	
		for (int j = 0; j < 3; j++)
		{
			if (gridbox[i][j] == 'X'){ checkp1++; }
			if (gridbox[i][j] == '0'){ checkp2++; }
			if (gridbox[i][j] == '-'){ inProgress = 1; }
		}
		if (checkp1 == 3){ return 1; }
		if (checkp2 == 3){ return 2; }

	}

	//Check the columns
	checkp1 = 0;
	checkp2 = 0;  //Reset control signals
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (gridbox[j][i] == 'X'){ checkp1++; }
			if (gridbox[j][i] == '0'){ checkp2++; }
			if (gridbox[j][i] == '-'){ inProgress = 1; }
		}
		if (checkp1 == 3){ return 1; }
		if (checkp2 == 3){ return 2; }
	}

	//Check the First Diagonal Line
	checkp1 = 0;
	checkp2 = 0;  //Reset control signals
	for (int i = 0; i < 3; i++)
	{
		if (gridbox[i][i] == 'X'){ checkp1++; }
		if (gridbox[i][i] == '0'){ checkp2++; }
		if (gridbox[i][i] == '-'){ inProgress = 1; }

	}
	if (checkp1 == 3){ return 1; }
	if (checkp2 == 3){ return 2; }


	//Check the Second diagonal line
	//This line's indicies are oddly placed when compared to previous patters
	//As the row number increases, the column number decreases
	checkp1 = 0;
	checkp2 = 0;  //Reset control signals
	int temprow = 1;
	for (int j = 2; j >= 0; j--)
	{
		if (gridbox[temprow][j] == 'X'){ checkp1++; }
		if (gridbox[temprow][j] == '0'){ checkp2++; }
		if (gridbox[temprow][j] == '-'){ inProgress = 1; }
		temprow++;
	}
	if (checkp1 == 3){ return 1; }
	if (checkp2 == 3){ return 2; }

	//Do Final Checking for in progress play or draws

	if ((checkp1 == 3) && (checkp2 == 3))
	{
		cout << "Draw" << endl;
		return 3;
	}

	if (inProgress == 1)
	{
		cout << "Game in progress" << endl;
		return 4;
	}
	else
		return 0;

};