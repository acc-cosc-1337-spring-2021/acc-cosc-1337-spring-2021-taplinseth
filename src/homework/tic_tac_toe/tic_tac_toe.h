//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include<string>
#include<vector>
#include<iostream>
using std::string;
using std::vector;

class TicTacToe
{
friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
friend std::istream& operator>>(std::istream& in, TicTacToe& game);

protected:
    vector<string> pegs;
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();

public:
    TicTacToe(){}
    TicTacToe(int size) : pegs(size*size, " "){};
    TicTacToe(std::vector<string> p, string win) : pegs(p), winner(win){};
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    string get_winner();
    vector<string> get_pegs()const {return pegs;}

private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    string player;
    string winner;
    void set_winner();
};

#endif