#include "tic_tac_toe.h"
#include<iostream>
using std::cout;
using std::cin;

int main() 
{
	TicTacToe game;
	string player, play_again, winner;
	int position;

	do{
		cout<<"Tic Tac Toe\n";
		do{
			cout<<"First player please enter 'X' or 'O' to start: ";
			cin>>player;
		}while (player != "X" && player != "O");

		game.start_game(player);
		game.display_board();

		do{
			cout<<"Player "<<game.get_player()<<". Please input number between 1 to 9 to play: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();


		} while(game.game_over() == false);
	cout<<"The winner is "<<game.get_winner()<<"\n";

		cout<<"Would you like to play again? (y/n)";
		cin>>play_again;
	}while (play_again == "y");

	return 0;
}