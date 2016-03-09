#include "TTT.h"
#include<iostream>

using namespace std;

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
	if (((rows < 3) && (cols < 3)) && (player > 0 && player < 3) && (gridbox[rows][cols] == '-')){
		checkMove = 1; // Set flag to true to enable a legal move
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

/*int TicTacToe::isWon()
{
	
};*/