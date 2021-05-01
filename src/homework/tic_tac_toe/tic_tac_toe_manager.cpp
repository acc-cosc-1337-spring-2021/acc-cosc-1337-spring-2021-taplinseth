//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "X")
    {
        x_win++;
    } 
    else if (winner == "O")
    {
        o_win++;
    } 
    else {
        ties++;
    }

}
void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{
    o = o_win;
    x = x_win;
    t = ties;
}

std::ostream& operator<<(std::ostream & out, const TicTacToeManager & manager) 
{
    for (auto& item: manager.games)
    {
       out<<item<<"\n";
    }

    return out;
}  

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{
    update_winner_count(b->get_winner());
    games.push_back(std::move(b));
}

TicTacToeManager::TicTacToeManager(TicTacToeData& d) : data{d}
{
    games = data.get_games();

    for (auto& game:games)
    {
        update_winner_count(game->get_winner());
    }
}

TicTacToeManager::~TicTacToeManager() {
    data.save_games(games);
}
