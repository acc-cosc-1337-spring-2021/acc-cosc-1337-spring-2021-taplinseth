#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
using std::unique_ptr;
using std::make_unique;
using std::cout;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
//testing 3X3
TEST_CASE("Test game over if 9 slots are selected") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");	
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Test first player set to X"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player set to O"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test win by first column"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()== false);
	game->mark_board(6);
	REQUIRE(game->game_over()== false);
	game->mark_board(4);
	REQUIRE(game->game_over()== false);
	game->mark_board(9);
	REQUIRE(game->game_over()== false);
	game->mark_board(7);
	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by second column"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(2);
	REQUIRE(game->game_over()== false);
	game->mark_board(6);
	REQUIRE(game->game_over()== false);
	game->mark_board(5);
	REQUIRE(game->game_over()== false);
	game->mark_board(9);
	REQUIRE(game->game_over()== false);
	game->mark_board(8);
	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by third column"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(3);
	REQUIRE(game->game_over()== false);
	game->mark_board(5);
	REQUIRE(game->game_over()== false);
	game->mark_board(6);
	REQUIRE(game->game_over()== false);
	game->mark_board(8);
	REQUIRE(game->game_over()== false);
	game->mark_board(9);
	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by first row"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()== false);
	game->mark_board(6);
	REQUIRE(game->game_over()== false);
	game->mark_board(2);
	REQUIRE(game->game_over()== false);
	game->mark_board(9);
	REQUIRE(game->game_over()== false);
	game->mark_board(3);
	REQUIRE(game->game_over()== true);	
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by second row"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(4);
	REQUIRE(game->game_over()== false);
	game->mark_board(1);
	REQUIRE(game->game_over()== false);
	game->mark_board(5);
	REQUIRE(game->game_over()== false);
	game->mark_board(9);
	REQUIRE(game->game_over()== false);
	game->mark_board(6);
	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by third row"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);
	REQUIRE(game->game_over()== false);
	game->mark_board(6);
	REQUIRE(game->game_over()== false);
	game->mark_board(8);
	REQUIRE(game->game_over()== false);
	game->mark_board(5);
	REQUIRE(game->game_over()== false);
	game->mark_board(9);
	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win diagonally from top left"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()== false);
	game->mark_board(6);
	REQUIRE(game->game_over()== false);
	game->mark_board(5);
	REQUIRE(game->game_over()== false);
	game->mark_board(8);
	REQUIRE(game->game_over()== false);
	game->mark_board(9);
	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win diagonally from bottom left"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);
	REQUIRE(game->game_over()== false);
	game->mark_board(6);
	REQUIRE(game->game_over()== false);
	game->mark_board(5);
	REQUIRE(game->game_over()== false);
	game->mark_board(9);
	REQUIRE(game->game_over()== false);
	game->mark_board(3);
	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Simulate playing 3 or more games with X, O, and C as winners"){
	TicTacToeManager manager;

	unique_ptr<TicTacToe> game1 = make_unique<TicTacToe3>();
	game1->start_game("X");
	game1->mark_board(7);
	REQUIRE(game1->game_over()== false);
	game1->mark_board(6);
	REQUIRE(game1->game_over()== false);
	game1->mark_board(5);
	REQUIRE(game1->game_over()== false);
	game1->mark_board(9);
	REQUIRE(game1->game_over()== false);
	game1->mark_board(3);
	REQUIRE(game1->game_over()== true);
	REQUIRE(game1->get_winner() == "X");
	manager.save_game(game1);

	unique_ptr<TicTacToe> game2 = make_unique<TicTacToe3>();
	game2->start_game("O");
	game2->mark_board(1);
	REQUIRE(game2->game_over()== false);
	game2->mark_board(6);
	REQUIRE(game2->game_over()== false);
	game2->mark_board(5);
	REQUIRE(game2->game_over()== false);
	game2->mark_board(8);
	REQUIRE(game2->game_over()== false);
	game2->mark_board(9);
	REQUIRE(game2->game_over()== true);
	REQUIRE(game2->get_winner() == "O");
	manager.save_game(game2);

	unique_ptr<TicTacToe> game3 = make_unique<TicTacToe3>();
	game3->start_game("X");	
	game3->mark_board(1);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(2);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(3);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(4);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(5);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(7);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(6);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(9);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(8);
	REQUIRE(game3->game_over() == true);
	REQUIRE(game3->get_winner() == "C");
	manager.save_game(game3);

	int o_wins = 0;
	int x_wins = 0;
	int t_wins = 0;
	manager.get_winner_total(o_wins, x_wins, t_wins);
	REQUIRE(o_wins == 1);
	REQUIRE(x_wins == 1);
	REQUIRE(t_wins == 1);
}

//testing 4X4
TEST_CASE("Test game over if 16 slots are selected 4") {
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");	
	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(10);
	REQUIRE(game->game_over() == false);
	game->mark_board(11);
	REQUIRE(game->game_over() == false);
	game->mark_board(12);
	REQUIRE(game->game_over() == false);
	game->mark_board(13);
	REQUIRE(game->game_over() == false);
	game->mark_board(14);
	REQUIRE(game->game_over() == false);
	game->mark_board(15);
	REQUIRE(game->game_over() == false);
	game->mark_board(16);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Test first player set to X 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}

TEST_CASE("Test first player set to O 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}

TEST_CASE("Test win by first column 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()== false);
	game->mark_board(5);
	REQUIRE(game->game_over()== false);
	game->mark_board(9);
	REQUIRE(game->game_over()== false);
	game->mark_board(10);
	REQUIRE(game->game_over()== false);
	game->mark_board(13);
	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by second column 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(2);
	REQUIRE(game->game_over()== false);
	game->mark_board(6);
	REQUIRE(game->game_over()== false);
	game->mark_board(10);
	REQUIRE(game->game_over()== false);
	game->mark_board(11);
	REQUIRE(game->game_over()== false);
	game->mark_board(14);
	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by third column 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(3);
	REQUIRE(game->game_over()== false);
	game->mark_board(7);
	REQUIRE(game->game_over()== false);
	game->mark_board(11);
	REQUIRE(game->game_over()== false);
	game->mark_board(9);
	REQUIRE(game->game_over()== false);
	game->mark_board(15);
	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by fourth column 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);
	REQUIRE(game->game_over()== false);
	game->mark_board(8);
	REQUIRE(game->game_over()== false);
	game->mark_board(12);
	REQUIRE(game->game_over()== false);
	game->mark_board(3);
	REQUIRE(game->game_over()== false);
	game->mark_board(16);
	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by first row 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()== false);
	game->mark_board(2);
	REQUIRE(game->game_over()== false);
	game->mark_board(3);
	REQUIRE(game->game_over()== false);
	game->mark_board(5);
	REQUIRE(game->game_over()== false);
	game->mark_board(4);
	REQUIRE(game->game_over()== true);	
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by second row 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(5);
	REQUIRE(game->game_over()== false);
	game->mark_board(6);
	REQUIRE(game->game_over()== false);
	game->mark_board(7);
	REQUIRE(game->game_over()== false);
	game->mark_board(9);
	REQUIRE(game->game_over()== false);
	game->mark_board(8);
	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by third row 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(9);
	REQUIRE(game->game_over()== false);
	game->mark_board(10);
	REQUIRE(game->game_over()== false);
	game->mark_board(11);
	REQUIRE(game->game_over()== false);
	game->mark_board(5);
	REQUIRE(game->game_over()== false);
	game->mark_board(12);
	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by fourth row 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(13);
	REQUIRE(game->game_over()== false);
	game->mark_board(14);
	REQUIRE(game->game_over()== false);
	game->mark_board(15);
	REQUIRE(game->game_over()== false);
	game->mark_board(7);
	REQUIRE(game->game_over()== false);
	game->mark_board(16);
	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win diagonally from top left 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()== false);
	game->mark_board(6);
	REQUIRE(game->game_over()== false);
	game->mark_board(11);
	REQUIRE(game->game_over()== false);
	game->mark_board(8);
	REQUIRE(game->game_over()== false);
	game->mark_board(16);
	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win diagonally from bottom left 4"){
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);
	REQUIRE(game->game_over()== false);
	game->mark_board(7);
	REQUIRE(game->game_over()== false);
	game->mark_board(10);
	REQUIRE(game->game_over()== false);
	game->mark_board(9);
	REQUIRE(game->game_over()== false);
	game->mark_board(13);
	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Simulate playing 3 or more games with X, O, and C as winners 4"){
	TicTacToeManager manager;

	unique_ptr<TicTacToe> game1 = make_unique<TicTacToe4>();
	game1->start_game("X");
	game1->mark_board(3);
	REQUIRE(game1->game_over()== false);
	game1->mark_board(7);
	REQUIRE(game1->game_over()== false);
	game1->mark_board(5);
	REQUIRE(game1->game_over()== false);
	game1->mark_board(11);
	REQUIRE(game1->game_over()== false);
	game1->mark_board(15);
	REQUIRE(game1->game_over()== true);
	REQUIRE(game1->get_winner() == "X");
	manager.save_game(game1);

	unique_ptr<TicTacToe> game2 = make_unique<TicTacToe4>();
	game2->start_game("O");
	game2->mark_board(1);
	REQUIRE(game2->game_over()== false);
	game2->mark_board(5);
	REQUIRE(game2->game_over()== false);
	game2->mark_board(9);
	REQUIRE(game2->game_over()== false);
	game2->mark_board(8);
	REQUIRE(game2->game_over()== false);
	game2->mark_board(13);
	REQUIRE(game2->game_over()== true);
	REQUIRE(game2->get_winner() == "O");
	manager.save_game(game2);

	unique_ptr<TicTacToe> game3 = make_unique<TicTacToe4>();
	game3->start_game("X");	
	game3->mark_board(1);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(2);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(3);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(4);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(5);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(7);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(6);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(9);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(8);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(10);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(12);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(11);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(13);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(15);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(14);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(16);
	REQUIRE(game3->game_over() == true);
	REQUIRE(game3->get_winner() == "C");
	manager.save_game(game3);

	int o_wins = 0;
	int x_wins = 0;
	int t_wins = 0;
	manager.get_winner_total(o_wins, x_wins, t_wins);
	REQUIRE(o_wins == 1);
	REQUIRE(x_wins == 1);
	REQUIRE(t_wins == 1);
}