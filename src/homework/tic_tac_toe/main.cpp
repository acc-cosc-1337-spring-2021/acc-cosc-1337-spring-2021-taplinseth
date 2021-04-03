#include "tic_tac_toe.h"
#include<iostream>
using std::cout;
using std::cin;

int main() 
{

	TicTacToe game;
	string player;
	int position;

	cout<<"Tic Tac Toe\n";
	cout<<"First player please enter 'X' or 'O' to start: ";
	cin>>player;

	game.start_game(player);
	game.display_board();

	do
	{
		cout<<"Player "<<game.get_player()<<". Please input number between 1 to 9 to play: ";
		cin>>position;
		game.mark_board(position);
		game.display_board();

	} while(game.game_over() == false);

	return 0;
}