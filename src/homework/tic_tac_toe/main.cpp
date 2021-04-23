#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
#include<memory>
using std::unique_ptr;
using std::make_unique;
using std::cout;
using std::cin;

int main() 
{
	unique_ptr<TicTacToe> game;
	string player, play_again, winner, board_size;
	TicTacToeManager manager;

	do{
		cout<<"Would you like a 3X3 or a 4X4 board?\n" "Enter '3' or '4': \n";
		cin>>board_size;

		if (board_size == "3"){
			game = make_unique<TicTacToe3>();
		}
		else if (board_size == "4"){
			game = make_unique<TicTacToe4>();
		}
	} while (board_size != "3" || board_size != "4");
	

	do{
		cout<<"Tic Tac Toe\n";
		do{
			cout<<"First player please enter 'X' or 'O' to start: ";
			cin>>player;
		}while (player != "X" && player != "O");

		game->start_game(player);

		do{
			cin>>*game;
			cout<<*game;

		} while(game->game_over() == false);
		
		manager.save_game(game);
		cout<<"The winner is "<<game->get_winner()<<"\n";

		int o_wins, x_wins, t_wins;
		manager.get_winner_total(o_wins, x_wins, t_wins);
		cout<<"X wins "<<x_wins<<", O wins "<<o_wins<<", Ties "<<t_wins<<"\n";

		cout<<"Would you like to play again? (y/n)";
		cin>>play_again;



	}while (play_again == "y");

	cout<<manager;
	return 0;
}