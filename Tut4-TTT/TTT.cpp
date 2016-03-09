#include "TTT.h"
#include<iostream>

using namespace std;

TicTacToe::TicTacToe()//initializes grid for new play
{
	for (int i = 1; i <= 3; i++)
	for (int j = 1; j <= 3; j++)
		gridbox[i][j] = '-';
};

TicTacToe::~TicTacToe()
{
};

void TicTacToe::restart()
{
	for (int i = 1; i <= 3; i++)
	for (int j = 1; j <= 3; j++)
		gridbox[i][j] = '-';
};

bool TicTacToe::move(int r, int c, int p)
{
	
};

void TicTacToe::print()
{
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
			cout << gridbox[i][j] << "\t"; //insert tab after each element
		cout << endl;  //end the line after filling each row
	};
};

int TicTacToe::isWon()
{
	
};