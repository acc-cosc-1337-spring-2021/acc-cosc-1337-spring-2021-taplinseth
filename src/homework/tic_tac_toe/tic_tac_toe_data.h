//h
#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H
#include"tic_tac_toe.h"
#include<fstream>
#include <iostream>

class TicTacToeData : public TicTacToe
{
public:
    void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);
    std::vector<std::unique_ptr<TicTacToe>> get_games();

private:
    const std::string file_name{"ttt_data.txt"};
};

#endif