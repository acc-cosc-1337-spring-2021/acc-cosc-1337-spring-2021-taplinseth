#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected") {
	TicTacToe game;
	game.start_game("X");
	game.display_board();
	game.mark_board(1);
	game.display_board();
	game.mark_board(2);
	game.display_board();
	game.mark_board(3);
	game.display_board();
	game.mark_board(4);
	game.display_board();
	game.mark_board(5);
	game.display_board();
	game.mark_board(7);
	game.display_board();
	game.mark_board(6);
	game.display_board();
	game.mark_board(9);
	game.display_board();
	game.mark_board(8);
	game.display_board();

	REQUIRE(game.game_over() == true);
}