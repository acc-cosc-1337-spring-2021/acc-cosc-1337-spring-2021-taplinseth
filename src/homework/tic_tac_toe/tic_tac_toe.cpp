//tic_tac_toe.cpp
#include "tic_tac_toe.h"
#include<iostream>
using std::cout, std::cin;

bool TicTacToe::game_over() 
{
    if (check_row_win() == true)
    {
        set_winner();
        return true;
    }

    else if (check_column_win() == true)
    {
        set_winner();
        return true;
    }
    
    else if (check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }

    else if (check_board_full() == true)
    {
        winner = "C";
        return true;
    }

    else
    {
        return false;
    }
}

void TicTacToe::start_game(string first_player) 
{
    if (first_player == "X" || first_player == "O"){
        player = first_player;
        clear_board();
    }

}

void TicTacToe::mark_board(int position)
{
    pegs.at(position-1) = player;
    this->set_next_player();
}

string TicTacToe::get_player() const
{
    return player;
}

void TicTacToe::set_next_player()
{
    if (player == "X"){
        player = "O";
    } else {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for (int i = 0; i<9; i++)
    {
        if (pegs.at(i) == " ") {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board() 
{
    pegs.insert(pegs.begin(), 9, " ");
}


string player;

vector<string> pegs(9, " ");

string TicTacToe::get_winner()
{
    return winner;
}

bool TicTacToe::check_column_win()
{
        return false;
}

bool TicTacToe::check_row_win()
{
        return false;
}

bool TicTacToe::check_diagonal_win()
{
        return false;
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    
    else
    {
        winner = "X";
    }
}

std::istream& operator>>(std::istream& in, TicTacToe& game) {
    int position;
    
    if(game.pegs.size() == 9){
        cout<<"Player "<<game.get_player()<<". Please input number between 1 to 9 to play: ";
	    cin>>position;
	    game.mark_board(position);
        return in;
    }

    else if(game.pegs.size() == 16){
        cout<<"Player "<<game.get_player()<<". Please input number between 1 to 16 to play: ";
	    cin>>position;
	    game.mark_board(position);
        return in;
    }
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game) {
    if(game.pegs.size() == 9){
        out<<"|"<<game.pegs[0]<<"|"<<game.pegs[1]<<"|"<<game.pegs[2]<<"|"<<"\n";
        out<<"|"<<game.pegs[3]<<"|"<<game.pegs[4]<<"|"<<game.pegs[5]<<"|"<<"\n";
        out<<"|"<<game.pegs[6]<<"|"<<game.pegs[7]<<"|"<<game.pegs[8]<<"|"<<"\n";
    return out;
    }

    else if(game.pegs.size() == 16){
        out<<"|"<<game.pegs[0]<<"|"<<game.pegs[1]<<"|"<<game.pegs[2]<<"|"<<game.pegs[3]<<"|"<<"\n";
        out<<"|"<<game.pegs[4]<<"|"<<game.pegs[5]<<"|"<<game.pegs[6]<<"|"<<game.pegs[7]<<"|"<<"\n";
        out<<"|"<<game.pegs[8]<<"|"<<game.pegs[9]<<"|"<<game.pegs[10]<<"|"<<game.pegs[11]<<"|"<<"\n";
        out<<"|"<<game.pegs[12]<<"|"<<game.pegs[13]<<"|"<<game.pegs[14]<<"|"<<game.pegs[15]<<"|"<<"\n";  
    return out;
    }
}
