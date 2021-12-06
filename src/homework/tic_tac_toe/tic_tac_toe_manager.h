//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include"tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include<memory>

using std::unique_ptr;

class TicTacToeManager
{
public:
    void save_game(unique_ptr<TicTacToe>& b);
    friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager & manager);    
    void get_winner_total(int& o, int& w, int&t);
    TicTacToeManager() = default;
    TicTacToeManager(TicTacToeData& data);
    ~TicTacToeManager();

private:
    vector<unique_ptr<TicTacToe>> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    void update_winner_count(string winner);
    TicTacToeData data;

};

#endif