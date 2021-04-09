//h
#include<string>
#include<vector>
using std::string;
using std::vector;

class TicTacToe
{
public:
    bool game_over();

    void start_game(string first_player);

    void mark_board(int position);

    string get_player() const;

    void display_board() const;

    string get_winner();

private:
    void set_next_player();

    bool check_board_full();

    void clear_board();

    string player;

    vector<string> pegs;

    bool check_column_win();

    bool check_row_win();

    bool check_diagonal_win();

    void set_winner();

    string winner;
};
