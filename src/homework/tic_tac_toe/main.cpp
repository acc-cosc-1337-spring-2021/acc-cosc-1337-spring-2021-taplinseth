#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
using std::cout;
using std::cin;

int main() 
{
	TicTacToe game;
	string player, play_again, winner;
	TicTacToeManager manager;

	do{
		cout<<"Tic Tac Toe\n";
		do{
			cout<<"First player please enter 'X' or 'O' to start: ";
			cin>>player;
		}while (player != "X" && player != "O");

		game.start_game(player);

		do{
			cin>>game;
			cout<<game;

		} while(game.game_over() == false);
		
		manager.save_game(game);
		cout<<"The winner is "<<game.get_winner()<<"\n";

		int o_wins, x_wins, t_wins;
		manager.get_winner_total(o_wins, x_wins, t_wins);
		cout<<"X wins "<<x_wins<<", O wins "<<o_wins<<", Ties "<<t_wins<<"\n";

		cout<<"Would you like to play again? (y/n)";
		cin>>play_again;



	}while (play_again == "y");

	cout<<manager;
	return 0;
}